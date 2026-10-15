#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client { class IAssetOperation; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MEDIFDILBEC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB8B6D10)
#define MEDIFDILBEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B6C10)
#define MEDIFDILBEC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB8B6D40)
#define MEDIFDILBEC_INVOKE_OFFSET UNITYSDK_OFFSET(0xB8B6D00)

inline static constexpr unsigned int MEDIFDILBEC_TypeDefinitionIndex = 73836;

	class MEDIFDILBEC : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MEDIFDILBEC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + MEDIFDILBEC_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::Client::IAssetOperation* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::Client::IAssetOperation*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MEDIFDILBEC_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MEDIFDILBEC_ENDINVOKE_OFFSET))(this, a1);
		}

	};

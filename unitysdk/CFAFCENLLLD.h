#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define CFAFCENLLLD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xC9F4430)
#define CFAFCENLLLD_CTOR_OFFSET UNITYSDK_OFFSET(0xC9F4390)
#define CFAFCENLLLD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xC9F44B0)
#define CFAFCENLLLD_INVOKE_OFFSET UNITYSDK_OFFSET(0xC9F4410)

inline static constexpr unsigned int CFAFCENLLLD_TypeDefinitionIndex = 59536;

	class CFAFCENLLLD : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CFAFCENLLLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64))((::PBYTE)hIl2Cpp + CFAFCENLLLD_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CFAFCENLLLD_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean EndInvoke(::System::String* a1, ::RPG::Client::ByteHash16 a2, ::System::Int64 a3, ::System::IAsyncResult* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ByteHash16, ::System::Int64, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CFAFCENLLLD_ENDINVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

	};

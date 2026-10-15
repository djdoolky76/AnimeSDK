#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace RPG::Client { class MapDef; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define BCFMDCAMPDN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EA6810)
#define BCFMDCAMPDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15EA6710)
#define BCFMDCAMPDN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EA6850)
#define BCFMDCAMPDN_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EA6800)

inline static constexpr unsigned int BCFMDCAMPDN_TypeDefinitionIndex = 62204;

	class BCFMDCAMPDN : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + BCFMDCAMPDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::Object* a1, ::RPG::Client::MapDef* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + BCFMDCAMPDN_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::RPG::Client::MapDef* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::RPG::Client::MapDef*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + BCFMDCAMPDN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + BCFMDCAMPDN_ENDINVOKE_OFFSET))(this, a1);
		}

	};

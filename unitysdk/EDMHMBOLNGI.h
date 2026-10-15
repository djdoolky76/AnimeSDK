#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define EDMHMBOLNGI_CTOR_OFFSET UNITYSDK_OFFSET(0x13326510)
#define EDMHMBOLNGI_DHIBLDAMMJO_OFFSET UNITYSDK_OFFSET(0x133265C0)
#define EDMHMBOLNGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13326820)
#define EDMHMBOLNGI_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0x13326760)
#define EDMHMBOLNGI_HGHFKLCGJLP_OFFSET UNITYSDK_OFFSET(0x133266F0)
#define EDMHMBOLNGI_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0x13326870)

inline static constexpr unsigned int EDMHMBOLNGI_TypeDefinitionIndex = 75457;

	class EDMHMBOLNGI : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Boolean AFLGDFPEMNP; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 MECBOFNKBPI; // 0x1C
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_CTOR_OFFSET))(this, a1);
		}

		::System::Void DHIBLDAMMJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_DHIBLDAMMJO_OFFSET))(this, a1);
		}

		::System::Void HGHFKLCGJLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_HGHFKLCGJLP_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EDMHMBOLNGI_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};

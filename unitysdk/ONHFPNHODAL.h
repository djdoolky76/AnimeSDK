#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCJPDOOLBEC;
class NEPOAOEADBE;
class ONHFPNHODAL;
namespace System { class Action; }
namespace System { class Object; }

#define ONHFPNHODAL_AIJLDADIBNM_OFFSET UNITYSDK_OFFSET(0xBF4FA70)
#define ONHFPNHODAL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF4F860)
#define ONHFPNHODAL_CENMBJDMIEE_OFFSET UNITYSDK_OFFSET(0xBF4FCF0)
#define ONHFPNHODAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4F8F0)
#define ONHFPNHODAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF4FA20)
#define ONHFPNHODAL_HJOHDFKLIDK_OFFSET UNITYSDK_OFFSET(0xBF4FB90)
#define ONHFPNHODAL_IEOGLIENPMN_OFFSET UNITYSDK_OFFSET(0xBF4F900)

inline static constexpr unsigned int ONHFPNHODAL_TypeDefinitionIndex = 72149;

	class ONHFPNHODAL : public ::System::Object
	{
	public:
		::System::Action* OBGBLOGOLOC; // 0x10
		::NEPOAOEADBE* NKAKBAIDFLA; // 0x18
		::LCJPDOOLBEC* MIGLENPAECA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHFPNHODAL_CTOR_OFFSET))(this);
		}

		static ::ONHFPNHODAL* BPLPBPMEODA(::NEPOAOEADBE* a1, ::LCJPDOOLBEC* a2, ::System::Action* a3)
		{
			return ((::ONHFPNHODAL*(*)(::NEPOAOEADBE*, ::LCJPDOOLBEC*, ::System::Action*))((::PBYTE)hIl2Cpp + ONHFPNHODAL_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHFPNHODAL_DISPOSE_OFFSET))(this);
		}

		::System::Int32 HJOHDFKLIDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHFPNHODAL_HJOHDFKLIDK_OFFSET))(this);
		}

		::System::Void IEOGLIENPMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHFPNHODAL_IEOGLIENPMN_OFFSET))(this);
		}

		::System::Void AIJLDADIBNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONHFPNHODAL_AIJLDADIBNM_OFFSET))(this);
		}

		::System::Void CENMBJDMIEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONHFPNHODAL_CENMBJDMIEE_OFFSET))(this, a1);
		}

	};

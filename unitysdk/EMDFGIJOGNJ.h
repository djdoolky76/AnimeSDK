#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMDFGIJOGNJ;
class PBHBHNNFDCM;
namespace RPG::GameCore { class IdleLiveGiftRow; }

#define EMDFGIJOGNJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15524D20)
#define EMDFGIJOGNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15524E40)
#define EMDFGIJOGNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15525560)
#define EMDFGIJOGNJ_FHAJCNDEOII_OFFSET UNITYSDK_OFFSET(0x15525140)
#define EMDFGIJOGNJ_LKGAKJJNFAF_OFFSET UNITYSDK_OFFSET(0x15524E80)
#define EMDFGIJOGNJ_OBIAKNEEBIC_OFFSET UNITYSDK_OFFSET(0x15525360)

inline static constexpr unsigned int EMDFGIJOGNJ_TypeDefinitionIndex = 75339;

	class EMDFGIJOGNJ : public ::System::Object
	{
	public:
		::PBHBHNNFDCM* GALAHGAJODG; // 0x10
		::System::UInt32 NHDBMIFNACP; // 0x18
		::System::Void _ctor(::RPG::GameCore::IdleLiveGiftRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveGiftRow*))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_CTOR_OFFSET))(this, a1);
		}

		static ::EMDFGIJOGNJ* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::EMDFGIJOGNJ*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void LKGAKJJNFAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_LKGAKJJNFAF_OFFSET))(this);
		}

		::System::Void FHAJCNDEOII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_FHAJCNDEOII_OFFSET))(this);
		}

		::System::Void OBIAKNEEBIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_OBIAKNEEBIC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDFGIJOGNJ_DISPOSE_OFFSET))(this);
		}

	};

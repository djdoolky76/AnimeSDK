#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"
class PBHBHNNFDCM;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }

#define OLLANKLBHKL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF08390)
#define OLLANKLBHKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF08740)
#define OLLANKLBHKL_FHAJCNDEOII_OFFSET UNITYSDK_OFFSET(0xBF086B0)
#define OLLANKLBHKL_LKGAKJJNFAF_OFFSET UNITYSDK_OFFSET(0xBF083D0)

inline static constexpr unsigned int OLLANKLBHKL_TypeDefinitionIndex = 75341;

	class OLLANKLBHKL : public ::System::Object
	{
	public:
		::PBHBHNNFDCM* GALAHGAJODG; // 0x10
		::RPG::GameCore::IdleLiveSpineAnimTriggerType ALACEJLHIAI; // 0x18
		::System::Void _ctor(::RPG::GameCore::IdleLiveSpineCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + OLLANKLBHKL_CTOR_OFFSET))(this, a1);
		}

		::System::Void LKGAKJJNFAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLANKLBHKL_LKGAKJJNFAF_OFFSET))(this);
		}

		::System::Void FHAJCNDEOII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLANKLBHKL_FHAJCNDEOII_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLANKLBHKL_DISPOSE_OFFSET))(this);
		}

	};

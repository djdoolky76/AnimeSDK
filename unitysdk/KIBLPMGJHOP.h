#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PingPongSPSkillType.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class PingPongProjectileGroup; }

#define KIBLPMGJHOP_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x197A4510)
#define KIBLPMGJHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x197A4500)
#define KIBLPMGJHOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x197A4BA0)
#define KIBLPMGJHOP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197A4570)
#define KIBLPMGJHOP_KAFHLHLOPHA_OFFSET UNITYSDK_OFFSET(0x197A5440)
#define KIBLPMGJHOP_MBNAAEGPPPF_OFFSET UNITYSDK_OFFSET(0x197A53D0)

inline static constexpr unsigned int KIBLPMGJHOP_TypeDefinitionIndex = 78999;

	class KIBLPMGJHOP : public ::System::Object
	{
	public:
		::OMPCEECHGJK* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::OCPOIDCNJDA*>* DBENPOFGKOE; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_EXECUTE_OFFSET))(this);
		}

		::RPG::GameCore::PingPongProjectileGroup* MBNAAEGPPPF(::RPG::GameCore::PingPongSPSkillType a1)
		{
			return ((::RPG::GameCore::PingPongProjectileGroup*(*)(::PVOID, ::RPG::GameCore::PingPongSPSkillType))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_MBNAAEGPPPF_OFFSET))(this, a1);
		}

		::System::Void KAFHLHLOPHA(::RPG::GameCore::PingPongProjectileGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PingPongProjectileGroup*))((::PBYTE)hIl2Cpp + KIBLPMGJHOP_KAFHLHLOPHA_OFFSET))(this, a1);
		}

	};

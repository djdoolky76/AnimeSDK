#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
#include "unitysdk/RPG/Client/MovementStoppedRootMotionBakedData_RootMotionCurve.h"
namespace RPG::Client { class MovementStoppedRootMotionBakedData_OAKCINDCPAJ; }

#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_AIGLKBJCIFI_OFFSET UNITYSDK_OFFSET(0xC9CCF50)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC9CD6F0)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC9CCEB0)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_1_OFFSET UNITYSDK_OFFSET(0xC9CD1A0)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_2_OFFSET UNITYSDK_OFFSET(0xC9CD500)
#define RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_OFFSET UNITYSDK_OFFSET(0xC9CD030)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterRootMotionBakedData_TypeDefinitionIndex = 60057;

	class CharacterRootMotionBakedData : public ::System::Object
	{
	public:
		::System::Single selectTolerance; // 0x10
		::System::Single OverrideRotationSpeed; // 0x14
		::System::Single ReferenceWalkSpeed; // 0x18
		::System::Single ReferenceRunSpeed; // 0x1C
		::System::Single ReferenceFastRunSpeed; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::MovementStoppedRootMotionBakedData>* MovementStoppedArray; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Boolean OCIOOOKIBIC(::IMOHEHDKGPK a1, ::System::Single a2, ::RPG::GameCore::CharacterMotionFlag a3, ::System::Single a4, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a5, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMOHEHDKGPK, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean OCIOOOKIBIC_1(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::RPG::GameCore::CharacterMotionFlag a4, ::System::Single a5, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a6, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean OCIOOOKIBIC_2(::System::Int32 a1, ::System::Single a2, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ* a3, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::RPG::Client::MovementStoppedRootMotionBakedData_OAKCINDCPAJ*, ::RPG::Client::MovementStoppedRootMotionBakedData_RootMotionCurve))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_OCIOOOKIBIC_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AIGLKBJCIFI(::RPG::Client::MovementStoppedRootMotionBakedData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MovementStoppedRootMotionBakedData))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERROOTMOTIONBAKEDDATA_AIGLKBJCIFI_OFFSET))(this, a1);
		}

	};
}

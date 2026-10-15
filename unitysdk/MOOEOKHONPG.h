#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class MOOEOKHONPG;

#define MOOEOKHONPG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBA36C30)
#define MOOEOKHONPG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA36910)
#define MOOEOKHONPG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA36D50)
#define MOOEOKHONPG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBA369C0)
#define MOOEOKHONPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA369A0)
#define MOOEOKHONPG_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xBA36840)
#define MOOEOKHONPG_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xBA36810)
#define MOOEOKHONPG_JELNLFLNGFC_OFFSET UNITYSDK_OFFSET(0xBA36870)
#define MOOEOKHONPG_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBA36800)
#define MOOEOKHONPG_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBA36BF0)
#define MOOEOKHONPG_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xBA36860)
#define MOOEOKHONPG_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xBA36830)

	class MOOEOKHONPG : public ::DEHLMHKDEKC
	{
	public:
		::RPG::MVector3 _EndPos_k__BackingField; // 0x40
		::RPG::MVector3 _StartPos_k__BackingField; // 0x4C
		static ::System::Int32* StaticGet_PMHLFNJNKNP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MOOEOKHONPG")->GetStaticField(0x5250);
		}

		static ::System::Int32* StaticGet_HKGHMHKEJNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MOOEOKHONPG")->GetStaticField(0x5254);
		}

		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + MOOEOKHONPG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOEOKHONPG_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_JKOKFFCBJLJ_OFFSET))(this);
		}

		::RPG::MVector3 get_StartPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MOOEOKHONPG_SET_STARTPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_EndPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MOOEOKHONPG_SET_ENDPOS_OFFSET))(this, a1);
		}

		::System::Void JELNLFLNGFC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOOEOKHONPG_JELNLFLNGFC_OFFSET))(this, a1, a2);
		}

		static ::MOOEOKHONPG* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::MOOEOKHONPG*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + MOOEOKHONPG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOEOKHONPG_AHEEAFKFALM_OFFSET))(this);
		}

	};

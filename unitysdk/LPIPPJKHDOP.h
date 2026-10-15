#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class LPIPPJKHDOP;

#define LPIPPJKHDOP_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB81A880)
#define LPIPPJKHDOP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB81A2C0)
#define LPIPPJKHDOP_CCTOR_OFFSET UNITYSDK_OFFSET(0xB81AA60)
#define LPIPPJKHDOP_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB81A370)
#define LPIPPJKHDOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB81A350)
#define LPIPPJKHDOP_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB81A260)
#define LPIPPJKHDOP_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB81A230)
#define LPIPPJKHDOP_GET_V0_OFFSET UNITYSDK_OFFSET(0xB81A290)
#define LPIPPJKHDOP_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB81A220)
#define LPIPPJKHDOP_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB81A570)
#define LPIPPJKHDOP_NGJHJMAGCEP_OFFSET UNITYSDK_OFFSET(0xB81A9A0)
#define LPIPPJKHDOP_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xB81A740)
#define LPIPPJKHDOP_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB81A280)
#define LPIPPJKHDOP_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB81A250)
#define LPIPPJKHDOP_SET_V0_OFFSET UNITYSDK_OFFSET(0xB81A2B0)

inline static constexpr unsigned int LPIPPJKHDOP_TypeDefinitionIndex = 78114;

	class LPIPPJKHDOP : public ::DEHLMHKDEKC
	{
	public:
		::RPG::MVector3 _StartPos_k__BackingField; // 0x40
		::RPG::MVector3 _V0_k__BackingField; // 0x4C
		::RPG::MVector3 _EndPos_k__BackingField; // 0x58
		static ::System::Int32* StaticGet_LKHIIAMEHFE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPIPPJKHDOP")->GetStaticField(0x15410);
		}

		static ::System::Int32* StaticGet_NIJJLNIJNMI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LPIPPJKHDOP")->GetStaticField(0x15414);
		}

		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPIPPJKHDOP_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_JKOKFFCBJLJ_OFFSET))(this);
		}

		::RPG::MVector3 get_StartPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_SET_STARTPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_EndPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_SET_ENDPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_V0()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_GET_V0_OFFSET))(this);
		}

		::System::Void set_V0(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_SET_V0_OFFSET))(this, a1);
		}

		static ::LPIPPJKHDOP* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::LPIPPJKHDOP*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void NGJHJMAGCEP(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_NGJHJMAGCEP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIPPJKHDOP_OMJCIPOOJNF_OFFSET))(this);
		}

	};

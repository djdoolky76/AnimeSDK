#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class MCJLLENMEAA;

#define MCJLLENMEAA_AADIIEPCFCO_OFFSET UNITYSDK_OFFSET(0xB87B5E0)
#define MCJLLENMEAA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB87B850)
#define MCJLLENMEAA_BJEPGOKKKMI_OFFSET UNITYSDK_OFFSET(0xB87B1D0)
#define MCJLLENMEAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB87AEE0)
#define MCJLLENMEAA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB87B890)
#define MCJLLENMEAA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB87B020)
#define MCJLLENMEAA_CTOR_OFFSET UNITYSDK_OFFSET(0xB87AF70)
#define MCJLLENMEAA_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB87AEB0)
#define MCJLLENMEAA_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB87AE80)
#define MCJLLENMEAA_IBKNAOGKDMK_OFFSET UNITYSDK_OFFSET(0xB87AF90)
#define MCJLLENMEAA_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB87AE70)
#define MCJLLENMEAA_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB87B3C0)
#define MCJLLENMEAA_ODHBNAPHNBA_OFFSET UNITYSDK_OFFSET(0xB87B660)
#define MCJLLENMEAA_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xB87B4A0)
#define MCJLLENMEAA_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB87AED0)
#define MCJLLENMEAA_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB87AEA0)

inline static constexpr unsigned int MCJLLENMEAA_TypeDefinitionIndex = 78120;

	class MCJLLENMEAA : public ::DEHLMHKDEKC
	{
	public:
		::System::Boolean CPDCKKODNOL; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::GameCore::CakeRaceMoveState CKMDHLPCLFH; // 0x44
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x48
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x54
		static ::System::Int32* StaticGet_MJBNAOCGFKN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MCJLLENMEAA")->GetStaticField(0x13F60);
		}

		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + MCJLLENMEAA_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCJLLENMEAA_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_JKOKFFCBJLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCJLLENMEAA_SET_STARTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCJLLENMEAA_SET_ENDPOS_OFFSET))(this, a1);
		}

		static ::MCJLLENMEAA* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::MCJLLENMEAA*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + MCJLLENMEAA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void IBKNAOGKDMK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MCJLLENMEAA_IBKNAOGKDMK_OFFSET))(this, a1, a2);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_OMJCIPOOJNF_OFFSET))(this);
		}

		::System::Void BJEPGOKKKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_BJEPGOKKKMI_OFFSET))(this);
		}

		::System::Void ODHBNAPHNBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_ODHBNAPHNBA_OFFSET))(this);
		}

		::System::Boolean AADIIEPCFCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJLLENMEAA_AADIIEPCFCO_OFFSET))(this);
		}

	};

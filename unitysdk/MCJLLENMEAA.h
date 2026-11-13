#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class MCJLLENMEAA;

#define MCJLLENMEAA_AADIIEPCFCO_OFFSET UNITYSDK_OFFSET(0x1B848970)
#define MCJLLENMEAA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1B848BE0)
#define MCJLLENMEAA_BJEPGOKKKMI_OFFSET UNITYSDK_OFFSET(0x1B848560)
#define MCJLLENMEAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B848270)
#define MCJLLENMEAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B848C20)
#define MCJLLENMEAA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1B8483B0)
#define MCJLLENMEAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B848300)
#define MCJLLENMEAA_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1B848240)
#define MCJLLENMEAA_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1B848210)
#define MCJLLENMEAA_IBKNAOGKDMK_OFFSET UNITYSDK_OFFSET(0x1B848320)
#define MCJLLENMEAA_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x1B848200)
#define MCJLLENMEAA_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1B848750)
#define MCJLLENMEAA_ODHBNAPHNBA_OFFSET UNITYSDK_OFFSET(0x1B8489F0)
#define MCJLLENMEAA_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0x1B848830)
#define MCJLLENMEAA_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1B848260)
#define MCJLLENMEAA_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1B848230)

inline static constexpr unsigned int MCJLLENMEAA_TypeDefinitionIndex = 80855;

	class MCJLLENMEAA : public ::DEHLMHKDEKC
	{
	public:
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x40
		::System::Boolean CPDCKKODNOL; // 0x4C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x50
		::RPG::GameCore::CakeRaceMoveState CKMDHLPCLFH; // 0x5C
		static ::System::Int32* StaticGet_MJBNAOCGFKN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MCJLLENMEAA")->GetStaticField(0x15F20);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class JHJJIENKMDN;
namespace RPG::GameCore { class CakeRaceMoveStateConfig; }

#define JHJJIENKMDN_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB1B8360)
#define JHJJIENKMDN_BCIPBJPLAPA_OFFSET UNITYSDK_OFFSET(0xB1B85C0)
#define JHJJIENKMDN_BPGOEFAOIHN_OFFSET UNITYSDK_OFFSET(0xB1B86B0)
#define JHJJIENKMDN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB1B7190)
#define JHJJIENKMDN_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB1B7240)
#define JHJJIENKMDN_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B7220)
#define JHJJIENKMDN_DDIPKFALCJC_OFFSET UNITYSDK_OFFSET(0xB1B8310)
#define JHJJIENKMDN_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB1B7130)
#define JHJJIENKMDN_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB1B7100)
#define JHJJIENKMDN_GET_V0_OFFSET UNITYSDK_OFFSET(0xB1B7160)
#define JHJJIENKMDN_GMKFJDOFCHI_OFFSET UNITYSDK_OFFSET(0xB1B75A0)
#define JHJJIENKMDN_JGBDFKMFJEG_OFFSET UNITYSDK_OFFSET(0xB1B8780)
#define JHJJIENKMDN_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB1B70F0)
#define JHJJIENKMDN_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB1B7D20)
#define JHJJIENKMDN_NBHMDJIFLCK_OFFSET UNITYSDK_OFFSET(0xB1B8DC0)
#define JHJJIENKMDN_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xB1B81D0)
#define JHJJIENKMDN_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB1B7150)
#define JHJJIENKMDN_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB1B7120)
#define JHJJIENKMDN_SET_V0_OFFSET UNITYSDK_OFFSET(0xB1B7180)

inline static constexpr unsigned int JHJJIENKMDN_TypeDefinitionIndex = 78118;

	class JHJJIENKMDN : public ::DEHLMHKDEKC
	{
	public:
		::RPG::GameCore::CakeRaceMoveStateConfig* ECDKGBEFMNM; // 0x40
		::RPG::Client::TriggerEffectParamsRef EBHIGMNNLEL; // 0x48
		::RPG::MVector3 _V0_k__BackingField; // 0x58
		::RPG::GameCore::CakeRaceCurveType AGEMLLDDOBO; // 0x64
		::RPG::MVector3 _StartPos_k__BackingField; // 0x68
		::RPG::MVector3 _EndPos_k__BackingField; // 0x74
		::RPG::GameCore::CakeRaceMoveState CKMDHLPCLFH; // 0x80
		::System::Single HAANJDOFFIF; // 0x84
		::System::Single JIOCGOAJOAL; // 0x88
		::System::UInt32 BNEBAFDLFDA; // 0x8C
		// static const ::System::Object PKMDICBIPDF; // 0x0
		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + JHJJIENKMDN_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_JKOKFFCBJLJ_OFFSET))(this);
		}

		::RPG::MVector3 get_StartPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JHJJIENKMDN_SET_STARTPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_EndPos()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JHJJIENKMDN_SET_ENDPOS_OFFSET))(this, a1);
		}

		::RPG::MVector3 get_V0()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_GET_V0_OFFSET))(this);
		}

		::System::Void set_V0(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + JHJJIENKMDN_SET_V0_OFFSET))(this, a1);
		}

		static ::JHJJIENKMDN* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::JHJJIENKMDN*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + JHJJIENKMDN_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void GMKFJDOFCHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_GMKFJDOFCHI_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Void BPGOEFAOIHN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JHJJIENKMDN_BPGOEFAOIHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_OMJCIPOOJNF_OFFSET))(this);
		}

		::System::Void DDIPKFALCJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_DDIPKFALCJC_OFFSET))(this);
		}

		::System::Single BCIPBJPLAPA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_BCIPBJPLAPA_OFFSET))(this);
		}

		::System::Void JGBDFKMFJEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_JGBDFKMFJEG_OFFSET))(this);
		}

		::System::Single NBHMDJIFLCK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJJIENKMDN_NBHMDJIFLCK_OFFSET))(this);
		}

	};

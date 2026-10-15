#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDJIIKGLFD;
class OMMEOILKLHA;
namespace UnityEngine { class Transform; }

#define OMMEOILKLHA_ACLNNIECDBL_OFFSET UNITYSDK_OFFSET(0xBF33CF0)
#define OMMEOILKLHA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBF34320)
#define OMMEOILKLHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF33C70)
#define OMMEOILKLHA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBF33F80)
#define OMMEOILKLHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF33CE0)
#define OMMEOILKLHA_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0xBF33DE0)
#define OMMEOILKLHA_IOJHNHHMBHH_OFFSET UNITYSDK_OFFSET(0xBF33F10)
#define OMMEOILKLHA_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBF33C60)
#define OMMEOILKLHA_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBF34040)
#define OMMEOILKLHA_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xBF34180)

inline static constexpr unsigned int OMMEOILKLHA_TypeDefinitionIndex = 78022;

	class OMMEOILKLHA : public ::EFENAEKOKBI
	{
	public:
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
		::System::Single EDENFAKAJIL; // 0x30
		::System::Single CDOEDJAOFAL; // 0x34
		// static const ::System::Object EKOPCJDOEBD; // 0x0
		// static const ::System::Object NGGKJCLACEP; // 0x0
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + OMMEOILKLHA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEOILKLHA_JKOKFFCBJLJ_OFFSET))(this);
		}

		static ::OMMEOILKLHA* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::OMMEOILKLHA*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + OMMEOILKLHA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void ACLNNIECDBL(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + OMMEOILKLHA_ACLNNIECDBL_OFFSET))(this, a1, a2);
		}

		::System::Void IIOIBAAMBHL(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + OMMEOILKLHA_IIOIBAAMBHL_OFFSET))(this, a1, a2);
		}

		::System::Void IOJHNHHMBHH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMMEOILKLHA_IOJHNHHMBHH_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEOILKLHA_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEOILKLHA_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEOILKLHA_AHEEAFKFALM_OFFSET))(this);
		}

		::System::Boolean OMJCIPOOJNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMMEOILKLHA_OMJCIPOOJNF_OFFSET))(this);
		}

	};

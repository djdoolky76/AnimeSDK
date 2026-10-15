#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDJIIKGLFD;
class OMMEOILKLHA;
namespace UnityEngine { class Transform; }

#define OMMEOILKLHA_ACLNNIECDBL_OFFSET UNITYSDK_OFFSET(0xBF2C6C0)
#define OMMEOILKLHA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBF2CCF0)
#define OMMEOILKLHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBF2C640)
#define OMMEOILKLHA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBF2C950)
#define OMMEOILKLHA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF2C6B0)
#define OMMEOILKLHA_IIOIBAAMBHL_OFFSET UNITYSDK_OFFSET(0xBF2C7B0)
#define OMMEOILKLHA_IOJHNHHMBHH_OFFSET UNITYSDK_OFFSET(0xBF2C8E0)
#define OMMEOILKLHA_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBF2C630)
#define OMMEOILKLHA_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xBF2CA10)
#define OMMEOILKLHA_OMJCIPOOJNF_OFFSET UNITYSDK_OFFSET(0xBF2CB50)

inline static constexpr unsigned int OMMEOILKLHA_TypeDefinitionIndex = 78021;

	class OMMEOILKLHA : public ::EFENAEKOKBI
	{
	public:
		::UnityEngine::Transform* NHNJKCPPLBA; // 0x28
		::System::Single CDOEDJAOFAL; // 0x30
		::System::Single EDENFAKAJIL; // 0x34
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
class POHNBOACDHB;

#define KMIHICBFNIG_ADBFNJJGBED_OFFSET UNITYSDK_OFFSET(0xBDA5D10)
#define KMIHICBFNIG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBDA5560)
#define KMIHICBFNIG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBDA6C30)
#define KMIHICBFNIG_CJDEGLLMEJK_OFFSET UNITYSDK_OFFSET(0xBDA5A60)
#define KMIHICBFNIG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBDA4C80)
#define KMIHICBFNIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA6C80)
#define KMIHICBFNIG_HANCFLGHDDD_OFFSET UNITYSDK_OFFSET(0xBDA66F0)
#define KMIHICBFNIG_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBDA5680)
#define KMIHICBFNIG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBDA4AA0)
#define KMIHICBFNIG_NDJEGHKIAEG_OFFSET UNITYSDK_OFFSET(0xBDA6BE0)
#define KMIHICBFNIG_ODJKHKMJMDA_OFFSET UNITYSDK_OFFSET(0xBDA5280)

inline static constexpr unsigned int KMIHICBFNIG_TypeDefinitionIndex = 79360;

	class KMIHICBFNIG : public ::KBLKHFKCCBC
	{
	public:
		::System::Single MLKDOFKEMHP; // 0x38
		::System::Single BPAIDCADMDO; // 0x3C
		::System::Boolean CBLKGCJPJJP; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single GOMBCCJHGNL; // 0x44
		::System::Single PJNIALNINGJ; // 0x48
		// static const ::System::Object DFFCAIAJEIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + KMIHICBFNIG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + KMIHICBFNIG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + KMIHICBFNIG_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMIHICBFNIG_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Boolean ADBFNJJGBED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_ADBFNJJGBED_OFFSET))(this);
		}

		::System::Boolean CJDEGLLMEJK(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + KMIHICBFNIG_CJDEGLLMEJK_OFFSET))(this, a1);
		}

		::System::Single HANCFLGHDDD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_HANCFLGHDDD_OFFSET))(this);
		}

		::System::Single ODJKHKMJMDA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_ODJKHKMJMDA_OFFSET))(this);
		}

		::System::Single NDJEGHKIAEG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_NDJEGHKIAEG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KMIHICBFNIG_BPMGPFLHPLC_OFFSET))(this);
		}

	};

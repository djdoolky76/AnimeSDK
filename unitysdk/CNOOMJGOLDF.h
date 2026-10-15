#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFENAEKOKBI.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceCameraStateType.h"
class AJDJIIKGLFD;
class CNOOMJGOLDF;

#define CNOOMJGOLDF_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xDA5CE00)
#define CNOOMJGOLDF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDA5C850)
#define CNOOMJGOLDF_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xDA5CB60)
#define CNOOMJGOLDF_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5C8D0)
#define CNOOMJGOLDF_GET_DRAGDELTARATIO_OFFSET UNITYSDK_OFFSET(0xDA5C820)
#define CNOOMJGOLDF_GET_GAMEPADDRAGSPEED_OFFSET UNITYSDK_OFFSET(0xDA5C830)
#define CNOOMJGOLDF_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xDA5C840)
#define CNOOMJGOLDF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xDA5CBA0)
#define CNOOMJGOLDF_ONDRAG_OFFSET UNITYSDK_OFFSET(0xDA5CB00)
#define CNOOMJGOLDF_POOKMBGIADN_OFFSET UNITYSDK_OFFSET(0xDA5CA80)

inline static constexpr unsigned int CNOOMJGOLDF_TypeDefinitionIndex = 78025;

	class CNOOMJGOLDF : public ::EFENAEKOKBI
	{
	public:
		::System::Single ILMJMKINDEL; // 0x28
		::System::Single _GamepadDragSpeed_k__BackingField; // 0x2C
		::System::Single BFCNAEKMAEN; // 0x30
		::System::Single _DragDeltaRatio_k__BackingField; // 0x34
		::System::Single OOACPHFBIIJ; // 0x38
		::System::Void _ctor(::AJDJIIKGLFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_CTOR_OFFSET))(this, a1);
		}

		::System::Single get_DragDeltaRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_GET_DRAGDELTARATIO_OFFSET))(this);
		}

		::System::Single get_GamepadDragSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_GET_GAMEPADDRAGSPEED_OFFSET))(this);
		}

		::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::LittleGame::CakeRace::CakeRaceCameraStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_JKOKFFCBJLJ_OFFSET))(this);
		}

		static ::CNOOMJGOLDF* BPLPBPMEODA(::AJDJIIKGLFD* a1)
		{
			return ((::CNOOMJGOLDF*(*)(::AJDJIIKGLFD*))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void POOKMBGIADN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_POOKMBGIADN_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOOMJGOLDF_AHEEAFKFALM_OFFSET))(this);
		}

	};

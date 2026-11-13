#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKHEJKOOOKG.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;
namespace System { class String; }

#define CMOLDPAIOOK_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x1B1A9DA0)
#define CMOLDPAIOOK_BGMDHDCODLO_OFFSET UNITYSDK_OFFSET(0x1B1AAD30)
#define CMOLDPAIOOK_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x1B1AB080)
#define CMOLDPAIOOK_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x1B1A9980)
#define CMOLDPAIOOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1B1AB0C0)
#define CMOLDPAIOOK_DCOJNENPNND_OFFSET UNITYSDK_OFFSET(0x1B1A9E10)
#define CMOLDPAIOOK_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0x1B1AA7B0)
#define CMOLDPAIOOK_GIOANHJCKOG_OFFSET UNITYSDK_OFFSET(0x1B1AAC30)
#define CMOLDPAIOOK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x1B1AA130)
#define CMOLDPAIOOK_IJNHOFLNCFJ_OFFSET UNITYSDK_OFFSET(0x1B1AA590)
#define CMOLDPAIOOK_IJPNMDFBMHB_OFFSET UNITYSDK_OFFSET(0x1B1AA2D0)
#define CMOLDPAIOOK_JDDGFPDDCNM_OFFSET UNITYSDK_OFFSET(0x1B1AABC0)
#define CMOLDPAIOOK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B1A9820)
#define CMOLDPAIOOK_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0x1B1AAAC0)

inline static constexpr unsigned int CMOLDPAIOOK_TypeDefinitionIndex = 79349;

	class CMOLDPAIOOK : public ::KKHEJKOOOKG
	{
	public:
		::System::String* ENPMNBGCEON; // 0x18
		::System::String* DFHIPNMAJCP; // 0x20
		::System::String* NNGADLLPNNP; // 0x28
		::System::Boolean POPDKFFPMLB; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single NDNNOPMLHIN; // 0x34
		// static const ::System::String* NBNPNLEJKHP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void DCOJNENPNND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_DCOJNENPNND_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void JDDGFPDDCNM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_JDDGFPDDCNM_OFFSET))(this, a1);
		}

		::System::Void BGMDHDCODLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_BGMDHDCODLO_OFFSET))(this);
		}

		::System::Void IJNHOFLNCFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_IJNHOFLNCFJ_OFFSET))(this);
		}

		::System::Boolean IJPNMDFBMHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_IJPNMDFBMHB_OFFSET))(this);
		}

		::System::Void GIOANHJCKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_GIOANHJCKOG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOLDPAIOOK_BPMGPFLHPLC_OFFSET))(this);
		}

	};

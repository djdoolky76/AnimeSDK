#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKIPJBKNCNB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define BHGKHBHBMEL_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB478FB0)
#define BHGKHBHBMEL_CTOR_OFFSET UNITYSDK_OFFSET(0xB479000)
#define BHGKHBHBMEL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB478D10)
#define BHGKHBHBMEL_KFKCMNKIGDL_OFFSET UNITYSDK_OFFSET(0xB478D90)
#define BHGKHBHBMEL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB478C30)
#define BHGKHBHBMEL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB478E60)

inline static constexpr unsigned int BHGKHBHBMEL_TypeDefinitionIndex = 77052;

	class BHGKHBHBMEL : public ::GKIPJBKNCNB
	{
	public:
		::System::Single JLLAGLHOAOA; // 0x48
		::System::Single MLKDOFKEMHP; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KFKCMNKIGDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_KFKCMNKIGDL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BHGKHBHBMEL_BPMGPFLHPLC_OFFSET))(this);
		}

	};

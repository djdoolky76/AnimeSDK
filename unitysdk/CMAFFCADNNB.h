#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class BAIBJGAMDAI;
class EOLPGHDBJNF;

#define CMAFFCADNNB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA243C0)
#define CMAFFCADNNB_GBKONKDBJAK_OFFSET UNITYSDK_OFFSET(0xDA24420)

inline static constexpr unsigned int CMAFFCADNNB_TypeDefinitionIndex = 63903;

	class CMAFFCADNNB : public ::System::Object
	{
	public:
		::BAIBJGAMDAI* JIHBGMMGJCE; // 0x10
		::System::UInt32 BBJKFHDHCPK; // 0x18
		::System::UInt32 GKEIEIBAKBK; // 0x1C
		::System::Void _ctor(::BAIBJGAMDAI* a1, ::EOLPGHDBJNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BAIBJGAMDAI*, ::EOLPGHDBJNF*))((::PBYTE)hIl2Cpp + CMAFFCADNNB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean GBKONKDBJAK(::RPG::GameCore::ExpeditionBattleFlowStateType a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CMAFFCADNNB_GBKONKDBJAK_OFFSET))(this, a1, a2, a3, a4);
		}

	};

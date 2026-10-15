#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelNavNodeConditionLogicType.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace RPG::GameCore { class LevelNavNodeConditionInfos; }

#define FFNIEJJBGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define FFNIEJJBGED_FPCKOLFADAC_OFFSET UNITYSDK_OFFSET(0x3C386A0)
#define FFNIEJJBGED_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define FFNIEJJBGED_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FFNIEJJBGED_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FFNIEJJBGED_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3C38700)
#define FFNIEJJBGED_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define FFNIEJJBGED_KANONFKNODB_OFFSET UNITYSDK_OFFSET(0x3C38650)
#define FFNIEJJBGED_KKHCCLHAOBD_OFFSET UNITYSDK_OFFSET(0x3C386B0)
#define FFNIEJJBGED_PEMJALLNANO_OFFSET UNITYSDK_OFFSET(0x3C38620)

	struct alignas(8) FFNIEJJBGED
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FFNIEJJBGED_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::LevelNavNodeConditionLogicType PEMJALLNANO()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_PEMJALLNANO_OFFSET))(this);
		}

		::System::Void KANONFKNODB(::RPG::GameCore::LevelNavNodeConditionLogicType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavNodeConditionLogicType))((::PBYTE)hIl2Cpp + FFNIEJJBGED_KANONFKNODB_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* FPCKOLFADAC()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_FPCKOLFADAC_OFFSET))(this);
		}

		::System::Void KKHCCLHAOBD(::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelNavNodeConditionInfo*>*))((::PBYTE)hIl2Cpp + FFNIEJJBGED_KKHCCLHAOBD_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelNavNodeConditionInfos* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::LevelNavNodeConditionInfos*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFNIEJJBGED_GFLKJLOFIPA_OFFSET))(this);
		}

	};

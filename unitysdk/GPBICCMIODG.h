#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define GPBICCMIODG_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3D070)
#define GPBICCMIODG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B3D090)
#define GPBICCMIODG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3D1F0)

inline static constexpr unsigned int GPBICCMIODG_TypeDefinitionIndex = 52536;

	class GPBICCMIODG
	{
	public:
		::RPG::GameCore::PropComponent* FEOOACOCPCN; // 0x28
		::System::Int32 JLLDJAGDMOM; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + GPBICCMIODG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBICCMIODG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPBICCMIODG_ONTASKBEGIN_OFFSET))(this);
		}

	};

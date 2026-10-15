#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RoadRashGameModifier_SetAttributeFixPoint; }
namespace RPG::GameCore { class TaskContext; }

#define AKDMGMNDHMK_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCCF20)
#define AKDMGMNDHMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CCD350)
#define AKDMGMNDHMK_GPKIFEONPLF_OFFSET UNITYSDK_OFFSET(0x12CCD1D0)
#define AKDMGMNDHMK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCCF50)
#define AKDMGMNDHMK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CCD180)

inline static constexpr unsigned int AKDMGMNDHMK_TypeDefinitionIndex = 58430;

	class AKDMGMNDHMK
	{
	public:
		::System::Boolean AMBLEJEBOIA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_SetAttributeFixPoint*))((::PBYTE)hIl2Cpp + AKDMGMNDHMK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDMGMNDHMK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDMGMNDHMK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDMGMNDHMK_DISPOSE_OFFSET))(this);
		}

		::System::Void GPKIFEONPLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDMGMNDHMK_GPKIFEONPLF_OFFSET))(this);
		}

	};

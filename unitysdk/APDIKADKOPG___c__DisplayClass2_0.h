#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APDIKADKOPG;
namespace RPG::GameCore { class MissionDisableRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APDIKADKOPG___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA6AD0)
#define APDIKADKOPG___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15BA6DD0)

inline static constexpr unsigned int APDIKADKOPG___c__DisplayClass2_0_TypeDefinitionIndex = 53267;

	class APDIKADKOPG___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* mainMissionList; // 0x10
		::APDIKADKOPG* __4__this; // 0x18
		::RPG::GameCore::MissionDisableRow* subMissionDisableRow; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDIKADKOPG___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDIKADKOPG___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};

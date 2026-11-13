#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CharacterEnableEmptyModel; }
namespace RPG::GameCore { class TaskContext; }

#define NPGKKMOLFGG_CTOR_OFFSET UNITYSDK_OFFSET(0x19CF8360)
#define NPGKKMOLFGG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19CF8370)
#define NPGKKMOLFGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19CF83B0)
#define NPGKKMOLFGG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19CF86F0)
#define NPGKKMOLFGG_TICK_OFFSET UNITYSDK_OFFSET(0x19CF8740)

inline static constexpr unsigned int NPGKKMOLFGG_TypeDefinitionIndex = 56109;

	class NPGKKMOLFGG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CharacterEnableEmptyModel* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CharacterEnableEmptyModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CharacterEnableEmptyModel*))((::PBYTE)hIl2Cpp + NPGKKMOLFGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGKKMOLFGG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGKKMOLFGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGKKMOLFGG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPGKKMOLFGG_TICK_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
class DCIALJDPCMF;
namespace RPG::GameCore { class ShowBattleWhiteboxText; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFKHAJIMDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x15C881B0)
#define HFKHAJIMDOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C88270)

inline static constexpr unsigned int HFKHAJIMDOA_TypeDefinitionIndex = 58616;

	class HFKHAJIMDOA
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MEEPDDMNLCH; // 0x28
		::DCIALJDPCMF* DMFEKIIDMFL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleWhiteboxText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleWhiteboxText*))((::PBYTE)hIl2Cpp + HFKHAJIMDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKHAJIMDOA_ONTASKBEGIN_OFFSET))(this);
		}

	};

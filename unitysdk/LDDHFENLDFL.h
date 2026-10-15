#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class DIHCJLDIMNA;
namespace RPG::GameCore { class TaskContext; }

#define LDDHFENLDFL_CTOR_OFFSET UNITYSDK_OFFSET(0xB61DA40)
#define LDDHFENLDFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB61DB20)

	class LDDHFENLDFL
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DIHCJLDIMNA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DIHCJLDIMNA*))((::PBYTE)hIl2Cpp + LDDHFENLDFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHFENLDFL_ONTASKBEGIN_OFFSET))(this);
		}

	};

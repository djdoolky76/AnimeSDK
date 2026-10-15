#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class BAKIAFMAECJ;
namespace RPG::GameCore { class TaskContext; }

#define AJHEAIOBEGE_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBD150)
#define AJHEAIOBEGE_DALCBAAGIHL_OFFSET UNITYSDK_OFFSET(0x12CBD290)
#define AJHEAIOBEGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CBD190)

	class AJHEAIOBEGE
	{
	public:
		::RPG::GameCore::StringHash APGMNHCMEAC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BAKIAFMAECJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BAKIAFMAECJ*))((::PBYTE)hIl2Cpp + AJHEAIOBEGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHEAIOBEGE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::StringHash DALCBAAGIHL()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + AJHEAIOBEGE_DALCBAAGIHL_OFFSET))(this);
		}

	};

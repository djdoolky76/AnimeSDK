#pragma once
#include "unitysdk/unitysdk.h"
class MPMBKGMHKGO;
namespace RPG::GameCore { class TaskContext; }

#define OPBOLBNBHBK_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A1E70)
#define OPBOLBNBHBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC8A1EA0)

inline static constexpr unsigned int OPBOLBNBHBK_TypeDefinitionIndex = 59899;

	class OPBOLBNBHBK
	{
	public:
		::MPMBKGMHKGO* IGHAHBNLIJA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MPMBKGMHKGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MPMBKGMHKGO*))((::PBYTE)hIl2Cpp + OPBOLBNBHBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBOLBNBHBK_ONTASKBEGIN_OFFSET))(this);
		}

	};

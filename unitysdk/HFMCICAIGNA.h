#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class IDNEFFCGFFL;
namespace RPG::GameCore { class TaskContext; }

#define HFMCICAIGNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C430AF0)
#define HFMCICAIGNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C430BD0)

inline static constexpr unsigned int HFMCICAIGNA_TypeDefinitionIndex = 56603;

	class HFMCICAIGNA
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IDNEFFCGFFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IDNEFFCGFFL*))((::PBYTE)hIl2Cpp + HFMCICAIGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMCICAIGNA_ONTASKBEGIN_OFFSET))(this);
		}

	};

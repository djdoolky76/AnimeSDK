#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class OKNPLBDMOJB;
namespace RPG::GameCore { class TaskContext; }

#define MOKGCGDOJIL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA2D790)
#define MOKGCGDOJIL_DALCBAAGIHL_OFFSET UNITYSDK_OFFSET(0xBA2D970)
#define MOKGCGDOJIL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA2D7D0)

inline static constexpr unsigned int MOKGCGDOJIL_TypeDefinitionIndex = 55061;

	class MOKGCGDOJIL
	{
	public:
		::RPG::GameCore::StringHash APGMNHCMEAC; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OKNPLBDMOJB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OKNPLBDMOJB*))((::PBYTE)hIl2Cpp + MOKGCGDOJIL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKGCGDOJIL_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::StringHash DALCBAAGIHL()
		{
			return ((::RPG::GameCore::StringHash(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKGCGDOJIL_DALCBAAGIHL_OFFSET))(this);
		}

	};

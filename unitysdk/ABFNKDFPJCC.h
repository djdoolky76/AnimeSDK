#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenGameCharacterAttachToMini; }
namespace RPG::GameCore { class TaskContext; }

#define ABFNKDFPJCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F1840)
#define ABFNKDFPJCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0F1870)

inline static constexpr unsigned int ABFNKDFPJCC_TypeDefinitionIndex = 52272;

	class ABFNKDFPJCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameCharacterAttachToMini* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameCharacterAttachToMini*))((::PBYTE)hIl2Cpp + ABFNKDFPJCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFNKDFPJCC_ONTASKBEGIN_OFFSET))(this);
		}

	};

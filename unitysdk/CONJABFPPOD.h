#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguRarityType.h"
#include "unitysdk/System/Object.h"
class CONJABFPPOD;
class FCOEMCEDLNL;
namespace System { class String; }

#define CONJABFPPOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8DBC0)
#define CONJABFPPOD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC8DAB0)

inline static constexpr unsigned int CONJABFPPOD_TypeDefinitionIndex = 11544;

	class CONJABFPPOD : public ::System::Object
	{
	public:
		::System::String* OCBFMPOCBIK; // 0x10
		::RPG::GameCore::FateRinHouguRarityType PMIEAEGJNMJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONJABFPPOD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CONJABFPPOD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CONJABFPPOD*))((::PBYTE)hIl2Cpp + CONJABFPPOD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHDAFDOMINP.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
class INHCJHBALFC;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define KPBNILBHOKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFCF0)
#define KPBNILBHOKK_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB5AFAC0)

inline static constexpr unsigned int KPBNILBHOKK_TypeDefinitionIndex = 54265;

	class KPBNILBHOKK : public ::BHDAFDOMINP
	{
	public:
		::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* KBIBCKNINNH; // 0x20
		::System::UInt32 GBJLLAJJEOL; // 0x28
		::System::UInt32 AAGKEBFHLMC; // 0x2C
		::System::UInt32 JIDLKIHJLFL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBNILBHOKK_CTOR_OFFSET))(this);
		}

		::System::Void Execute(::INHCJHBALFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHCJHBALFC*))((::PBYTE)hIl2Cpp + KPBNILBHOKK_EXECUTE_OFFSET))(this, a1);
		}

	};

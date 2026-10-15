#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/System/Object.h"
class JEFCCHAPOLA;
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }

#define AENGOKAEEOA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF03630)

inline static constexpr unsigned int AENGOKAEEOA_TypeDefinitionIndex = 54282;

	class AENGOKAEEOA : public ::System::Object
	{
	public:
		::JEFCCHAPOLA* PDLPIGDDEFL; // 0x10
		::System::Collections::Generic::SortedDictionary_2<::RPG::GameCore::RtAbilityProperty, ::RPG::GameCore::FixPoint>* KBIBCKNINNH; // 0x18
		::System::UInt32 AAGKEBFHLMC; // 0x20
		::System::UInt32 JIDLKIHJLFL; // 0x24
		::System::UInt32 GBJLLAJJEOL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AENGOKAEEOA_CTOR_OFFSET))(this);
		}

	};

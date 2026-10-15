#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PECDJPIHMAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7DB120)

inline static constexpr unsigned int PECDJPIHMAM_TypeDefinitionIndex = 37225;

	class PECDJPIHMAM : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PMMGBKJIIFN; // 0x10
		::System::Collections::Generic::HashSet_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* IALHAGJCLOP; // 0x18
		::RPG::GameCore::CakeRaceRegionConfig* ENCFIALFHEN; // 0x20
		::System::Int32 NDKILPMMLHJ; // 0x28
		::System::Int32 FIELGBACDLG; // 0x2C
		::System::Void _ctor(::RPG::GameCore::CakeRaceRegionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceRegionConfig*))((::PBYTE)hIl2Cpp + PECDJPIHMAM_CTOR_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define JFMOKAKOEEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x166438A0)
#define JFMOKAKOEEJ_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x166438D0)
#define JFMOKAKOEEJ_NPFMJLCMIBE_OFFSET UNITYSDK_OFFSET(0x16643920)

inline static constexpr unsigned int JFMOKAKOEEJ_TypeDefinitionIndex = 65734;

	class JFMOKAKOEEJ : public ::System::Object
	{
	public:
		::System::UInt32 AJCPOOCBNNH; // 0x10
		::RPG::GameCore::ItemDisplaySortType GMPGDEINODK; // 0x14
		::System::UInt32 NNACKOBKFGE; // 0x18
		::System::Int32 OJJHJJPDPAJ; // 0x1C
		::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + JFMOKAKOEEJ_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFMOKAKOEEJ_GNADABFLEFM_OFFSET))(this, a1);
		}

		::RPG::Client::ItemData* NPFMJLCMIBE(::System::UInt32 a1)
		{
			return ((::RPG::Client::ItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFMOKAKOEEJ_NPFMJLCMIBE_OFFSET))(this, a1);
		}

	};

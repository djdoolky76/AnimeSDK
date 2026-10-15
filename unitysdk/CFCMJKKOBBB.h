#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define CFCMJKKOBBB_CTOR_OFFSET UNITYSDK_OFFSET(0xCA0A3B0)
#define CFCMJKKOBBB_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xCA0A3E0)
#define CFCMJKKOBBB_NGNLDBLPANG_OFFSET UNITYSDK_OFFSET(0xCA0A4E0)

	class CFCMJKKOBBB : public ::JFMOKAKOEEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CFCMJKKOBBB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFCMJKKOBBB_GNADABFLEFM_OFFSET))(this, a1);
		}

		::RPG::GameCore::ItemSubType NGNLDBLPANG()
		{
			return ((::RPG::GameCore::ItemSubType(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCMJKKOBBB_NGNLDBLPANG_OFFSET))(this);
		}

	};

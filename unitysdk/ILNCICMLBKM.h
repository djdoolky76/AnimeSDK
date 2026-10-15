#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFMOKAKOEEJ.h"
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define ILNCICMLBKM_CJOINMLFEIB_OFFSET UNITYSDK_OFFSET(0x164C7870)
#define ILNCICMLBKM_CTOR_OFFSET UNITYSDK_OFFSET(0x164C77C0)
#define ILNCICMLBKM_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0x164C77F0)

	class ILNCICMLBKM : public ::JFMOKAKOEEJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + ILNCICMLBKM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean GNADABFLEFM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILNCICMLBKM_GNADABFLEFM_OFFSET))(this, a1);
		}

		::System::UInt32 CJOINMLFEIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILNCICMLBKM_CJOINMLFEIB_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFMOKAKOEEJ;
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define KBMBEMADLNE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB31EC00)
#define KBMBEMADLNE_CTOR_OFFSET UNITYSDK_OFFSET(0xB31ECC0)

	class KBMBEMADLNE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMBEMADLNE_CTOR_OFFSET))(this);
		}

		static ::JFMOKAKOEEJ* BPLPBPMEODA(::RPG::GameCore::ItemDisplaySortNewRow* a1)
		{
			return ((::JFMOKAKOEEJ*(*)(::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + KBMBEMADLNE_BPLPBPMEODA_OFFSET))(a1);
		}

	};

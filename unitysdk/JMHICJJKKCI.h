#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
namespace System { class String; }

#define JMHICJJKKCI_CTOR_OFFSET UNITYSDK_OFFSET(0xB266C90)
#define JMHICJJKKCI_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xB266D20)

	class JMHICJJKKCI : public ::RPG::Client::UIController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHICJJKKCI_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMHICJJKKCI_VIEWPREFABPATH_OFFSET))(this);
		}

	};

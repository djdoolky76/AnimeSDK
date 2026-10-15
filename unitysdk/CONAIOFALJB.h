#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { class Observable; }
namespace RPG::UINavigation { class UINavigation; }

#define CONAIOFALJB_NMHDDLOCHFO_OFFSET UNITYSDK_OFFSET(0xDCBFA40)

	class CONAIOFALJB : public ::System::Object
	{
	public:
		static ::R3::Observable* NMHDDLOCHFO(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::R3::Observable*(*)(::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CONAIOFALJB_NMHDDLOCHFO_OFFSET))(a1);
		}

	};

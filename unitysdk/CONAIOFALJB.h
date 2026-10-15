#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::UINavigation { class UINavigation; }

#define CONAIOFALJB_NMHDDLOCHFO_OFFSET UNITYSDK_OFFSET(0xDCB8B80)

inline static constexpr unsigned int CONAIOFALJB_TypeDefinitionIndex = 49829;

	class CONAIOFALJB : public ::System::Object
	{
	public:
		static ::R3::Observable_1<::System::Boolean>* NMHDDLOCHFO(::RPG::UINavigation::UINavigation* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::RPG::UINavigation::UINavigation*))((::PBYTE)hIl2Cpp + CONAIOFALJB_NMHDDLOCHFO_OFFSET))(a1);
		}

	};

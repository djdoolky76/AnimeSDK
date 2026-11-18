#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define LNJKJNPBPEF_APIIBMBOJLH_OFFSET UNITYSDK_OFFSET(0x13D086D0)
#define LNJKJNPBPEF_BHLIPGMLLBL_OFFSET UNITYSDK_OFFSET(0x13D087A0)
#define LNJKJNPBPEF_CIAOODHDMGB_OFFSET UNITYSDK_OFFSET(0x13D08640)
#define LNJKJNPBPEF_FPKPMGNPKCP_OFFSET UNITYSDK_OFFSET(0x13D08680)
#define LNJKJNPBPEF_GPMFAIJAOBM_OFFSET UNITYSDK_OFFSET(0x13D08710)
#define LNJKJNPBPEF_IGODPJGNDIK_OFFSET UNITYSDK_OFFSET(0x13D08840)
#define LNJKJNPBPEF_KBDILOMLDMD_OFFSET UNITYSDK_OFFSET(0x13D087F0)

inline static constexpr unsigned int LNJKJNPBPEF_TypeDefinitionIndex = 76284;

class LNJKJNPBPEF : public ::System::Object
{
public:
	static ::System::Int32 CIAOODHDMGB()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LNJKJNPBPEF_CIAOODHDMGB_OFFSET))();
	}

	static ::System::Boolean FPKPMGNPKCP(::System::Int32 LCLGBHONCEK)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LNJKJNPBPEF_FPKPMGNPKCP_OFFSET))(LCLGBHONCEK);
	}

	static ::UnityEngine::Vector3 APIIBMBOJLH()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + LNJKJNPBPEF_APIIBMBOJLH_OFFSET))();
	}

	static ::UnityEngine::InputSystem::Controls::ButtonControl* GPMFAIJAOBM(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LNJKJNPBPEF_GPMFAIJAOBM_OFFSET))(ABHBKFJKINO);
	}

	static ::System::Boolean BHLIPGMLLBL(::System::Int32 LCLGBHONCEK)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LNJKJNPBPEF_BHLIPGMLLBL_OFFSET))(LCLGBHONCEK);
	}

	static ::System::Boolean KBDILOMLDMD(::System::Int32 LCLGBHONCEK)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LNJKJNPBPEF_KBDILOMLDMD_OFFSET))(LCLGBHONCEK);
	}

	static ::UnityEngine::Touch IGODPJGNDIK(::System::Int32 ABHBKFJKINO)
	{
		return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + LNJKJNPBPEF_IGODPJGNDIK_OFFSET))(ABHBKFJKINO);
	}
};

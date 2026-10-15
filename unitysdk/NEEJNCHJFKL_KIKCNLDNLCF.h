#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NEEJNCHJFKL_KIKCNLDNLCF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB5C430)
#define NEEJNCHJFKL_KIKCNLDNLCF_ONGUI_OFFSET UNITYSDK_OFFSET(0xBB5C1E0)

	class NEEJNCHJFKL_KIKCNLDNLCF : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_KIKCNLDNLCF_CTOR_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEEJNCHJFKL_KIKCNLDNLCF_ONGUI_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }

#define RPG_CLIENT_FIXSTRETCHEDSCALE_CTOR_OFFSET UNITYSDK_OFFSET(0xD040C30)
#define RPG_CLIENT_FIXSTRETCHEDSCALE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xD040BE0)

namespace RPG::Client
{
	class FixStretchedScale
	{
	public:
		::UnityEngine::Vector3 ParentInitialLocalScale; // 0x30
		::UnityEngine::Vector3 thisInitialLocalPos; // 0x3C
		::UnityEngine::Vector3 thisInitialLocalScale; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHEDSCALE_CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHEDSCALE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}

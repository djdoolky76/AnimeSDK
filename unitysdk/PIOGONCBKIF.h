#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class MEDGOLOBNJM;
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define PIOGONCBKIF_CTOR_OFFSET UNITYSDK_OFFSET(0xC275210)
#define PIOGONCBKIF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC274F70)
#define PIOGONCBKIF__ONBIND_OFFSET UNITYSDK_OFFSET(0xC274DC0)

	class PIOGONCBKIF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* BIIDDLHFPPG; // 0x60
		::UnityEngine::Transform* FCLGOLCJBOE; // 0x68
		::UnityEngine::UI::Text* CCOIIOCJIDI; // 0x70
		::UnityEngine::Transform* AGOGNADGDNM; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGONCBKIF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOGONCBKIF__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::MEDGOLOBNJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDGOLOBNJM*))((::PBYTE)hIl2Cpp + PIOGONCBKIF_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};

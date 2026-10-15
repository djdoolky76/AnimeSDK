#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FLGJAEAEFHN;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define FLGJAEAEFHN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15830F10)
#define FLGJAEAEFHN_CTOR_OFFSET UNITYSDK_OFFSET(0x158313D0)
#define FLGJAEAEFHN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x158312C0)
#define FLGJAEAEFHN_GKMCBGNAJFH_OFFSET UNITYSDK_OFFSET(0x15831370)
#define FLGJAEAEFHN_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15831320)
#define FLGJAEAEFHN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15830FC0)

	class FLGJAEAEFHN : public ::MLKDDLHNNHH
	{
	public:
		::UnityEngine::RectTransform* PJDFEJNBAJH; // 0x20
		::UnityEngine::RectTransform* GKNBCPMJHMN; // 0x28
		::System::String* LDNLKDCNEBJ; // 0x30
		::System::Single HBDJCFFDGDD; // 0x38
		::System::Boolean BEMMCKLJICI; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_CTOR_OFFSET))(this);
		}

		static ::FLGJAEAEFHN* BPLPBPMEODA(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::System::String* a4)
		{
			return ((::FLGJAEAEFHN*(*)(::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_ONEXECUTE_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_ONCLEAR_OFFSET))(this);
		}

		::System::Void GKMCBGNAJFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLGJAEAEFHN_GKMCBGNAJFH_OFFSET))(this);
		}

	};

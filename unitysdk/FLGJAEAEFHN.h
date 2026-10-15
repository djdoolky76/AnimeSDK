#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class FLGJAEAEFHN;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define FLGJAEAEFHN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15825280)
#define FLGJAEAEFHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15825740)
#define FLGJAEAEFHN_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0x15825630)
#define FLGJAEAEFHN_GKMCBGNAJFH_OFFSET UNITYSDK_OFFSET(0x158256E0)
#define FLGJAEAEFHN_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x15825690)
#define FLGJAEAEFHN_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x15825330)

inline static constexpr unsigned int FLGJAEAEFHN_TypeDefinitionIndex = 80851;

	class FLGJAEAEFHN : public ::MLKDDLHNNHH
	{
	public:
		::UnityEngine::RectTransform* PJDFEJNBAJH; // 0x20
		::System::String* LDNLKDCNEBJ; // 0x28
		::UnityEngine::RectTransform* GKNBCPMJHMN; // 0x30
		::System::Boolean BEMMCKLJICI; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x3C
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BOGCBDLBHFK;

#define KPADJMGLFJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90B4B0)
#define KPADJMGLFJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C90B4D0)
#define KPADJMGLFJG_ILHMIIBGBCB_OFFSET UNITYSDK_OFFSET(0x1C90B510)
#define KPADJMGLFJG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C90B690)

inline static constexpr unsigned int KPADJMGLFJG_TypeDefinitionIndex = 42442;

	class KPADJMGLFJG : public ::System::Object
	{
	public:
		::BOGCBDLBHFK* KAKEIDJDNHJ; // 0x10
		::UnityEngine::Vector3 JLALCNPLAPK; // 0x18
		::System::Void _ctor(::BOGCBDLBHFK* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KPADJMGLFJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPADJMGLFJG_DISPOSE_OFFSET))(this);
		}

		::System::Void ILHMIIBGBCB(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + KPADJMGLFJG_ILHMIIBGBCB_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPADJMGLFJG_KHGIKBFDLFB_OFFSET))(this);
		}

	};

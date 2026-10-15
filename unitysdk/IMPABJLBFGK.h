#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define IMPABJLBFGK_CTOR_OFFSET UNITYSDK_OFFSET(0x164E3DC0)
#define IMPABJLBFGK_PGJGDNBDHIL_OFFSET UNITYSDK_OFFSET(0x164E3E40)
#define IMPABJLBFGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x164E3F00)

inline static constexpr unsigned int IMPABJLBFGK_TypeDefinitionIndex = 70177;

	class IMPABJLBFGK : public ::System::Object
	{
	public:
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x10
		::UnityEngine::MaterialPropertyBlock* DMOKGPMOFGM; // 0x18
		::System::Int32 LAPPEBCGDEG; // 0x20
		::System::Single NEHMFKCDKDI; // 0x24
		::System::Single NHGFCDCCBNL; // 0x28
		::System::Void _ctor(::UnityEngine::Renderer* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + IMPABJLBFGK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGJGDNBDHIL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMPABJLBFGK_PGJGDNBDHIL_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPABJLBFGK_TOSTRING_OFFSET))(this);
		}

	};

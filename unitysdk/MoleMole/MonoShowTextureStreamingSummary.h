#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HPLPPEKLNMD_OFFSET UNITYSDK_OFFSET(0x14B03630)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HUMANREADABLESIZE_OFFSET UNITYSDK_OFFSET(0x14B033A0)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_ONGUI_OFFSET UNITYSDK_OFFSET(0x14B03490)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_START_OFFSET UNITYSDK_OFFSET(0x14B03350)
#define MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x14B03730)

namespace MoleMole
{
	inline static constexpr unsigned int MonoShowTextureStreamingSummary_TypeDefinitionIndex = 63704;

	class MonoShowTextureStreamingSummary : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single X; // 0x18
		::System::Single Y; // 0x1C
		::System::Int32 MemoryBudgetPercentThreshold; // 0x20
		::System::Int32 TextureStreamingPercentThreshold; // 0x24
		::System::UInt64 CAFEBDJJBKA; // 0x28
		::UnityEngine::Rect EDDPLMOFEKI; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_START_OFFSET))(this);
		}

		::System::String* HumanReadableSize(::System::UInt64 BEPMDFENBMH)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HUMANREADABLESIZE_OFFSET))(this, BEPMDFENBMH);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_ONGUI_OFFSET))(this);
		}

		::System::Void HPLPPEKLNMD(::System::String* FCCLIEJAKLI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSHOWTEXTURESTREAMINGSUMMARY_HPLPPEKLNMD_OFFSET))(this, FCCLIEJAKLI);
		}
	};
}

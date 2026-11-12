#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }

#define IOLIAAFBFON_PIIIIACJBAI_BFNAPJBGPHH_OFFSET UNITYSDK_OFFSET(0xB846820)
#define IOLIAAFBFON_PIIIIACJBAI_CTOR_OFFSET UNITYSDK_OFFSET(0xB8421B0)
#define IOLIAAFBFON_PIIIIACJBAI_EEIHCPDDDAC_OFFSET UNITYSDK_OFFSET(0xB846810)
#define IOLIAAFBFON_PIIIIACJBAI_NFFAELNJGMK_OFFSET UNITYSDK_OFFSET(0xB846830)
#define IOLIAAFBFON_PIIIIACJBAI_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0xB846800)

inline static constexpr unsigned int IOLIAAFBFON_PIIIIACJBAI_TypeDefinitionIndex = 48526;

	class IOLIAAFBFON_PIIIIACJBAI : public ::System::Object
	{
	public:
		::System::Int32 NOIEMNLMACN; // 0x10
		::System::UInt32 FOKMDPCICLJ; // 0x14
		::System::UInt32 POJDIFPKIMN; // 0x18
		::System::UInt32 HIMCJBIFANO; // 0x1C
		::System::Void _ctor(::UnityEngine::ComputeShader* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::String*))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PIIIIACJBAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PIIIIACJBAI_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::UInt32 EEIHCPDDDAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PIIIIACJBAI_EEIHCPDDDAC_OFFSET))(this);
		}

		::System::UInt32 BFNAPJBGPHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PIIIIACJBAI_BFNAPJBGPHH_OFFSET))(this);
		}

		::System::UInt32 NFFAELNJGMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON_PIIIIACJBAI_NFFAELNJGMK_OFFSET))(this);
		}

	};

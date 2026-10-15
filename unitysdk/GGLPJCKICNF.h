#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class ComputeShader; }

#define GGLPJCKICNF_BFNAPJBGPHH_OFFSET UNITYSDK_OFFSET(0x15A042D0)
#define GGLPJCKICNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A042F0)
#define GGLPJCKICNF_EEIHCPDDDAC_OFFSET UNITYSDK_OFFSET(0x15A042C0)
#define GGLPJCKICNF_NFFAELNJGMK_OFFSET UNITYSDK_OFFSET(0x15A042E0)
#define GGLPJCKICNF_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x15A042B0)

inline static constexpr unsigned int GGLPJCKICNF_TypeDefinitionIndex = 49264;

	class GGLPJCKICNF : public ::System::Object
	{
	public:
		::System::UInt32 HIMCJBIFANO; // 0x10
		::System::UInt32 POJDIFPKIMN; // 0x14
		::System::Int32 NOIEMNLMACN; // 0x18
		::System::UInt32 FOKMDPCICLJ; // 0x1C
		::System::Void _ctor(::UnityEngine::ComputeShader* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::String*))((::PBYTE)hIl2Cpp + GGLPJCKICNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 PCKEJOJIOOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLPJCKICNF_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::UInt32 EEIHCPDDDAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLPJCKICNF_EEIHCPDDDAC_OFFSET))(this);
		}

		::System::UInt32 BFNAPJBGPHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLPJCKICNF_BFNAPJBGPHH_OFFSET))(this);
		}

		::System::UInt32 NFFAELNJGMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLPJCKICNF_NFFAELNJGMK_OFFSET))(this);
		}

	};

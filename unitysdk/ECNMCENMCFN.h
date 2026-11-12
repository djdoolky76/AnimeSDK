#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define ECNMCENMCFN_CTOR_OFFSET UNITYSDK_OFFSET(0x13AC9070)
#define ECNMCENMCFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13AC8FF0)
#define ECNMCENMCFN_NHOENLIMKLJ_OFFSET UNITYSDK_OFFSET(0x13AC8EF0)
#define ECNMCENMCFN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x13AC8D60)
#define ECNMCENMCFN_PBJAENMIKEJ_OFFSET UNITYSDK_OFFSET(0x13AC8F50)

inline static constexpr unsigned int ECNMCENMCFN_TypeDefinitionIndex = 74870;

	class ECNMCENMCFN : public ::System::Object
	{
	public:
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
		// static const ::System::String* KOGAIMIJFNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNMCENMCFN_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::UnityEngine::UI::RawImage* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + ECNMCENMCFN_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void PBJAENMIKEJ(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + ECNMCENMCFN_PBJAENMIKEJ_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNMCENMCFN_DISPOSE_OFFSET))(this);
		}

		::System::Void NHOENLIMKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECNMCENMCFN_NHOENLIMKLJ_OFFSET))(this);
		}

	};

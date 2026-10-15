#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define KMANFJIBODD_CTOR_OFFSET UNITYSDK_OFFSET(0xB53B560)
#define KMANFJIBODD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB53B4E0)
#define KMANFJIBODD_NHOENLIMKLJ_OFFSET UNITYSDK_OFFSET(0xB53B390)
#define KMANFJIBODD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB53B240)
#define KMANFJIBODD_PBJAENMIKEJ_OFFSET UNITYSDK_OFFSET(0xB53B3F0)

	class KMANFJIBODD : public ::System::Object
	{
	public:
		::UnityEngine::Material* IMOHCDHKBAJ; // 0x10
		// static const ::System::String* DCPEFEGGAAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::UnityEngine::UI::RawImage* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + KMANFJIBODD_NPAFMEBNFOB_OFFSET))(this, a1, a2);
		}

		::System::Void PBJAENMIKEJ(::UnityEngine::UI::RawImage* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::RawImage*, ::System::Single))((::PBYTE)hIl2Cpp + KMANFJIBODD_PBJAENMIKEJ_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_DISPOSE_OFFSET))(this);
		}

		::System::Void NHOENLIMKLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMANFJIBODD_NHOENLIMKLJ_OFFSET))(this);
		}

	};

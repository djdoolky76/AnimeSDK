#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define EIDGANKEKNL_AGLAMBFJFIA_OFFSET UNITYSDK_OFFSET(0x154BE5B0)
#define EIDGANKEKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x154BE640)
#define EIDGANKEKNL_JJKEICHBLLC_OFFSET UNITYSDK_OFFSET(0x154BE440)
#define EIDGANKEKNL__ONBIND_OFFSET UNITYSDK_OFFSET(0x154BE290)

inline static constexpr unsigned int EIDGANKEKNL_TypeDefinitionIndex = 71886;

	class EIDGANKEKNL : public ::FMPCODLIOLG
	{
	public:
		::System::String* MPEGEIGHBOM; // 0x60
		::UnityEngine::Transform* CNPOCMJEMLP; // 0x68
		::UnityEngine::Transform* EOIBPJEAFFC; // 0x70
		::UnityEngine::Transform* HMCPKNPBAJN; // 0x78
		::UnityEngine::UI::Image* LCPFCFOENPI; // 0x80
		::System::String* BDACPPLKLGL; // 0x88
		::UnityEngine::UI::Image* HNKPLEBEAKM; // 0x90
		::System::String* FHFGFIPPKDH; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDGANKEKNL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDGANKEKNL__ONBIND_OFFSET))(this);
		}

		::System::Void JJKEICHBLLC(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EIDGANKEKNL_JJKEICHBLLC_OFFSET))(this, a1, a2);
		}

		::System::Void AGLAMBFJFIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EIDGANKEKNL_AGLAMBFJFIA_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define EIDGANKEKNL_AGLAMBFJFIA_OFFSET UNITYSDK_OFFSET(0x163FCEE0)
#define EIDGANKEKNL_CTOR_OFFSET UNITYSDK_OFFSET(0x163FCF70)
#define EIDGANKEKNL_JJKEICHBLLC_OFFSET UNITYSDK_OFFSET(0x163FCD70)
#define EIDGANKEKNL__ONBIND_OFFSET UNITYSDK_OFFSET(0x163FCB00)

inline static constexpr unsigned int EIDGANKEKNL_TypeDefinitionIndex = 73907;

	class EIDGANKEKNL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* CNPOCMJEMLP; // 0x60
		::System::String* FHFGFIPPKDH; // 0x68
		::UnityEngine::Transform* EOIBPJEAFFC; // 0x70
		::UnityEngine::UI::Image* LCPFCFOENPI; // 0x78
		::System::String* BDACPPLKLGL; // 0x80
		::System::String* MPEGEIGHBOM; // 0x88
		::UnityEngine::Transform* HMCPKNPBAJN; // 0x90
		::UnityEngine::UI::Image* HNKPLEBEAKM; // 0x98
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define LPLCFCIIFCE_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0xC0844B0)
#define LPLCFCIIFCE_CTOR_OFFSET UNITYSDK_OFFSET(0xC0845C0)
#define LPLCFCIIFCE_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0xC084460)
#define LPLCFCIIFCE_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0xC084570)
#define LPLCFCIIFCE_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0xC084510)
#define LPLCFCIIFCE_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0xC084410)
#define LPLCFCIIFCE_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0xC084370)
#define LPLCFCIIFCE_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xC0843C0)

inline static constexpr unsigned int LPLCFCIIFCE_TypeDefinitionIndex = 73573;

	class LPLCFCIIFCE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + LPLCFCIIFCE_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

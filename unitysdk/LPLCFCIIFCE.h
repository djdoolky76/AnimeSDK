#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define LPLCFCIIFCE_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0xB822F80)
#define LPLCFCIIFCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB823090)
#define LPLCFCIIFCE_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0xB822F30)
#define LPLCFCIIFCE_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0xB823040)
#define LPLCFCIIFCE_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0xB822FE0)
#define LPLCFCIIFCE_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0xB822EE0)
#define LPLCFCIIFCE_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0xB822E40)
#define LPLCFCIIFCE_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xB822E90)

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

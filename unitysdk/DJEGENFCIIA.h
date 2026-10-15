#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define DJEGENFCIIA_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0xF22F220)
#define DJEGENFCIIA_CTOR_OFFSET UNITYSDK_OFFSET(0xF22F310)
#define DJEGENFCIIA_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0xF22F1B0)
#define DJEGENFCIIA_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0xF22F2C0)
#define DJEGENFCIIA_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0xF22F270)
#define DJEGENFCIIA_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0xF22F140)
#define DJEGENFCIIA_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0xF22F080)
#define DJEGENFCIIA_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xF22F0D0)

	class DJEGENFCIIA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEGENFCIIA_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + DJEGENFCIIA_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

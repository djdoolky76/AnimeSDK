#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define KLCNPNHFKDI_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0xB4E1CC0)
#define KLCNPNHFKDI_CTOR_OFFSET UNITYSDK_OFFSET(0xB4E1DB0)
#define KLCNPNHFKDI_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0xB4E1C70)
#define KLCNPNHFKDI_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0xB4E1D60)
#define KLCNPNHFKDI_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0xB4E1D10)
#define KLCNPNHFKDI_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0xB4E1C20)
#define KLCNPNHFKDI_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0xB4E1B80)
#define KLCNPNHFKDI_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xB4E1BD0)

inline static constexpr unsigned int KLCNPNHFKDI_TypeDefinitionIndex = 71584;

	class KLCNPNHFKDI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + KLCNPNHFKDI_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

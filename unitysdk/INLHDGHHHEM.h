#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define INLHDGHHHEM_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x164F6BC0)
#define INLHDGHHHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x164F6CB0)
#define INLHDGHHHEM_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x164F6B70)
#define INLHDGHHHEM_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x164F6C60)
#define INLHDGHHHEM_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x164F6C10)
#define INLHDGHHHEM_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x164F6B20)
#define INLHDGHHHEM_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x164F6A80)
#define INLHDGHHHEM_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x164F6AD0)

inline static constexpr unsigned int INLHDGHHHEM_TypeDefinitionIndex = 71585;

	class INLHDGHHHEM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INLHDGHHHEM_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + INLHDGHHHEM_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

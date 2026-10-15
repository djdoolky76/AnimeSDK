#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define INLHDGHHHEM_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x164E8B50)
#define INLHDGHHHEM_CTOR_OFFSET UNITYSDK_OFFSET(0x164E8C40)
#define INLHDGHHHEM_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x164E8B00)
#define INLHDGHHHEM_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x164E8BF0)
#define INLHDGHHHEM_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x164E8BA0)
#define INLHDGHHHEM_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x164E8AB0)
#define INLHDGHHHEM_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x164E8A10)
#define INLHDGHHHEM_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x164E8A60)

inline static constexpr unsigned int INLHDGHHHEM_TypeDefinitionIndex = 71584;

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

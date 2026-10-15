#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define IIAAKMCLFMH_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x16421380)
#define IIAAKMCLFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x164214F0)
#define IIAAKMCLFMH_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x16421310)
#define IIAAKMCLFMH_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x164214A0)
#define IIAAKMCLFMH_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x16421410)
#define IIAAKMCLFMH_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x164212A0)
#define IIAAKMCLFMH_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x164211E0)
#define IIAAKMCLFMH_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x16421230)

inline static constexpr unsigned int IIAAKMCLFMH_TypeDefinitionIndex = 71581;

	class IIAAKMCLFMH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + IIAAKMCLFMH_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

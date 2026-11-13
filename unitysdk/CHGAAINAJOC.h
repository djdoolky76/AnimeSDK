#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define CHGAAINAJOC_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0x16E14C30)
#define CHGAAINAJOC_CTOR_OFFSET UNITYSDK_OFFSET(0x16E14D40)
#define CHGAAINAJOC_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0x16E14BE0)
#define CHGAAINAJOC_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0x16E14CF0)
#define CHGAAINAJOC_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0x16E14C90)
#define CHGAAINAJOC_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0x16E14B90)
#define CHGAAINAJOC_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0x16E14AF0)
#define CHGAAINAJOC_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x16E14B40)

inline static constexpr unsigned int CHGAAINAJOC_TypeDefinitionIndex = 73567;

	class CHGAAINAJOC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::CrosshairType JJIPEOOFHDN()
		{
			return ((::RPG::GameCore::CrosshairType(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_JJIPEOOFHDN_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* JIKFIOELFMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_JIKFIOELFMK_OFFSET))(this);
		}

		::System::String* EBIIGIGDLNI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_EBIIGIGDLNI_OFFSET))(this);
		}

		::System::String* ACPOCMMNBNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_ACPOCMMNBNM_OFFSET))(this);
		}

		::System::String* JEDCCPMOJOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHGAAINAJOC_JEDCCPMOJOL_OFFSET))(this);
		}

		::System::Void HNDCGHCMIGL(::BILNKKBKIAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + CHGAAINAJOC_HNDCGHCMIGL_OFFSET))(this, a1);
		}

	};

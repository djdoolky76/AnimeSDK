#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/System/Object.h"
class BILNKKBKIAN;
namespace System { class String; }

#define CHGAAINAJOC_ACPOCMMNBNM_OFFSET UNITYSDK_OFFSET(0xD8AFEF0)
#define CHGAAINAJOC_CTOR_OFFSET UNITYSDK_OFFSET(0xD8B0000)
#define CHGAAINAJOC_EBIIGIGDLNI_OFFSET UNITYSDK_OFFSET(0xD8AFEA0)
#define CHGAAINAJOC_HNDCGHCMIGL_OFFSET UNITYSDK_OFFSET(0xD8AFFB0)
#define CHGAAINAJOC_JEDCCPMOJOL_OFFSET UNITYSDK_OFFSET(0xD8AFF50)
#define CHGAAINAJOC_JIKFIOELFMK_OFFSET UNITYSDK_OFFSET(0xD8AFE50)
#define CHGAAINAJOC_JJIPEOOFHDN_OFFSET UNITYSDK_OFFSET(0xD8AFDB0)
#define CHGAAINAJOC_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0xD8AFE00)

inline static constexpr unsigned int CHGAAINAJOC_TypeDefinitionIndex = 73568;

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

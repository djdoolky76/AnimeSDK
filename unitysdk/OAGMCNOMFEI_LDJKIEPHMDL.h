#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MPMACNNKLGP;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define OAGMCNOMFEI_LDJKIEPHMDL_HOENMEGIFFP_OFFSET UNITYSDK_OFFSET(0x15FBDB90)
#define OAGMCNOMFEI_LDJKIEPHMDL_NGPLGDEJFMA_OFFSET UNITYSDK_OFFSET(0x15FBD940)
#define OAGMCNOMFEI_LDJKIEPHMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBD930)

inline static constexpr unsigned int OAGMCNOMFEI_LDJKIEPHMDL_TypeDefinitionIndex = 57941;

class OAGMCNOMFEI_LDJKIEPHMDL : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* EJGDHCIBCJH; // 0x10
	::System::Int32 KIJHAOJIHOC; // 0x18
	::System::Boolean KBCCKFFCMDK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_LDJKIEPHMDL__CTOR_OFFSET))(this);
	}

	::System::Void NGPLGDEJFMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_LDJKIEPHMDL_NGPLGDEJFMA_OFFSET))(this);
	}

	::System::Void HOENMEGIFFP(::MPMACNNKLGP* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::MPMACNNKLGP*))((::PBYTE)hIl2Cpp + OAGMCNOMFEI_LDJKIEPHMDL_HOENMEGIFFP_OFFSET))(this, GLAOEHCGCFO);
	}
};

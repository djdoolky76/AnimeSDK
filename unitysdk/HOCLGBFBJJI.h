#pragma once
#include "unitysdk/unitysdk.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace System { class String; }

#define HOCLGBFBJJI_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0x15DB0AA0)
#define HOCLGBFBJJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0870)
#define HOCLGBFBJJI__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15DB0B60)
#define HOCLGBFBJJI__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x15DB0D20)
#define HOCLGBFBJJI__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0x15DB0D70)
#define HOCLGBFBJJI__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15DB0AE0)
#define HOCLGBFBJJI___CREATEINTERACTTRIGGER_B__3_0_OFFSET UNITYSDK_OFFSET(0x15DB0F40)

	class HOCLGBFBJJI
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x40
		::BABNOKHOBCF* FKINCGODJEP; // 0x48
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + HOCLGBFBJJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCLGBFBJJI_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void _TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOCLGBFBJJI__TEARDOWN_OFFSET))(this);
		}

		::System::Void _CreateInteractTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + HOCLGBFBJJI__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _CreatePropMoveTrigger(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + HOCLGBFBJJI__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
		}

		::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HOCLGBFBJJI__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void __CreateInteractTrigger_b__3_0(::INMMPMDELKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + HOCLGBFBJJI___CREATEINTERACTTRIGGER_B__3_0_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/GGIAGGLAKML.h"
#include "unitysdk/FlexBuffers/FlxVector.h"

namespace System { class String; }

#define ECEOBOHAGOB_CHKLHANIPEP_OFFSET UNITYSDK_OFFSET(0x17AA35D0)
#define ECEOBOHAGOB_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17AA3690)
#define ECEOBOHAGOB_CPOFMDFJMKH_OFFSET UNITYSDK_OFFSET(0x17AA35C0)
#define ECEOBOHAGOB_DBBCGHPODGM_OFFSET UNITYSDK_OFFSET(0x17AA3510)
#define ECEOBOHAGOB_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x17AA3520)
#define ECEOBOHAGOB_GMDMOHKEDMN_OFFSET UNITYSDK_OFFSET(0x17AA36A0)
#define ECEOBOHAGOB_JIONGKFLJKO_OFFSET UNITYSDK_OFFSET(0x17AA35E0)
#define ECEOBOHAGOB_ODDKOGJGEDF_OFFSET UNITYSDK_OFFSET(0x17AA35B0)
#define ECEOBOHAGOB_OEPHAMCMEKJ_OFFSET UNITYSDK_OFFSET(0x17AA35F0)
#define ECEOBOHAGOB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17AA34E0)
#define ECEOBOHAGOB__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA34D0)

inline static constexpr unsigned int ECEOBOHAGOB_TypeDefinitionIndex = 12138;

class ECEOBOHAGOB : public ::GGIAGGLAKML
{
public:
	::FlexBuffers::FlxValue CBBEJBGIAKA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECEOBOHAGOB__CTOR_1_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void DBBCGHPODGM(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_DBBCGHPODGM_OFFSET))(this, HHIJHDFHPOI);
	}

	::GGIAGGLAKML* GLOAAACBNPP(::System::String* MCOHLHMKLIP)
	{
		return ((::GGIAGGLAKML*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_GLOAAACBNPP_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::String* ODDKOGJGEDF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_ODDKOGJGEDF_OFFSET))(this);
	}

	::System::Double CPOFMDFJMKH()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_CPOFMDFJMKH_OFFSET))(this);
	}

	::System::Int32 CHKLHANIPEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_CHKLHANIPEP_OFFSET))(this);
	}

	::System::Boolean JIONGKFLJKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_JIONGKFLJKO_OFFSET))(this);
	}

	::System::Boolean OEPHAMCMEKJ(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_OEPHAMCMEKJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_CHLEALKAOJO_OFFSET))(this);
	}

	::FlexBuffers::FlxVector GMDMOHKEDMN()
	{
		return ((::FlexBuffers::FlxVector(*)(::PVOID))((::PBYTE)hIl2Cpp + ECEOBOHAGOB_GMDMOHKEDMN_OFFSET))(this);
	}
};

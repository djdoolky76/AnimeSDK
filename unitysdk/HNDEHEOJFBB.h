#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class EventArgs; }

#define HNDEHEOJFBB_AENMEFMHFGI_OFFSET UNITYSDK_OFFSET(0x15BDFB50)
#define HNDEHEOJFBB_BNCMDKKFLPP_OFFSET UNITYSDK_OFFSET(0x15BDFFB0)
#define HNDEHEOJFBB_COLPHJDAAGP_OFFSET UNITYSDK_OFFSET(0x15BDFDF0)
#define HNDEHEOJFBB_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x15BDF950)
#define HNDEHEOJFBB_FBFNEJBJLJG_OFFSET UNITYSDK_OFFSET(0x15BDFF20)
#define HNDEHEOJFBB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15BDFBD0)
#define HNDEHEOJFBB_OMDHOLDBPKF_OFFSET UNITYSDK_OFFSET(0x15BDFE30)
#define HNDEHEOJFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDFDD0)

inline static constexpr unsigned int HNDEHEOJFBB_TypeDefinitionIndex = 40415;

class HNDEHEOJFBB
{
public:
	::System::Boolean IJLFLMGJDJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDEHEOJFBB__CTOR_OFFSET))(this);
	}

	::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDEHEOJFBB_DJDJKILDPGP_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDEHEOJFBB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void COLPHJDAAGP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDEHEOJFBB_COLPHJDAAGP_OFFSET))(this);
	}

	static ::System::Void OMDHOLDBPKF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDEHEOJFBB_OMDHOLDBPKF_OFFSET))();
	}

	::System::Void FBFNEJBJLJG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HNDEHEOJFBB_FBFNEJBJLJG_OFFSET))(this, KOIBHLHLMFC);
	}

	static ::System::Void BNCMDKKFLPP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDEHEOJFBB_BNCMDKKFLPP_OFFSET))();
	}

	static ::System::Void AENMEFMHFGI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNDEHEOJFBB_AENMEFMHFGI_OFFSET))();
	}
};

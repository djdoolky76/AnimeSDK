#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CHFJPMFEJII;
namespace System { class String; }

#define NEGOPCPEGFE_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x1288DBB0)
#define NEGOPCPEGFE_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1288DBD0)
#define NEGOPCPEGFE_JPLNJMJFJJB_OFFSET UNITYSDK_OFFSET(0x1288DBA0)
#define NEGOPCPEGFE_MIGIDIFMKIO_OFFSET UNITYSDK_OFFSET(0x1288DB90)
#define NEGOPCPEGFE_MJHALOPDJDO_OFFSET UNITYSDK_OFFSET(0x1288DBC0)
#define NEGOPCPEGFE_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x1288DBE0)
#define NEGOPCPEGFE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1288DB30)
#define NEGOPCPEGFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1288DB20)

inline static constexpr unsigned int NEGOPCPEGFE_TypeDefinitionIndex = 52002;

class NEGOPCPEGFE : public ::System::Object
{
public:
	::System::String* _EMFNGPCECMO_k__BackingField; // 0x10
	::System::String* _IIJCLEOOELN_k__BackingField; // 0x18
	::System::String* _IBEDOHPILNE_k__BackingField; // 0x20

	::System::Void _ctor(::System::String* MCOHLHMKLIP, ::System::String* CJBJONJDOLI, ::System::String* KANJODNFFOI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NEGOPCPEGFE__CTOR_OFFSET))(this, MCOHLHMKLIP, CJBJONJDOLI, KANJODNFFOI);
	}

	::System::Void _ctor_1(::CHFJPMFEJII* DEKJDEPKKLH)
	{
		return ((::System::Void(*)(::PVOID, ::CHFJPMFEJII*))((::PBYTE)hIl2Cpp + NEGOPCPEGFE__CTOR_1_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Void MIGIDIFMKIO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_MIGIDIFMKIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JPLNJMJFJJB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_JPLNJMJFJJB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* ELPFAFFJNKI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Void MJHALOPDJDO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_MJHALOPDJDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_GPBFENDAJMF_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEGOPCPEGFE_PBFKHLEHIGG_OFFSET))(this);
	}
};

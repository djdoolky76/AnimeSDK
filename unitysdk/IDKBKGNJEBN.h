#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDKBKGNJEBN_AGMPJHDKMCH_OFFSET UNITYSDK_OFFSET(0x141BBD30)
#define IDKBKGNJEBN_BOKIGPFFPDL_OFFSET UNITYSDK_OFFSET(0x141BBD90)
#define IDKBKGNJEBN_GLIDAHFNKDN_OFFSET UNITYSDK_OFFSET(0x141BBD20)
#define IDKBKGNJEBN_GNOIMEGDNBO_OFFSET UNITYSDK_OFFSET(0x141BBD00)
#define IDKBKGNJEBN_LFANHONAKGP_OFFSET UNITYSDK_OFFSET(0x141BBD10)
#define IDKBKGNJEBN_OOICGPCDOII_OFFSET UNITYSDK_OFFSET(0x141BBDA0)
#define IDKBKGNJEBN__CTOR_OFFSET UNITYSDK_OFFSET(0x141BBCA0)

inline static constexpr unsigned int IDKBKGNJEBN_TypeDefinitionIndex = 82536;

class IDKBKGNJEBN : public ::System::Object
{
public:
	::System::Action* _HCIADLAMHMB_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _CODAFGBIMPK_k__BackingField; // 0x18
	::System::Int32 AKFMMJIEOHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKBKGNJEBN__CTOR_OFFSET))(this);
	}

	::System::Int32 GNOIMEGDNBO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_GNOIMEGDNBO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LFANHONAKGP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_LFANHONAKGP_OFFSET))(this);
	}

	::System::Action* GLIDAHFNKDN()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_GLIDAHFNKDN_OFFSET))(this);
	}

	::System::Void AGMPJHDKMCH(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_AGMPJHDKMCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BOKIGPFFPDL(::System::Action* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_BOKIGPFFPDL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean OOICGPCDOII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IDKBKGNJEBN_OOICGPCDOII_OFFSET))(this);
	}
};

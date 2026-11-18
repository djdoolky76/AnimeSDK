#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_BBMMFKPJMPE_OFFSET UNITYSDK_OFFSET(0x177D02C0)
#define MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_EJOEFLMAEBI_OFFSET UNITYSDK_OFFSET(0x177D0350)
#define MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_ELHPIKDNHDK_OFFSET UNITYSDK_OFFSET(0x177D0230)
#define MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA__CTOR_OFFSET UNITYSDK_OFFSET(0x177CFC70)

inline static constexpr unsigned int MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_TypeDefinitionIndex = 46699;

class MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::System::Int32, ::System::String*>* JDPBFMILCHG; // 0x10
	::LPFKBLNNAMI_2<::System::Int32, ::System::String*>* FNMHJIMIJOF; // 0x18
	::LPFKBLNNAMI_2<::System::Int32, ::System::String*>* AOKIDCLJEDN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA__CTOR_OFFSET))(this);
	}

	::System::String* ELHPIKDNHDK(::System::Int32 EGCGJNIJLBN)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_ELHPIKDNHDK_OFFSET))(this, EGCGJNIJLBN);
	}

	::System::String* BBMMFKPJMPE(::System::Int32 ABIIAAKBBJK)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_BBMMFKPJMPE_OFFSET))(this, ABIIAAKBBJK);
	}

	::System::String* EJOEFLMAEBI(::System::Int32 LEHABHCOMGH)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MNCMPIPEJLG_PIJEIPPHDGG_AECBCCKBGCA_EJOEFLMAEBI_OFFSET))(this, LEHABHCOMGH);
	}
};

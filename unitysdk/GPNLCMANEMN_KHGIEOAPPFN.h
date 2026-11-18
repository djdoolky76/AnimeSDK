#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNNGMLLPII.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define GPNLCMANEMN_KHGIEOAPPFN_JDCHKOPLMDL_OFFSET UNITYSDK_OFFSET(0x19DE9990)
#define GPNLCMANEMN_KHGIEOAPPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x19DE9980)

inline static constexpr unsigned int GPNLCMANEMN_KHGIEOAPPFN_TypeDefinitionIndex = 39838;

class GPNLCMANEMN_KHGIEOAPPFN : public ::System::Object
{
public:
	::EBNNGMLLPII CPHEFLHLLIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_KHGIEOAPPFN__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* JDCHKOPLMDL(::System::Net::ServicePoint* OPMPKFEHOBM, ::System::Net::IPEndPoint* HJNBDBFOHHK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + GPNLCMANEMN_KHGIEOAPPFN_JDCHKOPLMDL_OFFSET))(this, OPMPKFEHOBM, HJNBDBFOHHK, JHFKDGBCOBA);
	}
};

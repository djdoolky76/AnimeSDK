#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBNNGMLLPII.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define GPNLCMANEMN_DCHGJHDJEFF_LDFHGGGCAJC_OFFSET UNITYSDK_OFFSET(0x13D76380)
#define GPNLCMANEMN_DCHGJHDJEFF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D76370)

inline static constexpr unsigned int GPNLCMANEMN_DCHGJHDJEFF_TypeDefinitionIndex = 39844;

class GPNLCMANEMN_DCHGJHDJEFF : public ::System::Object
{
public:
	::EBNNGMLLPII CPHEFLHLLIO; // 0x10
	::System::String* FFCBDLFNDCL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNLCMANEMN_DCHGJHDJEFF__CTOR_OFFSET))(this);
	}

	::System::Net::IPEndPoint* LDFHGGGCAJC(::System::Net::ServicePoint* OPMPKFEHOBM, ::System::Net::IPEndPoint* HJNBDBFOHHK, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + GPNLCMANEMN_DCHGJHDJEFF_LDFHGGGCAJC_OFFSET))(this, OPMPKFEHOBM, HJNBDBFOHHK, JHFKDGBCOBA);
	}
};

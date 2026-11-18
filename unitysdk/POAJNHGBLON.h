#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POAJNHGBLON__CTOR_OFFSET UNITYSDK_OFFSET(0x150E2360)

inline static constexpr unsigned int POAJNHGBLON_TypeDefinitionIndex = 53736;

class POAJNHGBLON : public ::System::Object
{
public:
	::System::String* DPMFHLHBDNF; // 0x10
	::System::UInt32 DPGCKBEJLJD; // 0x18
	::System::Int32 ABGMMMOFGMC; // 0x1C
	::System::UInt32 JLLGDJPLHPB; // 0x20
	::System::Int32 PPPDJJHFNPH; // 0x24
	::System::Single KJMHIDEJICJ; // 0x28
	::System::Single IBHNBONLCEL; // 0x2C
	::System::Int32 DPMLNMAIPCD; // 0x30
	::System::Single LAOMDJPJIIM; // 0x34
	::System::Single PFEPBMHKHKM; // 0x38
	::System::Int32 IGKPNKEAJFM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POAJNHGBLON__CTOR_OFFSET))(this);
	}
};

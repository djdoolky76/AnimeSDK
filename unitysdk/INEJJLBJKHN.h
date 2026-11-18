#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GGIFOKDPDNG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INEJJLBJKHN__CTOR_OFFSET UNITYSDK_OFFSET(0x197E1060)

inline static constexpr unsigned int INEJJLBJKHN_TypeDefinitionIndex = 63190;

class INEJJLBJKHN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::GGIFOKDPDNG*>* BEKBLEHDPBO; // 0x10
	::System::Int32 MHALAKOIBIH; // 0x18
	::System::Boolean LAFPINDIIIP; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Int32 CMIIEINIDMB; // 0x20
	::System::Int32 IAJHCMNOOCL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INEJJLBJKHN__CTOR_OFFSET))(this);
	}
};

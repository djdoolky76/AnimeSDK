#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMHOLJNNCJA_PJJIMDAOJCJ;
class PCMENEMPLGF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCMENEMPLGF_NPKLPONHBNO_LLAJCGOLAIJ_OFFSET UNITYSDK_OFFSET(0x11B59190)
#define PCMENEMPLGF_NPKLPONHBNO__CTOR_OFFSET UNITYSDK_OFFSET(0x11B59180)

inline static constexpr unsigned int PCMENEMPLGF_NPKLPONHBNO_TypeDefinitionIndex = 62868;

class PCMENEMPLGF_NPKLPONHBNO : public ::System::Object
{
public:
	::DMHOLJNNCJA_PJJIMDAOJCJ* FHCPPMLNLIE; // 0x10
	::System::Action* ACPLNCIOIIJ; // 0x18
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* BFJEBBDANAB; // 0x28
	::System::Int32 EOGLMAEPALE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NPKLPONHBNO__CTOR_OFFSET))(this);
	}

	::System::Void LLAJCGOLAIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_NPKLPONHBNO_LLAJCGOLAIJ_OFFSET))(this);
	}
};

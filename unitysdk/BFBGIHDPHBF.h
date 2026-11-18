#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POEFBGIJIJL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BFBGIHDPHBF_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x169EA670)
#define BFBGIHDPHBF__CTOR_OFFSET UNITYSDK_OFFSET(0x169EA660)

inline static constexpr unsigned int BFBGIHDPHBF_TypeDefinitionIndex = 83755;

class BFBGIHDPHBF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PPNDLBOGDJA; // 0x10
	::System::Int32 GGLKGJIJIDF; // 0x18
	::System::Int32 JBMMGBOMDCO; // 0x1C
	::System::Boolean PHKEDFMAELJ; // 0x20
	::System::Boolean NPKMDAJJBNO; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBGIHDPHBF__CTOR_OFFSET))(this);
	}

	::POEFBGIJIJL* COPIDBEMEIE()
	{
		return ((::POEFBGIJIJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBGIHDPHBF_COPIDBEMEIE_OFFSET))(this);
	}
};

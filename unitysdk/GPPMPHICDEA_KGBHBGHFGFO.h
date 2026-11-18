#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPPMPHICDEA_KGBHBGHFGFO_HCGHPHCLJBK_OFFSET UNITYSDK_OFFSET(0x10FFBC10)
#define GPPMPHICDEA_KGBHBGHFGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFBC00)

inline static constexpr unsigned int GPPMPHICDEA_KGBHBGHFGFO_TypeDefinitionIndex = 42665;

class GPPMPHICDEA_KGBHBGHFGFO : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* NBNNOCMBJHJ; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* HLGNGBFENOO; // 0x20
	::System::Int32 CGMEOMGAKDN; // 0x28
	::System::Boolean GFFINNGEMLL; // 0x2C
	::System::Boolean NNBHNMLNAJF; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KGBHBGHFGFO__CTOR_OFFSET))(this);
	}

	::System::Void HCGHPHCLJBK(::System::Int32 DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KGBHBGHFGFO_HCGHPHCLJBK_OFFSET))(this, DJCNCELJPOM);
	}
};

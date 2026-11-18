#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBJLLOBDKHH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NBJLLOBDKHH_CFGOOHGLNEK_AJJJLMAPCAG_OFFSET UNITYSDK_OFFSET(0x1ADEFCD0)
#define NBJLLOBDKHH_CFGOOHGLNEK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADEFCC0)

inline static constexpr unsigned int NBJLLOBDKHH_CFGOOHGLNEK_TypeDefinitionIndex = 46250;

class NBJLLOBDKHH_CFGOOHGLNEK : public ::System::Object
{
public:
	::NBJLLOBDKHH* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* APLOAMCGMGL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CFGOOHGLNEK__CTOR_OFFSET))(this);
	}

	::System::Void AJJJLMAPCAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJLLOBDKHH_CFGOOHGLNEK_AJJJLMAPCAG_OFFSET))(this);
	}
};

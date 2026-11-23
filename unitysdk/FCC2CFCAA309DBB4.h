#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A0CD4F993D86508C;
class AB642D1382756991;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FCC2CFCAA309DBB4__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCC2CFCAA309DBB4_TypeDefinitionIndex = 255;

class FCC2CFCAA309DBB4 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* B4BE1880E0BA5DB3; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>* FD456110CCE6200F; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCC2CFCAA309DBB4__CTOR_OFFSET))(this);
	}
};

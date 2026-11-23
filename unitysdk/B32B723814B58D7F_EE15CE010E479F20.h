#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
class B32B723814B58D7F;
class F863A3AD1C1EA6E0;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B32B723814B58D7F_EE15CE010E479F20_E40DFB08932346B3_OFFSET UNITYSDK_OFFSET(0x1E8E5A0)
#define B32B723814B58D7F_EE15CE010E479F20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B32B723814B58D7F_EE15CE010E479F20_TypeDefinitionIndex = 9580;

class B32B723814B58D7F_EE15CE010E479F20 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::F863A3AD1C1EA6E0*>* E6A0732D66985885; // 0x10
	::B32B723814B58D7F* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B32B723814B58D7F_EE15CE010E479F20__CTOR_OFFSET))(this);
	}

	::System::Void E40DFB08932346B3(::A04FB906869DCF3A* AE7E9DB47209A946)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + B32B723814B58D7F_EE15CE010E479F20_E40DFB08932346B3_OFFSET))(this, AE7E9DB47209A946);
	}
};

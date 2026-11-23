#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B19DAAE39B708756.h"

class A2BA84CFC67C39C9;
class ED4768D175EFE6C9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADC3FF88C2D400CF_B15400D47F3F5BCB_OFFSET UNITYSDK_OFFSET(0x1FBD300)
#define ADC3FF88C2D400CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD400)

inline static constexpr unsigned int ADC3FF88C2D400CF_TypeDefinitionIndex = 6866;

class ADC3FF88C2D400CF : public ::B19DAAE39B708756
{
public:
	::System::Void _ctor(::System::Collections::Generic::List_1<::ED4768D175EFE6C9*>* F42A4E9C05B5C5C0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ED4768D175EFE6C9*>*))((::PBYTE)hIl2Cpp + ADC3FF88C2D400CF__CTOR_OFFSET))(this, F42A4E9C05B5C5C0);
	}

	::System::Void B15400D47F3F5BCB(::A2BA84CFC67C39C9* F3807B056B49D6C6)
	{
		return ((::System::Void(*)(::PVOID, ::A2BA84CFC67C39C9*))((::PBYTE)hIl2Cpp + ADC3FF88C2D400CF_B15400D47F3F5BCB_OFFSET))(this, F3807B056B49D6C6);
	}
};

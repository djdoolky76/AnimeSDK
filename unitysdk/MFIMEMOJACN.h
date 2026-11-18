#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
class OFIHOAMKMEB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFIMEMOJACN__CTOR_OFFSET UNITYSDK_OFFSET(0x185302B0)

inline static constexpr unsigned int MFIMEMOJACN_TypeDefinitionIndex = 84831;

class MFIMEMOJACN : public ::System::Object
{
public:
	::OFIHOAMKMEB* PELNHCCNKCO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* PBOKPIJGNCJ; // 0x18
	::DMCCPINHAGM* NLPAAJFNGFG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIMEMOJACN__CTOR_OFFSET))(this);
	}
};

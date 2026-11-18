#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACCHMKEMKIP;
namespace System { template <typename T> class Action_1; }

#define ACCHMKEMKIP_LODGEDFAMNP_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x17DC3290)
#define ACCHMKEMKIP_LODGEDFAMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC3280)

inline static constexpr unsigned int ACCHMKEMKIP_LODGEDFAMNP_TypeDefinitionIndex = 74922;

class ACCHMKEMKIP_LODGEDFAMNP : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* OIIGKOLGMMO; // 0x10
	::ACCHMKEMKIP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCHMKEMKIP_LODGEDFAMNP__CTOR_OFFSET))(this);
	}

	::System::Void LJHDGNAEDIC(::System::Single HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACCHMKEMKIP_LODGEDFAMNP_LJHDGNAEDIC_OFFSET))(this, HFMHOELKCAJ);
	}
};

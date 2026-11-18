#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHFGBKLOPOH.h"
#include "unitysdk/System/Object.h"

class POODDBJFAPA;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_DNCNHBFLHFE_IJKLEJJFIPF_OFFSET UNITYSDK_OFFSET(0x1D9D7EA0)
#define POODDBJFAPA_DNCNHBFLHFE_JCPOMIDFPII_OFFSET UNITYSDK_OFFSET(0x1D9D7DB0)
#define POODDBJFAPA_DNCNHBFLHFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7DA0)

inline static constexpr unsigned int POODDBJFAPA_DNCNHBFLHFE_TypeDefinitionIndex = 90267;

class POODDBJFAPA_DNCNHBFLHFE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* DHHGLBEAJEE; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* EEFJGFJMHOH; // 0x20
	::POODDBJFAPA* KLHPEBKNIFB; // 0x28
	::IHFGBKLOPOH KHJDKAJECCA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_DNCNHBFLHFE__CTOR_OFFSET))(this);
	}

	::System::Void JCPOMIDFPII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_DNCNHBFLHFE_JCPOMIDFPII_OFFSET))(this);
	}

	::System::Boolean IJKLEJJFIPF(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POODDBJFAPA_DNCNHBFLHFE_IJKLEJJFIPF_OFFSET))(this, HAAEBCOBKFF);
	}
};

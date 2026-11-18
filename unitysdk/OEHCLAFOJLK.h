#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PDHGEKBAEBE.h"
#include "unitysdk/PDHGEKBAEBE_IFOBEDHEDNH.h"

namespace System { class String; }
template <typename T> class DBMAHDDGMHM_1;
template <typename T> class JIOLFCAGOFH_1;

#define OEHCLAFOJLK_DINDGMLHGKA_OFFSET UNITYSDK_OFFSET(0x13A50DD0)
#define OEHCLAFOJLK_GMIBJJHKEKM_OFFSET UNITYSDK_OFFSET(0x13A50D50)
#define OEHCLAFOJLK_KFPBKBFJLLM_OFFSET UNITYSDK_OFFSET(0x13A50C20)
#define OEHCLAFOJLK_LACIHFJMCFG_OFFSET UNITYSDK_OFFSET(0x13A50EE0)
#define OEHCLAFOJLK_LKNBCFOKJLO_OFFSET UNITYSDK_OFFSET(0x13A50E50)
#define OEHCLAFOJLK_NIIMDLHGGLK_OFFSET UNITYSDK_OFFSET(0x13A511B0)
#define OEHCLAFOJLK_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x13A509F0)
#define OEHCLAFOJLK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A50D40)

inline static constexpr unsigned int OEHCLAFOJLK_TypeDefinitionIndex = 73313;

class OEHCLAFOJLK : public ::PDHGEKBAEBE
{
public:
	::JIOLFCAGOFH_1<::System::Boolean>* KOIELMLMGDM; // 0xB0
	::DBMAHDDGMHM_1<::System::Int32>* DGIAGIMPCEA; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void KFPBKBFJLLM(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_KFPBKBFJLLM_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Boolean GMIBJJHKEKM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_GMIBJJHKEKM_OFFSET))(this);
	}

	::System::Void DINDGMLHGKA(::System::Int32 BOBBHFPEPHC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_DINDGMLHGKA_OFFSET))(this, BOBBHFPEPHC);
	}

	::System::Void LKNBCFOKJLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_LKNBCFOKJLO_OFFSET))(this);
	}

	::PDHGEKBAEBE_IFOBEDHEDNH LACIHFJMCFG()
	{
		return ((::PDHGEKBAEBE_IFOBEDHEDNH(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_LACIHFJMCFG_OFFSET))(this);
	}

	::System::String* NIIMDLHGGLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCLAFOJLK_NIIMDLHGGLK_OFFSET))(this);
	}
};

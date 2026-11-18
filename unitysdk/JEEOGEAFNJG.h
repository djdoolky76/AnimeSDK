#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define JEEOGEAFNJG_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x130721E0)
#define JEEOGEAFNJG_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x13072480)
#define JEEOGEAFNJG_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x130723F0)
#define JEEOGEAFNJG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13071FC0)
#define JEEOGEAFNJG__CTOR_OFFSET UNITYSDK_OFFSET(0x130723B0)

inline static constexpr unsigned int JEEOGEAFNJG_TypeDefinitionIndex = 89935;

class JEEOGEAFNJG : public ::BBKFNNHAKBP
{
public:
	::System::Int32 KHLADOFOABB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOGEAFNJG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOGEAFNJG_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOGEAFNJG_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEOGEAFNJG_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void IAFHBCHLBME(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JEEOGEAFNJG_IAFHBCHLBME_OFFSET))(this, EIFONLCJOPG);
	}
};

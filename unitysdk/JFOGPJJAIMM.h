#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define JFOGPJJAIMM_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1A474900)
#define JFOGPJJAIMM_JONCCLDHOKG_OFFSET UNITYSDK_OFFSET(0x1A474B50)
#define JFOGPJJAIMM_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x1A474AC0)
#define JFOGPJJAIMM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A474820)
#define JFOGPJJAIMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A474A80)

inline static constexpr unsigned int JFOGPJJAIMM_TypeDefinitionIndex = 50251;

class JFOGPJJAIMM : public ::BBKFNNHAKBP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOGPJJAIMM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOGPJJAIMM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOGPJJAIMM_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOGPJJAIMM_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void JONCCLDHOKG(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JFOGPJJAIMM_JONCCLDHOKG_OFFSET))(this, KOIBHLHLMFC);
	}
};

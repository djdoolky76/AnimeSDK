#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define DCBLGKAOJBA_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x1205E060)
#define DCBLGKAOJBA_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x1205E400)
#define DCBLGKAOJBA_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x1205E450)
#define DCBLGKAOJBA_LODHHEPLHKM_OFFSET UNITYSDK_OFFSET(0x1205E380)
#define DCBLGKAOJBA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1205DE10)
#define DCBLGKAOJBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1205E340)

inline static constexpr unsigned int DCBLGKAOJBA_TypeDefinitionIndex = 54318;

class DCBLGKAOJBA : public ::BBKFNNHAKBP
{
public:
	::System::Int32 JNIPNOADNPA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBLGKAOJBA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBLGKAOJBA_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBLGKAOJBA_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void LODHHEPLHKM(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DCBLGKAOJBA_LODHHEPLHKM_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void IAFHBCHLBME(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + DCBLGKAOJBA_IAFHBCHLBME_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBLGKAOJBA_KHAEIOINMBG_OFFSET))(this);
	}
};

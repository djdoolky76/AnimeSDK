#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
class GLFGMDLGDEO;
class PNJDGHBEMLK;
namespace System { template <typename T1, typename T2> class Func_2; }

#define GLFGMDLGDEO_MKCNAIOJBPJ_AACLKPHGMLM_OFFSET UNITYSDK_OFFSET(0x179FA2C0)
#define GLFGMDLGDEO_MKCNAIOJBPJ_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x179FA6A0)
#define GLFGMDLGDEO_MKCNAIOJBPJ_NBGJLEHHFMA_OFFSET UNITYSDK_OFFSET(0x179FA420)
#define GLFGMDLGDEO_MKCNAIOJBPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x179FA2B0)

inline static constexpr unsigned int GLFGMDLGDEO_MKCNAIOJBPJ_TypeDefinitionIndex = 91572;

class GLFGMDLGDEO_MKCNAIOJBPJ : public ::System::Object
{
public:
	::GLFGMDLGDEO* KLHPEBKNIFB; // 0x10
	::FBAMLABJMKF* GHHHJJIHBNA; // 0x18
	::System::Func_2<::PNJDGHBEMLK*, ::System::Boolean>* FFMGICPLKFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_MKCNAIOJBPJ__CTOR_OFFSET))(this);
	}

	::System::Boolean AACLKPHGMLM(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_MKCNAIOJBPJ_AACLKPHGMLM_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Boolean NBGJLEHHFMA(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_MKCNAIOJBPJ_NBGJLEHHFMA_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFGMDLGDEO_MKCNAIOJBPJ_LDMKNICFFNB_OFFSET))(this);
	}
};

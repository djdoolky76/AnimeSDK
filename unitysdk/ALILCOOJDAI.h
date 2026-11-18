#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IHNCCABJGPA;
class IKNGGHOCDBF;
template <typename T> class DFDEIDBBGHG_1;

#define ALILCOOJDAI_BGIHCODOPAM_OFFSET UNITYSDK_OFFSET(0x1F8BDD70)
#define ALILCOOJDAI_CLHIBAAHMOH_OFFSET UNITYSDK_OFFSET(0x1F8BDBE0)
#define ALILCOOJDAI_IHNBOIBEBJM_OFFSET UNITYSDK_OFFSET(0x1F8BDC50)
#define ALILCOOJDAI_IPHAOJFJJFJ_OFFSET UNITYSDK_OFFSET(0x1F8BDDE0)
#define ALILCOOJDAI_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1F8BDB90)

inline static constexpr unsigned int ALILCOOJDAI_TypeDefinitionIndex = 18069;

class ALILCOOJDAI : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_HONIHJCFAPP()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ALILCOOJDAI_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void MBKDOMFJFIG(::IHNCCABJGPA* NAPFALLANDL)
	{
		return ((::System::Void(*)(::IHNCCABJGPA*))((::PBYTE)hIl2Cpp + ALILCOOJDAI_MBKDOMFJFIG_OFFSET))(NAPFALLANDL);
	}

	static ::System::Void CLHIBAAHMOH(::DFDEIDBBGHG_1<::IKNGGHOCDBF*>* KIJBPGGNEAJ, ::DFDEIDBBGHG_1<::IKNGGHOCDBF*>* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::DFDEIDBBGHG_1<::IKNGGHOCDBF*>*, ::DFDEIDBBGHG_1<::IKNGGHOCDBF*>*))((::PBYTE)hIl2Cpp + ALILCOOJDAI_CLHIBAAHMOH_OFFSET))(KIJBPGGNEAJ, LIBPKNHDIGP);
	}

	static ::System::Boolean IHNBOIBEBJM(::IHNCCABJGPA* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::IHNCCABJGPA*))((::PBYTE)hIl2Cpp + ALILCOOJDAI_IHNBOIBEBJM_OFFSET))(NAPFALLANDL);
	}

	static ::System::Boolean BGIHCODOPAM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ALILCOOJDAI_BGIHCODOPAM_OFFSET))();
	}

	static ::System::Void IPHAOJFJJFJ(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ALILCOOJDAI_IPHAOJFJJFJ_OFFSET))(FBILHHBPEHD);
	}
};

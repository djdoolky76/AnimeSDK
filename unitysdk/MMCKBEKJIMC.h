#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MMCKBEKJIMC_NKDJOCBEIBH_GIOMDDJHFEI.h"

class MMCKBEKJIMC_NKDJOCBEIBH;
class MMCKBEKJIMC_NKDJOCBEIBH_BEOIOPHCHME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMCKBEKJIMC_BDCANKOJBFH_OFFSET UNITYSDK_OFFSET(0x1319FCD0)
#define MMCKBEKJIMC_ELHMNIPDHHG_OFFSET UNITYSDK_OFFSET(0x1319F810)
#define MMCKBEKJIMC_NMOGBCEKPKF_OFFSET UNITYSDK_OFFSET(0x1319FB40)
#define MMCKBEKJIMC_POENPGFJAKC_OFFSET UNITYSDK_OFFSET(0x1319FA70)
#define MMCKBEKJIMC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1319F770)

inline static constexpr unsigned int MMCKBEKJIMC_TypeDefinitionIndex = 44437;

class MMCKBEKJIMC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_EECBDENLGJI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MMCKBEKJIMC_TypeDefinitionIndex)->GetStaticField(0x4BFD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMCKBEKJIMC__CCTOR_OFFSET))();
	}

	static ::MMCKBEKJIMC_NKDJOCBEIBH* ELHMNIPDHHG(::System::String* FDIJPOPMGLF, ::MMCKBEKJIMC_NKDJOCBEIBH_GIOMDDJHFEI IGJCLCANADP)
	{
		return ((::MMCKBEKJIMC_NKDJOCBEIBH*(*)(::System::String*, ::MMCKBEKJIMC_NKDJOCBEIBH_GIOMDDJHFEI))((::PBYTE)hIl2Cpp + MMCKBEKJIMC_ELHMNIPDHHG_OFFSET))(FDIJPOPMGLF, IGJCLCANADP);
	}

	static ::System::Boolean POENPGFJAKC(::MMCKBEKJIMC_NKDJOCBEIBH_BEOIOPHCHME* PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::MMCKBEKJIMC_NKDJOCBEIBH_BEOIOPHCHME*))((::PBYTE)hIl2Cpp + MMCKBEKJIMC_POENPGFJAKC_OFFSET))(PHHDHIBOCKA);
	}

	static ::System::Void NMOGBCEKPKF(::System::String* DFFNCBHLHKA, ::MMCKBEKJIMC_NKDJOCBEIBH_BEOIOPHCHME*& PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::System::String*, ::MMCKBEKJIMC_NKDJOCBEIBH_BEOIOPHCHME*&))((::PBYTE)hIl2Cpp + MMCKBEKJIMC_NMOGBCEKPKF_OFFSET))(DFFNCBHLHKA, PHHDHIBOCKA);
	}

	static ::System::Void BDCANKOJBFH(::System::String* FDIJPOPMGLF)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMCKBEKJIMC_BDCANKOJBFH_OFFSET))(FDIJPOPMGLF);
	}
};

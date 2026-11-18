#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class EAIOHODECAO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJMDPPFHEJE_ABHMJJPMFPE_OFFSET UNITYSDK_OFFSET(0x1EFBCD50)
#define FJMDPPFHEJE_EMPJKGDMGDA_OFFSET UNITYSDK_OFFSET(0x1EFBCE60)
#define FJMDPPFHEJE_GPKLFGMGGOO_OFFSET UNITYSDK_OFFSET(0x1EFBCEF0)
#define FJMDPPFHEJE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EFBCBF0)
#define FJMDPPFHEJE_MCAPMBEOHGI_OFFSET UNITYSDK_OFFSET(0x1EFBCF70)
#define FJMDPPFHEJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EFBCBA0)
#define FJMDPPFHEJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBCC90)

inline static constexpr unsigned int FJMDPPFHEJE_TypeDefinitionIndex = 96646;

class FJMDPPFHEJE : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* FPHDMBAFKCL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMDPPFHEJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Boolean ABHMJJPMFPE(::System::UInt32 BKLGNCBNEGM, ::System::UInt32& KEGBFANEPBJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_ABHMJJPMFPE_OFFSET))(this, BKLGNCBNEGM, KEGBFANEPBJ);
	}

	::System::Void EMPJKGDMGDA(::System::UInt32 HDGIELLOOEF, ::System::UInt32 MKGLHHPNCMN, ::System::UInt32 KEGBFANEPBJ, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_EMPJKGDMGDA_OFFSET))(this, HDGIELLOOEF, MKGLHHPNCMN, KEGBFANEPBJ, BKLGNCBNEGM);
	}

	::System::Void GPKLFGMGGOO(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_GPKLFGMGGOO_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::UInt32 MCAPMBEOHGI(::System::UInt32 KEGBFANEPBJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJMDPPFHEJE_MCAPMBEOHGI_OFFSET))(this, KEGBFANEPBJ);
	}
};

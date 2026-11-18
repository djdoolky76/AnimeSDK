#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGFDKLCIBE.h"

class GNPIFBMHJJM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNAAHENMAJO_AFPPPODAPLI_OFFSET UNITYSDK_OFFSET(0x14EF9520)
#define BNAAHENMAJO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14EF99B0)
#define BNAAHENMAJO_DHFHLOCBKHD_OFFSET UNITYSDK_OFFSET(0x14EF9A20)
#define BNAAHENMAJO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14EF9430)
#define BNAAHENMAJO_DLEMDHDDFCD_OFFSET UNITYSDK_OFFSET(0x14EF9D20)
#define BNAAHENMAJO_EGCOPDPLLNO_OFFSET UNITYSDK_OFFSET(0x14EFA220)
#define BNAAHENMAJO_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x14EFA060)
#define BNAAHENMAJO_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x14EF9730)
#define BNAAHENMAJO_ONCREATE_OFFSET UNITYSDK_OFFSET(0x14EF93F0)
#define BNAAHENMAJO__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF94A0)

inline static constexpr unsigned int BNAAHENMAJO_TypeDefinitionIndex = 64302;

class BNAAHENMAJO
{
public:
	::System::Collections::Generic::List_1<::GNPIFBMHJJM*>* MLIDEPEBEGD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAAHENMAJO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAAHENMAJO_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNAAHENMAJO_DISPOSE_OFFSET))(this);
	}

	static ::System::Void AFPPPODAPLI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAAHENMAJO_AFPPPODAPLI_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::GNPIFBMHJJM* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::GNPIFBMHJJM*))((::PBYTE)hIl2Cpp + BNAAHENMAJO_KKFNPONHGEM_OFFSET))(AOKHOHCJNFJ);
	}

	static ::System::Void COKNIICCODC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAAHENMAJO_COKNIICCODC_OFFSET))();
	}

	static ::HNGFDKLCIBE DHFHLOCBKHD(::System::String* EOAOLNDPOEN)
	{
		return ((::HNGFDKLCIBE(*)(::System::String*))((::PBYTE)hIl2Cpp + BNAAHENMAJO_DHFHLOCBKHD_OFFSET))(EOAOLNDPOEN);
	}

	static ::HNGFDKLCIBE DLEMDHDDFCD(::System::String* EOAOLNDPOEN, ::System::Int32 AMHLPIAIEDC, ::System::Int32 PHNMGNKKILJ, ::System::Boolean EPGLPGPOOJN, ::System::Boolean COEFBDIAGBI)
	{
		return ((::HNGFDKLCIBE(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BNAAHENMAJO_DLEMDHDDFCD_OFFSET))(EOAOLNDPOEN, AMHLPIAIEDC, PHNMGNKKILJ, EPGLPGPOOJN, COEFBDIAGBI);
	}

	static ::System::Void HNEAGGGILAC(::GNPIFBMHJJM* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::GNPIFBMHJJM*))((::PBYTE)hIl2Cpp + BNAAHENMAJO_HNEAGGGILAC_OFFSET))(AOKHOHCJNFJ);
	}

	static ::System::Void EGCOPDPLLNO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNAAHENMAJO_EGCOPDPLLNO_OFFSET))();
	}
};

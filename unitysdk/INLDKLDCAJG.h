#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IMJOHEPEJHK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INLDKLDCAJG_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x13AB0700)
#define INLDKLDCAJG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x13AB0610)
#define INLDKLDCAJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13AB0520)
#define INLDKLDCAJG_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x13AB07A0)
#define INLDKLDCAJG_FOIGBJPHMLC_OFFSET UNITYSDK_OFFSET(0x13AB0830)
#define INLDKLDCAJG__CTOR_OFFSET UNITYSDK_OFFSET(0x13AB0590)

inline static constexpr unsigned int INLDKLDCAJG_TypeDefinitionIndex = 56013;

class INLDKLDCAJG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IMJOHEPEJHK*>* FNEKMIEDMEP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDKLDCAJG__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDKLDCAJG_DISPOSE_OFFSET))(this);
	}

	static ::INLDKLDCAJG* COKNIICCODC()
	{
		return ((::INLDKLDCAJG*(*)())((::PBYTE)hIl2Cpp + INLDKLDCAJG_COKNIICCODC_OFFSET))();
	}

	::System::Void ANPBCLAFCJB(::IMJOHEPEJHK* GMKILPBDCFN)
	{
		return ((::System::Void(*)(::PVOID, ::IMJOHEPEJHK*))((::PBYTE)hIl2Cpp + INLDKLDCAJG_ANPBCLAFCJB_OFFSET))(this, GMKILPBDCFN);
	}

	::System::Boolean FLHNGDLANDC(::IMJOHEPEJHK* GMKILPBDCFN)
	{
		return ((::System::Boolean(*)(::PVOID, ::IMJOHEPEJHK*))((::PBYTE)hIl2Cpp + INLDKLDCAJG_FLHNGDLANDC_OFFSET))(this, GMKILPBDCFN);
	}

	::System::Void FOIGBJPHMLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INLDKLDCAJG_FOIGBJPHMLC_OFFSET))(this);
	}
};

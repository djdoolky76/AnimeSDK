#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BBKFNNHAKBP;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KJEILIHNJFA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16813210)
#define KJEILIHNJFA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x168130C0)
#define KJEILIHNJFA_DJDJKILDPGP_OFFSET UNITYSDK_OFFSET(0x16813320)
#define KJEILIHNJFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x16813020)

inline static constexpr unsigned int KJEILIHNJFA_TypeDefinitionIndex = 42601;

class KJEILIHNJFA : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::BBKFNNHAKBP*>*>** StaticGet_PAALGICAION()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Func_1<::BBKFNNHAKBP*>*>**)Il2CppClass::FromTypeDefinitionIndex(KJEILIHNJFA_TypeDefinitionIndex)->GetStaticField(0x482C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEILIHNJFA__CCTOR_OFFSET))();
	}

	static ::BBKFNNHAKBP* COKNIICCODC(::System::Int32 HBHJNGPLMNL)
	{
		return ((::BBKFNNHAKBP*(*)(::System::Int32))((::PBYTE)hIl2Cpp + KJEILIHNJFA_COKNIICCODC_OFFSET))(HBHJNGPLMNL);
	}

	static ::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEILIHNJFA_BJANDJKKNCD_OFFSET))();
	}

	static ::System::Void DJDJKILDPGP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJEILIHNJFA_DJDJKILDPGP_OFFSET))();
	}
};

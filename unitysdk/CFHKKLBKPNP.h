#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/CFHKKLBKPNP_PCNPKIFAHGK.h"

class EAIOHODECAO;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFHKKLBKPNP_HJPHMMNADIM_OFFSET UNITYSDK_OFFSET(0x1EB93690)
#define CFHKKLBKPNP_KAIHEBOLCMC_OFFSET UNITYSDK_OFFSET(0x1EB93A00)
#define CFHKKLBKPNP_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB93620)
#define CFHKKLBKPNP_OEJFMKJFMIA_OFFSET UNITYSDK_OFFSET(0x1EB93810)
#define CFHKKLBKPNP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EB935D0)
#define CFHKKLBKPNP_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EB938A0)
#define CFHKKLBKPNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB93790)

inline static constexpr unsigned int CFHKKLBKPNP_TypeDefinitionIndex = 96424;

class CFHKKLBKPNP : public ::MHOBPPAJKIL
{
public:
	::EAIOHODECAO* NAEFJGAOJCB; // 0x18
	::System::Collections::Generic::List_1<::System::Object*>* JGIJNCEPIPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHKKLBKPNP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void HJPHMMNADIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_HJPHMMNADIM_OFFSET))(this);
	}

	::System::Void OEJFMKJFMIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_OEJFMKJFMIA_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void KAIHEBOLCMC(::System::Action_1<::System::Object*>* GJBHEJGENMI, ::CFHKKLBKPNP_PCNPKIFAHGK HNOPAJLDCFB, ::System::UInt32 GKDOJFOOHAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::CFHKKLBKPNP_PCNPKIFAHGK, ::System::UInt32))((::PBYTE)hIl2Cpp + CFHKKLBKPNP_KAIHEBOLCMC_OFFSET))(this, GJBHEJGENMI, HNOPAJLDCFB, GKDOJFOOHAD);
	}
};

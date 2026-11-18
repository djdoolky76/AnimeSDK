#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/OIJMNMFOMAO.h"
#include "unitysdk/PLDCKNLDFDP.h"

class EAIOHODECAO;
class EGHDIOCBPHD;
class KGJGAGJNKBB;
class KHNFDJILKNI;
class NKCNKNCLOLO;
class OFLPOCHHHLC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKNACGHMKJL_COFIKFHGACP_OFFSET UNITYSDK_OFFSET(0x1F7254C0)
#define KKNACGHMKJL_JALADMFEAJA_OFFSET UNITYSDK_OFFSET(0x1F725930)
#define KKNACGHMKJL_KFLAKKEJLNI_OFFSET UNITYSDK_OFFSET(0x1F724F30)
#define KKNACGHMKJL_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1F724BB0)
#define KKNACGHMKJL_MNCFBDNDCIM_OFFSET UNITYSDK_OFFSET(0x1F725780)
#define KKNACGHMKJL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F724B60)
#define KKNACGHMKJL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1F724FD0)
#define KKNACGHMKJL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F724F20)
#define KKNACGHMKJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F724E60)

inline static constexpr unsigned int KKNACGHMKJL_TypeDefinitionIndex = 96417;

class KKNACGHMKJL : public ::MHOBPPAJKIL
{
public:
	static ::System::Single* StaticGet_HDCCKJBGHIE()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KKNACGHMKJL_TypeDefinitionIndex)->GetStaticField(0x14120);
	}
	::System::Collections::Generic::List_1<::OIJMNMFOMAO>* MFNKBCPKLIJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KHNFDJILKNI*>* GHPBLBHHBIH; // 0x20
	::KGJGAGJNKBB* GKKBFGMDDJK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNACGHMKJL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNACGHMKJL__CCTOR_OFFSET))();
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + KKNACGHMKJL_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNACGHMKJL_KMMIPNMJILI_OFFSET))(this);
	}

	::KGJGAGJNKBB* KFLAKKEJLNI()
	{
		return ((::KGJGAGJNKBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNACGHMKJL_KFLAKKEJLNI_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKNACGHMKJL_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void COFIKFHGACP(::NKCNKNCLOLO* KECKGDFIALJ, ::OIJMNMFOMAO HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::NKCNKNCLOLO*, ::OIJMNMFOMAO))((::PBYTE)hIl2Cpp + KKNACGHMKJL_COFIKFHGACP_OFFSET))(this, KECKGDFIALJ, HMMMOCJAEOA);
	}

	static ::System::Boolean MNCFBDNDCIM(::EGHDIOCBPHD* IFAJBOBJDJE, ::OFLPOCHHHLC* MBGBPLKKNOD, ::OIJMNMFOMAO HMMMOCJAEOA, ::PLDCKNLDFDP& DCEOBAPNGIK)
	{
		return ((::System::Boolean(*)(::EGHDIOCBPHD*, ::OFLPOCHHHLC*, ::OIJMNMFOMAO, ::PLDCKNLDFDP&))((::PBYTE)hIl2Cpp + KKNACGHMKJL_MNCFBDNDCIM_OFFSET))(IFAJBOBJDJE, MBGBPLKKNOD, HMMMOCJAEOA, DCEOBAPNGIK);
	}

	::System::Void JALADMFEAJA(::OIJMNMFOMAO HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::OIJMNMFOMAO))((::PBYTE)hIl2Cpp + KKNACGHMKJL_JALADMFEAJA_OFFSET))(this, HMMMOCJAEOA);
	}
};

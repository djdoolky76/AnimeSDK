#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKHJGIGILMB.h"

class EAIOHODECAO;
class KNLHFLFKGMP;
namespace System { class String; }

#define JCGPNEFKJKC_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1E111EB0)
#define JCGPNEFKJKC_KNPHCLFAFHM_OFFSET UNITYSDK_OFFSET(0x1E111EF0)
#define JCGPNEFKJKC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1E111E60)
#define JCGPNEFKJKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E111F40)

inline static constexpr unsigned int JCGPNEFKJKC_TypeDefinitionIndex = 94721;

class JCGPNEFKJKC : public ::GKHJGIGILMB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGPNEFKJKC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + JCGPNEFKJKC_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCGPNEFKJKC_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Boolean KNPHCLFAFHM(::KNLHFLFKGMP* JDPKJJCKJLG, ::System::String* HNOGOACBONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::KNLHFLFKGMP*, ::System::String*))((::PBYTE)hIl2Cpp + JCGPNEFKJKC_KNPHCLFAFHM_OFFSET))(this, JDPKJJCKJLG, HNOGOACBONK);
	}
};

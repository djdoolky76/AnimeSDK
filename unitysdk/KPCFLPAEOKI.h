#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKHJGIGILMB.h"

class EAIOHODECAO;
class KNLHFLFKGMP;
namespace System { class String; }

#define KPCFLPAEOKI_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1DAC9DA0)
#define KPCFLPAEOKI_KNPHCLFAFHM_OFFSET UNITYSDK_OFFSET(0x1DAC9DE0)
#define KPCFLPAEOKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1DAC9D50)
#define KPCFLPAEOKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9E30)

inline static constexpr unsigned int KPCFLPAEOKI_TypeDefinitionIndex = 93927;

class KPCFLPAEOKI : public ::GKHJGIGILMB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCFLPAEOKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + KPCFLPAEOKI_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCFLPAEOKI_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Boolean KNPHCLFAFHM(::KNLHFLFKGMP* JDPKJJCKJLG, ::System::String* HNOGOACBONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::KNLHFLFKGMP*, ::System::String*))((::PBYTE)hIl2Cpp + KPCFLPAEOKI_KNPHCLFAFHM_OFFSET))(this, JDPKJJCKJLG, HNOGOACBONK);
	}
};

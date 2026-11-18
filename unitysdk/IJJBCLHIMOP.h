#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAMLPLAEOFA.h"

class DMFCAPLHHON;
class EAIOHODECAO;

#define IJJBCLHIMOP_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1DE56040)
#define IJJBCLHIMOP_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1DE56000)
#define IJJBCLHIMOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1DE55FB0)
#define IJJBCLHIMOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE56200)

inline static constexpr unsigned int IJJBCLHIMOP_TypeDefinitionIndex = 94014;

class IJJBCLHIMOP : public ::KAMLPLAEOFA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJBCLHIMOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + IJJBCLHIMOP_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJBCLHIMOP_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + IJJBCLHIMOP_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}
};

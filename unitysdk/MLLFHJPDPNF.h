#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define MLLFHJPDPNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1406EAB0)
#define MLLFHJPDPNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1406E9E0)
#define MLLFHJPDPNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1406EAA0)

inline static constexpr unsigned int MLLFHJPDPNF_TypeDefinitionIndex = 69962;

class MLLFHJPDPNF : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLLFHJPDPNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLLFHJPDPNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLLFHJPDPNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

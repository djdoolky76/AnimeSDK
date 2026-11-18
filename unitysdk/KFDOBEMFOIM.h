#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define KFDOBEMFOIM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A2C5270)
#define KFDOBEMFOIM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A2C51D0)
#define KFDOBEMFOIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C5260)

inline static constexpr unsigned int KFDOBEMFOIM_TypeDefinitionIndex = 47770;

class KFDOBEMFOIM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MGLJHABNDJO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFDOBEMFOIM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFDOBEMFOIM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFDOBEMFOIM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

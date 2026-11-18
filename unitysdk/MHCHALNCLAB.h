#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define MHCHALNCLAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1405DAB0)
#define MHCHALNCLAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1405DA10)
#define MHCHALNCLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1405DAA0)

inline static constexpr unsigned int MHCHALNCLAB_TypeDefinitionIndex = 50643;

class MHCHALNCLAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HDFEHKCAOMH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCHALNCLAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHCHALNCLAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHCHALNCLAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

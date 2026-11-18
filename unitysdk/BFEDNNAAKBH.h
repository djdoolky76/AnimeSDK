#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define BFEDNNAAKBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17023090)
#define BFEDNNAAKBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17022FF0)
#define BFEDNNAAKBH__CTOR_OFFSET UNITYSDK_OFFSET(0x17023080)

inline static constexpr unsigned int BFEDNNAAKBH_TypeDefinitionIndex = 80200;

class BFEDNNAAKBH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HDFEHKCAOMH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFEDNNAAKBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFEDNNAAKBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFEDNNAAKBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

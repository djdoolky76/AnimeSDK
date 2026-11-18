#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UGUIMeshRender;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define EHJCILHMFHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFE0C430)
#define EHJCILHMFHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFE0C300)
#define EHJCILHMFHA__CTOR_OFFSET UNITYSDK_OFFSET(0xFE0C420)

inline static constexpr unsigned int EHJCILHMFHA_TypeDefinitionIndex = 39445;

class EHJCILHMFHA : public ::GIBMJLOJLKD
{
public:
	::UGUIMeshRender* HNNKOJJLDKB; // 0x18
	::UGUIMeshRender* GJKFCFNIKOB; // 0x20
	::UGUIMeshRender* MKJBKGBJNJA; // 0x28
	::UGUIMeshRender* LKBHICKHPHO; // 0x30
	::UGUIMeshRender* HFEIBDLANDE; // 0x38
	::UnityEngine::Transform* ANDFIBAKEAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJCILHMFHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHJCILHMFHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHJCILHMFHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

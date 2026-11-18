#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define FNMIKJJLFBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179BDA00)
#define FNMIKJJLFBB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179BD970)
#define FNMIKJJLFBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179BD810)
#define FNMIKJJLFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x179BD9F0)

inline static constexpr unsigned int FNMIKJJLFBB_TypeDefinitionIndex = 75303;

class FNMIKJJLFBB : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* MJEGFCEPIPB; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMIKJJLFBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNMIKJJLFBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMIKJJLFBB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNMIKJJLFBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

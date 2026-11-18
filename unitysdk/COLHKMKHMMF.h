#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define COLHKMKHMMF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12B8E3E0)
#define COLHKMKHMMF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12B8E2F0)
#define COLHKMKHMMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12B8E150)
#define COLHKMKHMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B8E3D0)

inline static constexpr unsigned int COLHKMKHMMF_TypeDefinitionIndex = 76426;

class COLHKMKHMMF : public ::GIBMJLOJLKD
{
public:
	::KNLFLMMHALL_1<::System::Object*>* FDJHEBHLJLD; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* DEIPJONPFNG; // 0x20
	::MonoUITableScrollV2* ILKMCMJKCNO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHKMKHMMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COLHKMKHMMF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + COLHKMKHMMF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLHKMKHMMF_KGEBDLGBGNM_OFFSET))(this);
	}
};

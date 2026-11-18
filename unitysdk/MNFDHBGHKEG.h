#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define MNFDHBGHKEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C595FB0)
#define MNFDHBGHKEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C595EE0)
#define MNFDHBGHKEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C595D10)
#define MNFDHBGHKEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C595FA0)

inline static constexpr unsigned int MNFDHBGHKEG_TypeDefinitionIndex = 57701;

class MNFDHBGHKEG : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IPAJICIFKAC; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* NHKFNMKDCAB; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* OOKOLNGACGE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFDHBGHKEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNFDHBGHKEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNFDHBGHKEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNFDHBGHKEG_KGEBDLGBGNM_OFFSET))(this);
	}
};

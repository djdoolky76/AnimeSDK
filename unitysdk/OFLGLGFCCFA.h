#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
template <typename T> class KNLFLMMHALL_1;

#define OFLGLGFCCFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B77E6E0)
#define OFLGLGFCCFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B77E5E0)
#define OFLGLGFCCFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B77E3F0)
#define OFLGLGFCCFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B77E6D0)

inline static constexpr unsigned int OFLGLGFCCFA_TypeDefinitionIndex = 58186;

class OFLGLGFCCFA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IPAJICIFKAC; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* DDLMLLDIOLB; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* ENPBLLPEPBB; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* KCCDEMJPKOP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLGLGFCCFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFLGLGFCCFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFLGLGFCCFA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFLGLGFCCFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

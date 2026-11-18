#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;

#define JLBAHPPJGMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A47B860)
#define JLBAHPPJGMH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A47B750)
#define JLBAHPPJGMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A47B520)
#define JLBAHPPJGMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47B850)

inline static constexpr unsigned int JLBAHPPJGMH_TypeDefinitionIndex = 80662;

class JLBAHPPJGMH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x18
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::KNLFLMMHALL_1<::System::Object*>* HAIOIHBLHIK; // 0x30
	::KNLFLMMHALL_1<::System::Object*>* LBLJAAECPGC; // 0x38
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x40
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBAHPPJGMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLBAHPPJGMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBAHPPJGMH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLBAHPPJGMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

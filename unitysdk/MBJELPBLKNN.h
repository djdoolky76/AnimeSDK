#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
template <typename T> class KNLFLMMHALL_1;

#define MBJELPBLKNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A634F00)
#define MBJELPBLKNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A634DF0)
#define MBJELPBLKNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A634BD0)
#define MBJELPBLKNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A634EF0)

inline static constexpr unsigned int MBJELPBLKNN_TypeDefinitionIndex = 87664;

class MBJELPBLKNN : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadNavigatableList* IIHPFDNABPI; // 0x18
	::KNLFLMMHALL_1<::System::Object*>* DIGPDPEKDIJ; // 0x20
	::KNLFLMMHALL_1<::System::Object*>* FANMEJFDLEJ; // 0x28
	::UnityEngine::Animation* OEAALKEFLBA; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJELPBLKNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBJELPBLKNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBJELPBLKNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJELPBLKNN_KGEBDLGBGNM_OFFSET))(this);
	}
};

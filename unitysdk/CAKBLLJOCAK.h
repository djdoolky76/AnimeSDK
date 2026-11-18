#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CAKBLLJOCAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1693D4D0)
#define CAKBLLJOCAK_FGFKDDEOFFF_OFFSET UNITYSDK_OFFSET(0x1693D2F0)
#define CAKBLLJOCAK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1693D440)
#define CAKBLLJOCAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1693D190)
#define CAKBLLJOCAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1693D4C0)

inline static constexpr unsigned int CAKBLLJOCAK_TypeDefinitionIndex = 74258;

class CAKBLLJOCAK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* DGEKFEEFHPL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKBLLJOCAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAKBLLJOCAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAKBLLJOCAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* FGFKDDEOFFF(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CAKBLLJOCAK_FGFKDDEOFFF_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKBLLJOCAK_KGEBDLGBGNM_OFFSET))(this);
	}
};

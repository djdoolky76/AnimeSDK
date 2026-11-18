#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFPHKPLDMJ.h"

class KBDGKAJPALP;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { template <typename T> class Func_1; }

#define AEKANAFNEKG_BOEJLFCNMIC_OFFSET UNITYSDK_OFFSET(0x1EEDEF80)
#define AEKANAFNEKG_DIOOIKGBJCF_OFFSET UNITYSDK_OFFSET(0x1EEDF7D0)
#define AEKANAFNEKG_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x1EEDF740)
#define AEKANAFNEKG_JBOHMOCBDMI_OFFSET UNITYSDK_OFFSET(0x1EEDF860)
#define AEKANAFNEKG_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x1EEDEDB0)
#define AEKANAFNEKG_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x1EEDF8F0)
#define AEKANAFNEKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDF7C0)

inline static constexpr unsigned int AEKANAFNEKG_TypeDefinitionIndex = 94993;

class AEKANAFNEKG : public ::KAFPHKPLDMJ
{
public:
	::KBDGKAJPALP* GEEHGDABNJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_HIABONACIDH_OFFSET))(this);
	}

	::System::Void DIOOIKGBJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_DIOOIKGBJCF_OFFSET))(this);
	}

	::System::Void BOEJLFCNMIC(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + AEKANAFNEKG_BOEJLFCNMIC_OFFSET))(this, GEEHGDABNJF);
	}

	::MoleMole::ScrollViewItemWidgetController* JBOHMOCBDMI(::System::Func_1<::MoleMole::UIControlReference*>* KOIBHLHLMFC)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + AEKANAFNEKG_JBOHMOCBDMI_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OBBJKALBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKANAFNEKG_OBBJKALBMFL_OFFSET))(this);
	}
};

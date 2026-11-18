#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJMLAKMIEKN.h"
#include "unitysdk/HJOKDGFPEJA.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"

class JKGAACKPMNB;
class KHFJMGEFPHM;
namespace MoleMole::Config { class ConfigChessboardFilter; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering { class Volume; }

#define IKJABDPAIOC_AIDOCMKMEFA_1_OFFSET UNITYSDK_OFFSET(0x15ED0080)
#define IKJABDPAIOC_AIDOCMKMEFA_OFFSET UNITYSDK_OFFSET(0x15ECE9D0)
#define IKJABDPAIOC_BGKNEFFJOJB_OFFSET UNITYSDK_OFFSET(0x15ECFEE0)
#define IKJABDPAIOC_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15ED0B20)
#define IKJABDPAIOC_CKOCPKHHLOC_OFFSET UNITYSDK_OFFSET(0x15ED1200)
#define IKJABDPAIOC_CLPOFCOGBCN_OFFSET UNITYSDK_OFFSET(0x15ECFA40)
#define IKJABDPAIOC_GKNDNBNFNIB_1_OFFSET UNITYSDK_OFFSET(0x15ED0DD0)
#define IKJABDPAIOC_GKNDNBNFNIB_OFFSET UNITYSDK_OFFSET(0x15ECEC10)
#define IKJABDPAIOC_HFIBJGNLAFN_OFFSET UNITYSDK_OFFSET(0x15ECFC40)
#define IKJABDPAIOC_IHFGAAEBMFL_1_OFFSET UNITYSDK_OFFSET(0x15ED0F60)
#define IKJABDPAIOC_IHFGAAEBMFL_OFFSET UNITYSDK_OFFSET(0x15ED0B60)
#define IKJABDPAIOC_JPDAKPBKLJJ_OFFSET UNITYSDK_OFFSET(0x15ED02F0)
#define IKJABDPAIOC_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x15ECF460)
#define IKJABDPAIOC_LDJKNAPMNME_OFFSET UNITYSDK_OFFSET(0x15ED09C0)
#define IKJABDPAIOC_OKJCHFGIKBH_1_OFFSET UNITYSDK_OFFSET(0x15ECF040)
#define IKJABDPAIOC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x15ECEEF0)
#define IKJABDPAIOC_PENLINAENMH_1_OFFSET UNITYSDK_OFFSET(0x15ECF540)
#define IKJABDPAIOC_PENLINAENMH_OFFSET UNITYSDK_OFFSET(0x15ECF240)
#define IKJABDPAIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x15ECDFF0)

inline static constexpr unsigned int IKJABDPAIOC_TypeDefinitionIndex = 69327;

class IKJABDPAIOC : public ::System::Object
{
public:
	static ::System::UInt64* StaticGet_BIJIPJPJJPJ()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(IKJABDPAIOC_TypeDefinitionIndex)->GetStaticField(0xCA20);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ScreenEffectType, ::System::Collections::Generic::List_1<::HJOKDGFPEJA>*>* DPFNIJJDAKA; // 0x10
	::UnityEngine::Rendering::Volume* DHCKJJIBFDE; // 0x18
	::MoleMole::Config::ConfigHollowChessboard* CEJENBBHBBG; // 0x20
	::System::String* LAIHNGJOJBF; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Config::ScreenEffectType>* DJBFNKBENOE; // 0x30
	::MoleMole::Config::ConfigChessboardFilter* KGOBFMAHPDO; // 0x38
	::UnityEngine::Rendering::Volume* PHLFMCCNEGD; // 0x40

	::System::Void _ctor(::UnityEngine::Rendering::Volume* PHLFMCCNEGD, ::UnityEngine::Rendering::Volume* DHCKJJIBFDE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + IKJABDPAIOC__CTOR_OFFSET))(this, PHLFMCCNEGD, DHCKJJIBFDE);
	}

	::System::Void AIDOCMKMEFA(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF, ::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_AIDOCMKMEFA_OFFSET))(this, OBNIAHNMHPF, MCOHLHMKLIP);
	}

	::System::Void OKJCHFGIKBH(::JKGAACKPMNB* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::JKGAACKPMNB*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_OKJCHFGIKBH_OFFSET))(this, PHHDHIBOCKA);
	}

	::HJOKDGFPEJA PENLINAENMH(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF, ::System::String* MCOHLHMKLIP, ::System::Single MDPPNMIPDMP, ::System::Action* EJGDHCIBCJH)
	{
		return ((::HJOKDGFPEJA(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_PENLINAENMH_OFFSET))(this, OBNIAHNMHPF, MCOHLHMKLIP, MDPPNMIPDMP, EJGDHCIBCJH);
	}

	::Foundation::Coroutine::CoroutineHandle PENLINAENMH_1(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* LHLPLLCBMBM, ::System::Single MDPPNMIPDMP, ::System::Action* EJGDHCIBCJH)
	{
		return ((::Foundation::Coroutine::CoroutineHandle(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_PENLINAENMH_1_OFFSET))(this, LHLPLLCBMBM, MDPPNMIPDMP, EJGDHCIBCJH);
	}

	::HJOKDGFPEJA CLPOFCOGBCN(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF, ::System::String* MCOHLHMKLIP, ::DJMLAKMIEKN GKNBCPNBFLH, ::KHFJMGEFPHM* JKBLDFBGBPK)
	{
		return ((::HJOKDGFPEJA(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::DJMLAKMIEKN, ::KHFJMGEFPHM*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_CLPOFCOGBCN_OFFSET))(this, OBNIAHNMHPF, MCOHLHMKLIP, GKNBCPNBFLH, JKBLDFBGBPK);
	}

	::System::Boolean HFIBJGNLAFN(::HJOKDGFPEJA PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + IKJABDPAIOC_HFIBJGNLAFN_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void GKNDNBNFNIB(::HJOKDGFPEJA PHHDHIBOCKA, ::System::Boolean BJEJKAAPCOJ)
	{
		return ((::System::Void(*)(::PVOID, ::HJOKDGFPEJA, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJABDPAIOC_GKNDNBNFNIB_OFFSET))(this, PHHDHIBOCKA, BJEJKAAPCOJ);
	}

	::System::Void AIDOCMKMEFA_1(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + IKJABDPAIOC_AIDOCMKMEFA_1_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void OKJCHFGIKBH_1(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType))((::PBYTE)hIl2Cpp + IKJABDPAIOC_OKJCHFGIKBH_1_OFFSET))(this, OBNIAHNMHPF);
	}

	::JKGAACKPMNB* JPDAKPBKLJJ(::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>* DLOLAEADIPJ, ::DJMLAKMIEKN GKNBCPNBFLH, ::KHFJMGEFPHM* JKBLDFBGBPK)
	{
		return ((::JKGAACKPMNB*(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::MoleMole::Config::ScreenEffectType, ::System::String*>*, ::DJMLAKMIEKN, ::KHFJMGEFPHM*))((::PBYTE)hIl2Cpp + IKJABDPAIOC_JPDAKPBKLJJ_OFFSET))(this, DLOLAEADIPJ, GKNBCPNBFLH, JKBLDFBGBPK);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJABDPAIOC_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void IHFGAAEBMFL(::DJMLAKMIEKN GKNBCPNBFLH)
	{
		return ((::System::Void(*)(::PVOID, ::DJMLAKMIEKN))((::PBYTE)hIl2Cpp + IKJABDPAIOC_IHFGAAEBMFL_OFFSET))(this, GKNBCPNBFLH);
	}

	::System::Void GKNDNBNFNIB_1(::JKGAACKPMNB* KEOIBHMAGAP, ::System::Boolean BJEJKAAPCOJ)
	{
		return ((::System::Void(*)(::PVOID, ::JKGAACKPMNB*, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJABDPAIOC_GKNDNBNFNIB_1_OFFSET))(this, KEOIBHMAGAP, BJEJKAAPCOJ);
	}

	::HJOKDGFPEJA KOCHHHPBJHB(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF, ::System::String* MCOHLHMKLIP, ::DJMLAKMIEKN GKNBCPNBFLH)
	{
		return ((::HJOKDGFPEJA(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*, ::DJMLAKMIEKN))((::PBYTE)hIl2Cpp + IKJABDPAIOC_KOCHHHPBJHB_OFFSET))(this, OBNIAHNMHPF, MCOHLHMKLIP, GKNBCPNBFLH);
	}

	::System::Void BGKNEFFJOJB(::HJOKDGFPEJA PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::HJOKDGFPEJA))((::PBYTE)hIl2Cpp + IKJABDPAIOC_BGKNEFFJOJB_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void LDJKNAPMNME(::MoleMole::Config::ScreenEffectType OBNIAHNMHPF, ::DJMLAKMIEKN GKNBCPNBFLH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::DJMLAKMIEKN))((::PBYTE)hIl2Cpp + IKJABDPAIOC_LDJKNAPMNME_OFFSET))(this, OBNIAHNMHPF, GKNBCPNBFLH);
	}

	::System::Void IHFGAAEBMFL_1(::System::String* EJGKCFKNONL, ::DJMLAKMIEKN GKNBCPNBFLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DJMLAKMIEKN))((::PBYTE)hIl2Cpp + IKJABDPAIOC_IHFGAAEBMFL_1_OFFSET))(this, EJGKCFKNONL, GKNBCPNBFLH);
	}

	::System::Void CKOCPKHHLOC(::System::String* MCOHLHMKLIP, ::DJMLAKMIEKN GKNBCPNBFLH, ::System::Boolean ENFNIFJANOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::DJMLAKMIEKN, ::System::Boolean))((::PBYTE)hIl2Cpp + IKJABDPAIOC_CKOCPKHHLOC_OFFSET))(this, MCOHLHMKLIP, GKNBCPNBFLH, ENFNIFJANOH);
	}
};

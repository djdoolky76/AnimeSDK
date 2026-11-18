#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUILoopText;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITabBtn01RowWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;
template <typename T> class MEKABAIJMNM_1;

#define GCEOENHDDHN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10EE2DB0)
#define GCEOENHDDHN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10EE2C60)
#define GCEOENHDDHN_MMHAJIPBGKL_OFFSET UNITYSDK_OFFSET(0x10EE2A80)
#define GCEOENHDDHN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10EE26A0)
#define GCEOENHDDHN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE2DA0)

inline static constexpr unsigned int GCEOENHDDHN_TypeDefinitionIndex = 42331;

class GCEOENHDDHN : public ::GIBMJLOJLKD
{
public:
	::ADEJAGFCBHK* APGGNFAMJOM; // 0x18
	::UnityEngine::GameObject* COPKFNAFGME; // 0x20
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>* GDEPBJAEBPM; // 0x28
	::MonoUILoopText* ADPAFPKOAOJ; // 0x30
	::UnityEngine::RectTransform* AMLGJLFOLKE; // 0x38
	::MoleMole::MonoGamepadNavigatableList* JCODNCFHAGC; // 0x40
	::LGINJIKKBJA* OMFDKIIPGHM; // 0x48
	::LGINJIKKBJA* JGPBKAHIBLG; // 0x50
	::KNLFLMMHALL_1<::System::Object*>* KBHOLMPCBOM; // 0x58
	::UnityEngine::Transform* PKJHGEPBEME; // 0x60
	::KNLFLMMHALL_1<::System::Object*>* MBAEOOAFGMK; // 0x68
	::UnityEngine::GameObject* BOGHCBIHHBF; // 0x70
	::LGINJIKKBJA* MAHNABIKKDL; // 0x78
	::GCIMMDDIFBJ* GGJHKIKNPBH; // 0x80
	::ADEJAGFCBHK* COBFGOIFNEM; // 0x88
	::KNLFLMMHALL_1<::System::Object*>* FLCAJIBMMCC; // 0x90
	::UnityEngine::Transform* CPEMGAGGEHP; // 0x98
	::UnityEngine::GameObject* FDFDJMLMCAC; // 0xA0
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEOENHDDHN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCEOENHDDHN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>* MMHAJIPBGKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UITabBtn01RowWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCEOENHDDHN_MMHAJIPBGKL_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCEOENHDDHN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCEOENHDDHN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};

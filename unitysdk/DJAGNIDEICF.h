#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BFLPANDDGHG;
class MLFADFNMJFO;
class NKIKIALIBKM;
namespace MoleMole::Battle { class AnimatorButtonControl; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJAGNIDEICF_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1329F3F0)
#define DJAGNIDEICF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1329F020)
#define DJAGNIDEICF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1329F260)
#define DJAGNIDEICF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1329F580)
#define DJAGNIDEICF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1329E870)
#define DJAGNIDEICF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1329F070)
#define DJAGNIDEICF__CTOR_OFFSET UNITYSDK_OFFSET(0x1329F140)

inline static constexpr unsigned int DJAGNIDEICF_TypeDefinitionIndex = 73323;

class DJAGNIDEICF : public ::MJHDNMKGLBJ
{
public:
	static ::System::String** StaticGet_KMNMBEBALCD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DJAGNIDEICF_TypeDefinitionIndex)->GetStaticField(0x39D30);
	}
	static ::System::String** StaticGet_CJBNFJABNFN()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DJAGNIDEICF_TypeDefinitionIndex)->GetStaticField(0x39D38);
	}
	static ::System::String** StaticGet_NHLOHLDNKDJ()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DJAGNIDEICF_TypeDefinitionIndex)->GetStaticField(0x39D40);
	}
	static ::System::String** StaticGet_JGJAFFDHDFE()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DJAGNIDEICF_TypeDefinitionIndex)->GetStaticField(0x39D48);
	}
	static ::System::String** StaticGet_ACAKHOACNAL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DJAGNIDEICF_TypeDefinitionIndex)->GetStaticField(0x39D50);
	}
	// static const ::System::Single EFHMCELDNHJ; // 0x0
	// static const ::System::Int32 IPAPPCOIEIF = 0x69; // 0x0
	::MLFADFNMJFO* LCIJBPPKAIF; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::NKIKIALIBKM*>* OHPMMKEMGBK; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* FJLIIKECPOK; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* AKPEEDGNHHJ; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*>* BPDHCIKLKLG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* GFBKJDOOGFL; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PJFIAKNJCJN; // 0x78
	::BFLPANDDGHG* ALLCJOCNFLI; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DPKMHFHKJLH; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NKIKIALIBKM*>* NHBKIODACGO; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::AnimatorButtonControl*>* PNAPFFAJBAG; // 0x98
	::System::Boolean JDIGCMCNPBI; // 0xA0
	::System::Boolean LHGONKKPMKD; // 0xA1
	::System::Boolean MHMCDLHJHEA; // 0xA2

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJAGNIDEICF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GETCLASSID_OFFSET))(this);
	}

	static ::DJAGNIDEICF* JFDOOELFAOA()
	{
		return ((::DJAGNIDEICF*(*)())((::PBYTE)hIl2Cpp + DJAGNIDEICF_JFDOOELFAOA_OFFSET))();
	}

	::System::Void GALGFCPKMGC(::BFLPANDDGHG* ALLCJOCNFLI)
	{
		return ((::System::Void(*)(::PVOID, ::BFLPANDDGHG*))((::PBYTE)hIl2Cpp + DJAGNIDEICF_GALGFCPKMGC_OFFSET))(this, ALLCJOCNFLI);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJAGNIDEICF_MEFBHFEOKGH_OFFSET))(this);
	}
};

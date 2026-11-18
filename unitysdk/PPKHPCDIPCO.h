#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDBNJOHGEDN.h"
#include "unitysdk/EOKKOEMOPFI.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/LayerMask.h"

class CICODOMMCNK;
namespace MoleMole::Config { class HackChargeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPKHPCDIPCO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x119AB830)
#define PPKHPCDIPCO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x119ABC80)
#define PPKHPCDIPCO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x119ABE00)
#define PPKHPCDIPCO_OGODENHLJLH_OFFSET UNITYSDK_OFFSET(0x119ABA20)
#define PPKHPCDIPCO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x119AB4B0)
#define PPKHPCDIPCO__CCTOR_OFFSET UNITYSDK_OFFSET(0x119AB880)
#define PPKHPCDIPCO__CTOR_OFFSET UNITYSDK_OFFSET(0x119AB910)

inline static constexpr unsigned int PPKHPCDIPCO_TypeDefinitionIndex = 67294;

class PPKHPCDIPCO : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_FJEELBACMKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPKHPCDIPCO_TypeDefinitionIndex)->GetStaticField(0xE0A0);
	}
	static ::System::Single* StaticGet_NCODJJPFEKN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PPKHPCDIPCO_TypeDefinitionIndex)->GetStaticField(0xE0A4);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0x96; // 0x0
	::System::String* MOHOJLHCGCN; // 0x48
	::System::String* KGNCGPPHLEN; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::Single, ::System::Boolean>>* EDNNLCCGIHL; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* NGOMMNJGNPH; // 0x60
	::System::String* IKNKDMNLNNK; // 0x68
	::CICODOMMCNK* NABEBACLKMN; // 0x70
	::System::Collections::Generic::List_1<::BDBNJOHGEDN>* DNOOOIIBJCN; // 0x78
	::System::String* EHBDEODCIID; // 0x80
	::System::String* BOIDBLHFPBN; // 0x88
	::System::String* CFNPLAGBCBB; // 0x90
	::System::String* DPBFNNGAFCL; // 0x98
	::BDBNJOHGEDN BMJJKFFCEGP; // 0xA0
	::System::String* LNKFEPDIHEI; // 0xB8
	::System::String* ENLBHDJHAMK; // 0xC0
	::System::Single OODHMEOIICJ; // 0xC8
	::System::Single IIGBMPAFHLG; // 0xCC
	::System::Boolean ABOEMMADFKB; // 0xD0
	::System::Boolean JIGGALOHAEN; // 0xD1
	::System::Byte _padding0[0x2];
	::UnityEngine::LayerMask JDNMBHHKGHH; // 0xD4
	::System::Single OLPBNEMLIMH; // 0xD8
	::System::Single KLCNOOFOLBD; // 0xDC
	::EOKKOEMOPFI AILKEJOLHHG; // 0xE0
	::System::Single DEBABLEBNLB; // 0xE4
	::System::Single OMLPIMJHOAB; // 0xE8
	::System::Single BBOOGFJFFII; // 0xEC
	::EOKKOEMOPFI HMDHOHGJHMM; // 0xF0
	::System::Single EDADKKFLGNP; // 0xF4

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPKHPCDIPCO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKHPCDIPCO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKHPCDIPCO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKHPCDIPCO_GETCLASSID_OFFSET))(this);
	}

	::System::Void OGODENHLJLH(::MoleMole::Config::HackChargeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HackChargeConfig*))((::PBYTE)hIl2Cpp + PPKHPCDIPCO_OGODENHLJLH_OFFSET))(this, DFMKILICPFB);
	}

	static ::PPKHPCDIPCO* JFDOOELFAOA()
	{
		return ((::PPKHPCDIPCO*(*)())((::PBYTE)hIl2Cpp + PPKHPCDIPCO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKHPCDIPCO_MEFBHFEOKGH_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOLIADLCIDK.h"
#include "unitysdk/OLDMEDJAGHJ_LNKDJGAEGIH.h"
#include "unitysdk/ObservableCollections/NotifyCollectionChangedEventArgs_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EPLMHMEEENH;
class LKHGOKKOCHC;
class LKMLFIAKFOO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;
template <typename T> class NMANHEHIJAL_1;

#define OLDMEDJAGHJ_DFPHILJHFOE_OFFSET UNITYSDK_OFFSET(0x12946EE0)
#define OLDMEDJAGHJ_FJJKIJGIOCJ_OFFSET UNITYSDK_OFFSET(0x12947000)
#define OLDMEDJAGHJ_FOEJBIHFDMG_OFFSET UNITYSDK_OFFSET(0x12946110)
#define OLDMEDJAGHJ_KEDGMMFIOBJ_OFFSET UNITYSDK_OFFSET(0x12946F70)
#define OLDMEDJAGHJ_KLOPBEHGPHH_OFFSET UNITYSDK_OFFSET(0x12945A20)
#define OLDMEDJAGHJ_LONDFNHAAJE_OFFSET UNITYSDK_OFFSET(0x12945E80)
#define OLDMEDJAGHJ_OMMICIJCCKB_OFFSET UNITYSDK_OFFSET(0x129459C0)
#define OLDMEDJAGHJ_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x129463F0)
#define OLDMEDJAGHJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x129469F0)
#define OLDMEDJAGHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12945840)

inline static constexpr unsigned int OLDMEDJAGHJ_TypeDefinitionIndex = 46142;

class OLDMEDJAGHJ : public ::HOLIADLCIDK
{
public:
	static ::Il2CppArray<::System::Object*>** StaticGet_LMHIAHILHPI()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OLDMEDJAGHJ_TypeDefinitionIndex)->GetStaticField(0x4C910);
	}
	::LKMLFIAKFOO* DJGLPFMAEOM; // 0x18
	::System::Collections::Generic::HashSet_1<::LKHGOKKOCHC*>* JODJJKOFNHP; // 0x20
	::NMANHEHIJAL_1<::LKHGOKKOCHC*>* ANNECBNFCNF; // 0x28
	::CNKGGMABMGE_2<::System::Object*, ::LKHGOKKOCHC*>* GLIBNGILHMI; // 0x30
	::System::Single GEEMKIKDHLB; // 0x38
	::System::Single HPKOGAJGGLG; // 0x3C

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ__CTOR_OFFSET))(this, MGMDLMBEDJF, NCCDJLDKFGA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLDMEDJAGHJ__CCTOR_OFFSET))();
	}

	::System::Void OMMICIJCCKB(::EPLMHMEEENH* LDNCGMNHANO)
	{
		return ((::System::Void(*)(::PVOID, ::EPLMHMEEENH*))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_OMMICIJCCKB_OFFSET))(this, LDNCGMNHANO);
	}

	::System::Void KLOPBEHGPHH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_KLOPBEHGPHH_OFFSET))(this);
	}

	::System::Void FOEJBIHFDMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_FOEJBIHFDMG_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void DFPHILJHFOE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_DFPHILJHFOE_OFFSET))(this);
	}

	::System::Void KEDGMMFIOBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_KEDGMMFIOBJ_OFFSET))(this);
	}

	::OLDMEDJAGHJ_LNKDJGAEGIH LONDFNHAAJE(::UnityEngine::Vector3 BAECLPHLLHO)
	{
		return ((::OLDMEDJAGHJ_LNKDJGAEGIH(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_LONDFNHAAJE_OFFSET))(this, BAECLPHLLHO);
	}

	::System::Void FJJKIJGIOCJ(::ObservableCollections::NotifyCollectionChangedEventArgs_1<::LKHGOKKOCHC*>& NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::ObservableCollections::NotifyCollectionChangedEventArgs_1<::LKHGOKKOCHC*>&))((::PBYTE)hIl2Cpp + OLDMEDJAGHJ_FJJKIJGIOCJ_OFFSET))(this, NFFNEFLKPDG);
	}
};

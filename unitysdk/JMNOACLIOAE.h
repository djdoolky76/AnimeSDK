#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMNOACLIOAE_PBIMIOAHBHO.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMNOACLIOAE_FFBJJPICPKG_OFFSET UNITYSDK_OFFSET(0x1A47E630)
#define JMNOACLIOAE_FOFNDNIHLNK_OFFSET UNITYSDK_OFFSET(0x1A47E3A0)
#define JMNOACLIOAE_IGCJGPGAACC_OFFSET UNITYSDK_OFFSET(0x1A47E4C0)
#define JMNOACLIOAE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A47E100)

inline static constexpr unsigned int JMNOACLIOAE_TypeDefinitionIndex = 67209;

class JMNOACLIOAE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>** StaticGet_NNLHHNFJHCE()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(JMNOACLIOAE_TypeDefinitionIndex)->GetStaticField(0x36E70);
	}
	static ::System::Single* StaticGet_NILANNIBOII()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(JMNOACLIOAE_TypeDefinitionIndex)->GetStaticField(0xC4F0);
	}
	// static const ::System::Int32 KGIPFHOFAMM = 0x1; // 0x0
	// static const ::System::Int32 EMGDHCHJOHK = 0x2; // 0x0
	// static const ::System::Int32 AHEOIDIALMF = 0x3; // 0x0
	// static const ::System::Int32 PNJJEHGOIBN = 0x4; // 0x0
	// static const ::System::Int32 FAICJNGHKNN = 0x5; // 0x0
	// static const ::System::Int32 MFEHIINFKGL = 0x6; // 0x0
	// static const ::System::Int32 BFFMKJCENKB = 0x7; // 0x0
	// static const ::System::Int32 ABMGCMGCAMG = 0x8; // 0x0
	// static const ::System::Int32 MGOCIOEIALC = 0x5; // 0x0
	// static const ::System::Int32 LGMGDBNIPFB = 0x4; // 0x0
	// static const ::System::Int32 CEHLOIMKDBD = 0x3; // 0x0
	// static const ::System::Int32 IJJDMHDHJJH = 0x2; // 0x0
	// static const ::System::Int32 LFJGAHAANLC = 0x1; // 0x0
	// static const ::System::String* EFPFHPACEJE; // 0x0
	// static const ::System::String* EPHFLHADDOH; // 0x0
	// static const ::System::Single MBECJANDHBP; // 0x0
	// static const ::System::Int32 KEGNGJKEMFL = 0x14; // 0x0
	// static const ::System::Single OELNMHEEGOD; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMNOACLIOAE__CCTOR_OFFSET))();
	}

	static ::System::String* FOFNDNIHLNK(::JMNOACLIOAE_PBIMIOAHBHO NFFNEFLKPDG)
	{
		return ((::System::String*(*)(::JMNOACLIOAE_PBIMIOAHBHO))((::PBYTE)hIl2Cpp + JMNOACLIOAE_FOFNDNIHLNK_OFFSET))(NFFNEFLKPDG);
	}

	static ::System::Boolean IGCJGPGAACC(::JMNOACLIOAE_PBIMIOAHBHO KFAJBJFKHJL, ::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::JMNOACLIOAE_PBIMIOAHBHO, ::System::String*))((::PBYTE)hIl2Cpp + JMNOACLIOAE_IGCJGPGAACC_OFFSET))(KFAJBJFKHJL, AELLPLBJELA);
	}

	static ::System::Void FFBJJPICPKG()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMNOACLIOAE_FFBJJPICPKG_OFFSET))();
	}
};

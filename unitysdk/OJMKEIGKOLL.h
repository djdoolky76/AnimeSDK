#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"
#include "unitysdk/LIFIHLLHLIO.h"
#include "unitysdk/OJMKEIGKOLL_IHJJBLILCEO.h"
#include "unitysdk/OJMKEIGKOLL_PCGILECGKGL.h"
#include "unitysdk/Share/EItemType.h"

class BAGPIKLBMMJ;
class DLDGOPHECJB;
class ECBJCCEEMIA;
class OGIDLFILAHM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJMKEIGKOLL_CGIDCNGPEBN_OFFSET UNITYSDK_OFFSET(0x18449770)
#define OJMKEIGKOLL_CKHKHPAGLKB_1_OFFSET UNITYSDK_OFFSET(0x1844A2E0)
#define OJMKEIGKOLL_CKHKHPAGLKB_OFFSET UNITYSDK_OFFSET(0x18449FF0)
#define OJMKEIGKOLL_CLONKLBNPGC_OFFSET UNITYSDK_OFFSET(0x18449660)
#define OJMKEIGKOLL_ECLDJJGHCMO_OFFSET UNITYSDK_OFFSET(0x18448F80)
#define OJMKEIGKOLL_EDJFPLPODDL_OFFSET UNITYSDK_OFFSET(0x18448DA0)
#define OJMKEIGKOLL_EDPIKACGDLH_OFFSET UNITYSDK_OFFSET(0x184489B0)
#define OJMKEIGKOLL_GEPILIJAPDO_OFFSET UNITYSDK_OFFSET(0x18448B70)
#define OJMKEIGKOLL_GHOLPHCGCJO_OFFSET UNITYSDK_OFFSET(0x18448740)
#define OJMKEIGKOLL_JHAGDAKJMFC_OFFSET UNITYSDK_OFFSET(0x1844A150)
#define OJMKEIGKOLL_LMCHIOAJNMG_OFFSET UNITYSDK_OFFSET(0x184497E0)
#define OJMKEIGKOLL_MMDGFOCGFGL_OFFSET UNITYSDK_OFFSET(0x184494A0)
#define OJMKEIGKOLL_NHPFKGBBJLH_OFFSET UNITYSDK_OFFSET(0x18448EE0)
#define OJMKEIGKOLL_PINKLEEBKEO_OFFSET UNITYSDK_OFFSET(0x184488C0)
#define OJMKEIGKOLL__CCTOR_OFFSET UNITYSDK_OFFSET(0x184485E0)
#define OJMKEIGKOLL__CTOR_OFFSET UNITYSDK_OFFSET(0x184485D0)

inline static constexpr unsigned int OJMKEIGKOLL_TypeDefinitionIndex = 52450;

class OJMKEIGKOLL : public ::JGELKBLKFHE
{
public:
	static ::System::Collections::Generic::HashSet_1<::LIFIHLLHLIO>** StaticGet_NOHHDCGNDBM()
	{
		return (::System::Collections::Generic::HashSet_1<::LIFIHLLHLIO>**)Il2CppClass::FromTypeDefinitionIndex(OJMKEIGKOLL_TypeDefinitionIndex)->GetStaticField(0x376D0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* JKHILKGNPPD; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ECBJCCEEMIA*>* AIKGKJGINJA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMKEIGKOLL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJMKEIGKOLL__CCTOR_OFFSET))();
	}

	::System::Boolean GHOLPHCGCJO(::System::UInt32 ACHBBPJIBIE, ::System::Int32& AINIHIKNGNL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_GHOLPHCGCJO_OFFSET))(this, ACHBBPJIBIE, AINIHIKNGNL);
	}

	::System::Boolean EDPIKACGDLH(::System::UInt32 ACHBBPJIBIE, ::System::Collections::Generic::List_1<::BAGPIKLBMMJ*>*& HECNOJIMNIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::BAGPIKLBMMJ*>*&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_EDPIKACGDLH_OFFSET))(this, ACHBBPJIBIE, HECNOJIMNIC);
	}

	::System::Int32 GEPILIJAPDO(::System::Int32 KJGIENDCDKF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_GEPILIJAPDO_OFFSET))(this, KJGIENDCDKF);
	}

	::System::Boolean PINKLEEBKEO(::System::UInt32 ACHBBPJIBIE, ::ECBJCCEEMIA*& DCABKIOCCOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::ECBJCCEEMIA*&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_PINKLEEBKEO_OFFSET))(this, ACHBBPJIBIE, DCABKIOCCOI);
	}

	::Share::EItemType EDJFPLPODDL(::System::Int32 KJGIENDCDKF)
	{
		return ((::Share::EItemType(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_EDJFPLPODDL_OFFSET))(this, KJGIENDCDKF);
	}

	::System::Boolean NHPFKGBBJLH(::System::UInt32 ACHBBPJIBIE, ::System::UInt32& MDPGLDEFMJF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_NHPFKGBBJLH_OFFSET))(this, ACHBBPJIBIE, MDPGLDEFMJF);
	}

	::System::Void ECLDJJGHCMO(::DLDGOPHECJB* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_ECLDJJGHCMO_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean MMDGFOCGFGL(::System::UInt32 ACHBBPJIBIE, ::System::Collections::Generic::List_1<::OGIDLFILAHM*>*& GEBKJAIAFAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::OGIDLFILAHM*>*&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_MMDGFOCGFGL_OFFSET))(this, ACHBBPJIBIE, GEBKJAIAFAF);
	}

	::System::Void CLONKLBNPGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_CLONKLBNPGC_OFFSET))(this);
	}

	::System::Boolean CGIDCNGPEBN(::OJMKEIGKOLL_PCGILECGKGL MFLFLNPCEKI, ::BAGPIKLBMMJ* HECNOJIMNIC, ::OGIDLFILAHM* GEBKJAIAFAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OJMKEIGKOLL_PCGILECGKGL, ::BAGPIKLBMMJ*, ::OGIDLFILAHM*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_CGIDCNGPEBN_OFFSET))(this, MFLFLNPCEKI, HECNOJIMNIC, GEBKJAIAFAF);
	}

	::System::Boolean CKHKHPAGLKB(::BAGPIKLBMMJ* HECNOJIMNIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::BAGPIKLBMMJ*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_CKHKHPAGLKB_OFFSET))(this, HECNOJIMNIC);
	}

	::System::Boolean JHAGDAKJMFC(::System::UInt32 ACHBBPJIBIE, ::System::Int32& FDONNCKPIFA, ::System::Int32& PIPDOMCJCCG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_JHAGDAKJMFC_OFFSET))(this, ACHBBPJIBIE, FDONNCKPIFA, PIPDOMCJCCG);
	}

	::OJMKEIGKOLL_IHJJBLILCEO LMCHIOAJNMG(::OJMKEIGKOLL_PCGILECGKGL MFLFLNPCEKI, ::BAGPIKLBMMJ* HECNOJIMNIC, ::OGIDLFILAHM* GEBKJAIAFAF)
	{
		return ((::OJMKEIGKOLL_IHJJBLILCEO(*)(::PVOID, ::OJMKEIGKOLL_PCGILECGKGL, ::BAGPIKLBMMJ*, ::OGIDLFILAHM*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_LMCHIOAJNMG_OFFSET))(this, MFLFLNPCEKI, HECNOJIMNIC, GEBKJAIAFAF);
	}

	::System::Boolean CKHKHPAGLKB_1(::OGIDLFILAHM* GEBKJAIAFAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::OGIDLFILAHM*))((::PBYTE)hIl2Cpp + OJMKEIGKOLL_CKHKHPAGLKB_1_OFFSET))(this, GEBKJAIAFAF);
	}
};

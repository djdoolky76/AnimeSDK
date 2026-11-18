#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/System/Object.h"

class PBFDEOJFGJK;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFDJDHIBFCF_BBANCFJGHCO_OFFSET UNITYSDK_OFFSET(0x15537110)
#define PFDJDHIBFCF_DAMPDPLOMAK_OFFSET UNITYSDK_OFFSET(0x15536750)
#define PFDJDHIBFCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155362F0)
#define PFDJDHIBFCF_GELHCGJLEJH_OFFSET UNITYSDK_OFFSET(0x15536C10)
#define PFDJDHIBFCF_HKFODDPNIBC_OFFSET UNITYSDK_OFFSET(0x15536970)
#define PFDJDHIBFCF_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x15536910)
#define PFDJDHIBFCF_KCKBIOBGKBH_OFFSET UNITYSDK_OFFSET(0x15536B90)
#define PFDJDHIBFCF_KHFDLLNNBLP_OFFSET UNITYSDK_OFFSET(0x15536CA0)
#define PFDJDHIBFCF_MHNMPBGMANL_OFFSET UNITYSDK_OFFSET(0x15536EC0)
#define PFDJDHIBFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15536100)

inline static constexpr unsigned int PFDJDHIBFCF_TypeDefinitionIndex = 44310;

class PFDJDHIBFCF : public ::System::Object
{
public:
	static ::PFDJDHIBFCF** StaticGet_PMKINFHDLFD()
	{
		return (::PFDJDHIBFCF**)Il2CppClass::FromTypeDefinitionIndex(PFDJDHIBFCF_TypeDefinitionIndex)->GetStaticField(0x51AF0);
	}
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeleportSelectionType, ::System::Collections::Generic::List_1<::PBFDEOJFGJK*>*>* DOOILNIKMCF; // 0x10
	::System::Func_1<::PBFDEOJFGJK*>* JHIFELEFBHH; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::TeleportSelectionType, ::System::Func_1<::PBFDEOJFGJK*>*>* HBPGPJOKBFD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::Config::TeleportSelectionType>* IEBIEKGBKCE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PBFDEOJFGJK*>* GGHPNCCKJEO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDJDHIBFCF__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::PBFDEOJFGJK*>* DAMPDPLOMAK(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::List_1<::PBFDEOJFGJK*>*(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_DAMPDPLOMAK_OFFSET))(this, OBNIAHNMHPF);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFDJDHIBFCF_JPOLBPCHLHK_OFFSET))();
	}

	::System::Void HKFODDPNIBC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_HKFODDPNIBC_OFFSET))(this, KECKGDFIALJ);
	}

	static ::PFDJDHIBFCF* KCKBIOBGKBH()
	{
		return ((::PFDJDHIBFCF*(*)())((::PBYTE)hIl2Cpp + PFDJDHIBFCF_KCKBIOBGKBH_OFFSET))();
	}

	::System::Void GELHCGJLEJH(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_GELHCGJLEJH_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void KHFDLLNNBLP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_KHFDLLNNBLP_OFFSET))(this, KECKGDFIALJ);
	}

	::PBFDEOJFGJK* MHNMPBGMANL(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF)
	{
		return ((::PBFDEOJFGJK*(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_MHNMPBGMANL_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void BBANCFJGHCO(::MoleMole::Config::TeleportSelectionType OBNIAHNMHPF, ::System::Func_1<::PBFDEOJFGJK*>* ELEIACDBIPL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TeleportSelectionType, ::System::Func_1<::PBFDEOJFGJK*>*))((::PBYTE)hIl2Cpp + PFDJDHIBFCF_BBANCFJGHCO_OFFSET))(this, OBNIAHNMHPF, ELEIACDBIPL);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/PFBGGMIFJPJ.h"
#include "unitysdk/System/ValueTuple_2.h"

class BKDOJFMGONB;
class HINJLCCCHNM;
class NDGBCCIFAKE;
namespace MoleMole { class MonoSceneFindWayObject; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBBKENNIIPI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x126C89A0)
#define LBBKENNIIPI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x126C8CB0)
#define LBBKENNIIPI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x126C8C20)
#define LBBKENNIIPI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x126C8600)
#define LBBKENNIIPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x126C89F0)
#define LBBKENNIIPI__CTOR_OFFSET UNITYSDK_OFFSET(0x126C8A70)

inline static constexpr unsigned int LBBKENNIIPI_TypeDefinitionIndex = 57570;

class LBBKENNIIPI : public ::MJHDNMKGLBJ
{
public:
	static ::System::Int32* StaticGet_NIEEEPABIPB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LBBKENNIIPI_TypeDefinitionIndex)->GetStaticField(0xABF0);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0xD6; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* IODNKFIFJEF; // 0x48
	::NDGBCCIFAKE* KKANDBEDALC; // 0x50
	::System::Collections::Generic::List_1<::BKDOJFMGONB*>* NKMNLFEEPPD; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::MonoSceneFindWayObject*>* LAADEKGIHID; // 0x60
	::System::Collections::Generic::List_1<::PFBGGMIFJPJ>* OLBDFABKGNG; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HINJLCCCHNM*>* KGBFIPGNMMJ; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBBKENNIIPI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBKENNIIPI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBKENNIIPI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBKENNIIPI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBKENNIIPI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::LBBKENNIIPI* JFDOOELFAOA()
	{
		return ((::LBBKENNIIPI*(*)())((::PBYTE)hIl2Cpp + LBBKENNIIPI_JFDOOELFAOA_OFFSET))();
	}
};

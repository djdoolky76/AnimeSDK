#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class KBALNFBNAFI;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILFDMIGOOIP_EKKGDDLNMMI_OFFSET UNITYSDK_OFFSET(0x13819820)
#define ILFDMIGOOIP_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x138194D0)
#define ILFDMIGOOIP_HHAFMIKEBHA_OFFSET UNITYSDK_OFFSET(0x13819810)
#define ILFDMIGOOIP_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13819790)
#define ILFDMIGOOIP_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13819700)
#define ILFDMIGOOIP_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x138191E0)
#define ILFDMIGOOIP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13819520)
#define ILFDMIGOOIP__CTOR_OFFSET UNITYSDK_OFFSET(0x138195A0)

inline static constexpr unsigned int ILFDMIGOOIP_TypeDefinitionIndex = 61590;

class ILFDMIGOOIP : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x27; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* GFACOOECDLB; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HNDIKKIBKAD; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* HHLNKAMPILK; // 0x58
	::KBALNFBNAFI* KDJLBNPHHIO; // 0x60
	::KBALNFBNAFI* KMEAJCCENOO; // 0x68
	::System::Int32 LHDICDAHJLM; // 0x70
	::System::Boolean PEAOBHJKDOF; // 0x74
	::System::Boolean LEKNLKPPNGA; // 0x75
	::System::Boolean LPJGDALNDAG; // 0x76

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILFDMIGOOIP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFDMIGOOIP__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFDMIGOOIP_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFDMIGOOIP_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFDMIGOOIP_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::ILFDMIGOOIP* JFDOOELFAOA()
	{
		return ((::ILFDMIGOOIP*(*)())((::PBYTE)hIl2Cpp + ILFDMIGOOIP_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean HHAFMIKEBHA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILFDMIGOOIP_HHAFMIKEBHA_OFFSET))(this);
	}

	::System::Void EKKGDDLNMMI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILFDMIGOOIP_EKKGDDLNMMI_OFFSET))(this, EGEGIMGMJHN);
	}
};

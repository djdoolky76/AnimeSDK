#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPHGNMNLLHF;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JEMDLBKHBBO_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x14FAA570)
#define JEMDLBKHBBO_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14FAA470)
#define JEMDLBKHBBO_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x14FAA620)
#define JEMDLBKHBBO_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x14FAA6A0)
#define JEMDLBKHBBO_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14FAA410)
#define JEMDLBKHBBO__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FAA4C0)
#define JEMDLBKHBBO__CTOR_OFFSET UNITYSDK_OFFSET(0x14FAA560)

inline static constexpr unsigned int JEMDLBKHBBO_TypeDefinitionIndex = 83776;

class JEMDLBKHBBO : public ::MJHDNMKGLBJ
{
public:
	static ::System::String** StaticGet_FGMDEKHLMLB()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(JEMDLBKHBBO_TypeDefinitionIndex)->GetStaticField(0x3B560);
	}
	// static const ::System::Int32 IPAPPCOIEIF = 0xD9; // 0x0
	::System::Action* EFKPAODLENA; // 0x48
	::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* FHBAHEJNAJN; // 0x50
	::System::Action* BNPMCHMJHDP; // 0x58
	::UnityEngine::Vector3 FBJDDMPHGMK; // 0x60
	::System::Boolean IFOLBBCNGEP; // 0x6C
	::System::Boolean BAEFMFMKNOP; // 0x6D

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEMDLBKHBBO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMDLBKHBBO__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMDLBKHBBO_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMDLBKHBBO_GETCLASSID_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMDLBKHBBO_GALGFCPKMGC_OFFSET))(this);
	}

	static ::JEMDLBKHBBO* JFDOOELFAOA()
	{
		return ((::JEMDLBKHBBO*(*)())((::PBYTE)hIl2Cpp + JEMDLBKHBBO_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMDLBKHBBO_MEFBHFEOKGH_OFFSET))(this);
	}
};

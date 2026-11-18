#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MGFECCAJFMI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define OLHCPDPPIIH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13A6D210)
#define OLHCPDPPIIH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13A6D530)
#define OLHCPDPPIIH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13A6D4A0)
#define OLHCPDPPIIH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13A6D0A0)
#define OLHCPDPPIIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A6D260)
#define OLHCPDPPIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A6D2E0)

inline static constexpr unsigned int OLHCPDPPIIH_TypeDefinitionIndex = 49064;

class OLHCPDPPIIH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x19; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* PGBGIFKOBJO; // 0x48
	::System::Collections::Generic::HashSet_1<::System::String*>* NJKMDFIPFCE; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MGFECCAJFMI*>* EPBACMMFCAO; // 0x58
	::System::String* NMOAHGCFGML; // 0x60
	::System::Single ELPHACIKEIP; // 0x68
	::System::Boolean EEHCABHLPEC; // 0x6C
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector2 FKEENAKHKFL; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLHCPDPPIIH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCPDPPIIH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCPDPPIIH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCPDPPIIH_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHCPDPPIIH_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OLHCPDPPIIH* JFDOOELFAOA()
	{
		return ((::OLHCPDPPIIH*(*)())((::PBYTE)hIl2Cpp + OLHCPDPPIIH_JFDOOELFAOA_OFFSET))();
	}
};

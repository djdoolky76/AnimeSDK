#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class FALCFLKDHJB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFBADDHKFPL_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1C35A150)
#define JFBADDHKFPL_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1C35A3B0)
#define JFBADDHKFPL_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1C35A320)
#define JFBADDHKFPL_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1C35A220)
#define JFBADDHKFPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C35A1A0)
#define JFBADDHKFPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C35A2A0)

inline static constexpr unsigned int JFBADDHKFPL_TypeDefinitionIndex = 74494;

class JFBADDHKFPL : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x21C; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* DDOCIPFICII; // 0x50
	::FALCFLKDHJB* GKAIEEKLOHL; // 0x58

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFBADDHKFPL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBADDHKFPL__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBADDHKFPL_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBADDHKFPL_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFBADDHKFPL_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::JFBADDHKFPL* JFDOOELFAOA()
	{
		return ((::JFBADDHKFPL*(*)())((::PBYTE)hIl2Cpp + JFBADDHKFPL_JFDOOELFAOA_OFFSET))();
	}
};

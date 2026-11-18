#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class IAEJFPPBODG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BALFGKABMCH_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x134FACF0)
#define BALFGKABMCH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x134FAC10)
#define BALFGKABMCH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x134FADF0)
#define BALFGKABMCH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x134FAE70)
#define BALFGKABMCH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x134FABC0)
#define BALFGKABMCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x134FAC60)
#define BALFGKABMCH__CTOR_OFFSET UNITYSDK_OFFSET(0x134FACE0)

inline static constexpr unsigned int BALFGKABMCH_TypeDefinitionIndex = 77572;

class BALFGKABMCH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xD1; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* NOIOAPPJDKI; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IAEJFPPBODG*>* EFAMLPPDCMI; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BALFGKABMCH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFGKABMCH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFGKABMCH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFGKABMCH_GETCLASSID_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFGKABMCH_GALGFCPKMGC_OFFSET))(this);
	}

	static ::BALFGKABMCH* JFDOOELFAOA()
	{
		return ((::BALFGKABMCH*(*)())((::PBYTE)hIl2Cpp + BALFGKABMCH_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALFGKABMCH_MEFBHFEOKGH_OFFSET))(this);
	}
};

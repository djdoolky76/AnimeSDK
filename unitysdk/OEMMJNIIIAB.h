#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class EGEFOILLDKB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OEMMJNIIIAB_AIDLFCOGFOF_OFFSET UNITYSDK_OFFSET(0x114EBAA0)
#define OEMMJNIIIAB_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x114EBB50)
#define OEMMJNIIIAB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x114EB9C0)
#define OEMMJNIIIAB_GLMJDONADGN_OFFSET UNITYSDK_OFFSET(0x114EBAB0)
#define OEMMJNIIIAB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x114EBC10)
#define OEMMJNIIIAB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x114EBAC0)
#define OEMMJNIIIAB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x114EB950)
#define OEMMJNIIIAB__CCTOR_OFFSET UNITYSDK_OFFSET(0x114EBA10)
#define OEMMJNIIIAB__CTOR_OFFSET UNITYSDK_OFFSET(0x114EBA90)

inline static constexpr unsigned int OEMMJNIIIAB_TypeDefinitionIndex = 58053;

class OEMMJNIIIAB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x7D; // 0x0
	::System::Collections::Generic::List_1<::EGEFOILLDKB*>* MIECPDCNGGF; // 0x48
	::System::Single JABJDGKIFHD; // 0x50
	::System::Single BPBFNPKEJPD; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEMMJNIIIAB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean AIDLFCOGFOF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_AIDLFCOGFOF_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_MEFBHFEOKGH_OFFSET))(this);
	}

	::OEMMJNIIIAB* GALGFCPKMGC()
	{
		return ((::OEMMJNIIIAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_GALGFCPKMGC_OFFSET))(this);
	}

	static ::OEMMJNIIIAB* JFDOOELFAOA()
	{
		return ((::OEMMJNIIIAB*(*)())((::PBYTE)hIl2Cpp + OEMMJNIIIAB_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean GLMJDONADGN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEMMJNIIIAB_GLMJDONADGN_OFFSET))(this);
	}
};

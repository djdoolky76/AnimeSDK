#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BPHIKMAAKCA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEKFGKDAPJE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13A51F90)
#define OEKFGKDAPJE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13A52100)
#define OEKFGKDAPJE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13A52210)
#define OEKFGKDAPJE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13A51EF0)
#define OEKFGKDAPJE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A51FE0)
#define OEKFGKDAPJE__CTOR_OFFSET UNITYSDK_OFFSET(0x13A52060)

inline static constexpr unsigned int OEKFGKDAPJE_TypeDefinitionIndex = 81637;

class OEKFGKDAPJE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x50; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BPHIKMAAKCA*>* COLMFCPPKNH; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEKFGKDAPJE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKFGKDAPJE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKFGKDAPJE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKFGKDAPJE_GETCLASSID_OFFSET))(this);
	}

	static ::OEKFGKDAPJE* JFDOOELFAOA()
	{
		return ((::OEKFGKDAPJE*(*)())((::PBYTE)hIl2Cpp + OEKFGKDAPJE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEKFGKDAPJE_MEFBHFEOKGH_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFFMNKEJBMM;
class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2> class Action_2; }

#define LPJHHHCOLMO_IFGKFIEDMCO_IAEHMPMPMHH_OFFSET UNITYSDK_OFFSET(0x17CF84C0)
#define LPJHHHCOLMO_IFGKFIEDMCO_KOIAOKKDJJA_OFFSET UNITYSDK_OFFSET(0x17CF8530)
#define LPJHHHCOLMO_IFGKFIEDMCO__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF84B0)

inline static constexpr unsigned int LPJHHHCOLMO_IFGKFIEDMCO_TypeDefinitionIndex = 46651;

class LPJHHHCOLMO_IFGKFIEDMCO : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::IFFMNKEJBMM*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGKFIEDMCO__CTOR_OFFSET))(this);
	}

	::System::Void IAEHMPMPMHH(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGKFIEDMCO_IAEHMPMPMHH_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void KOIAOKKDJJA(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LPJHHHCOLMO_IFGKFIEDMCO_KOIAOKKDJJA_OFFSET))(this, DJCNCELJPOM);
	}
};

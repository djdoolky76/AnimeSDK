#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EPFBFPHILLP_KLHHNCBBLOH.h"
#include "unitysdk/System/Object.h"

class IKFKKMBEBBG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EPFBFPHILLP_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xBB2D9C0)
#define EPFBFPHILLP_CLGOBPEOECI_OFFSET UNITYSDK_OFFSET(0xBB2DCC0)
#define EPFBFPHILLP_DBCNKDJEHOF_OFFSET UNITYSDK_OFFSET(0xBB2DF30)
#define EPFBFPHILLP_FDNPJJPEMJP_OFFSET UNITYSDK_OFFSET(0xBB2DAA0)
#define EPFBFPHILLP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2D9B0)

inline static constexpr unsigned int EPFBFPHILLP_TypeDefinitionIndex = 89195;

class EPFBFPHILLP : public ::System::Object
{
public:
	::EPFBFPHILLP_KLHHNCBBLOH NCLJPNHOKJI; // 0x10
	::System::Collections::Generic::Dictionary_2<::IKFKKMBEBBG*, ::System::Object*>* LDIKAEENPON; // 0x20
	::EPFBFPHILLP_KLHHNCBBLOH HBHACDBKLAC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFBFPHILLP__CTOR_OFFSET))(this);
	}

	::System::Void FDNPJJPEMJP(::IKFKKMBEBBG* IJKIMCMPBCF, ::System::Single LBJJDJJNLGL, ::System::Single OMPBAICPKKF)
	{
		return ((::System::Void(*)(::PVOID, ::IKFKKMBEBBG*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EPFBFPHILLP_FDNPJJPEMJP_OFFSET))(this, IJKIMCMPBCF, LBJJDJJNLGL, OMPBAICPKKF);
	}

	::System::Void CLGOBPEOECI(::IKFKKMBEBBG* IJKIMCMPBCF)
	{
		return ((::System::Void(*)(::PVOID, ::IKFKKMBEBBG*))((::PBYTE)hIl2Cpp + EPFBFPHILLP_CLGOBPEOECI_OFFSET))(this, IJKIMCMPBCF);
	}

	::System::Void DBCNKDJEHOF(::EPFBFPHILLP_KLHHNCBBLOH& HEEOKDHPOFM, ::EPFBFPHILLP_KLHHNCBBLOH& PMBCDCCPBCA)
	{
		return ((::System::Void(*)(::PVOID, ::EPFBFPHILLP_KLHHNCBBLOH&, ::EPFBFPHILLP_KLHHNCBBLOH&))((::PBYTE)hIl2Cpp + EPFBFPHILLP_DBCNKDJEHOF_OFFSET))(this, HEEOKDHPOFM, PMBCDCCPBCA);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFBFPHILLP_BBOMJDBNHIC_OFFSET))(this);
	}
};

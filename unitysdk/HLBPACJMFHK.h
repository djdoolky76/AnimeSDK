#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMCLBONOOHK.h"

class KOHPAOOBMGD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HLBPACJMFHK_CJJAIPNHKIF_OFFSET UNITYSDK_OFFSET(0x17E50BF0)
#define HLBPACJMFHK_DHIIGMOGIAP_OFFSET UNITYSDK_OFFSET(0x17E50A50)
#define HLBPACJMFHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E50880)
#define HLBPACJMFHK_LECCDOOEPFA_OFFSET UNITYSDK_OFFSET(0x17E51470)
#define HLBPACJMFHK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x17E50800)
#define HLBPACJMFHK_ONSTART_OFFSET UNITYSDK_OFFSET(0x17E50840)
#define HLBPACJMFHK_PGBEJFABMEC_OFFSET UNITYSDK_OFFSET(0x17E50E30)
#define HLBPACJMFHK_UPDATE_OFFSET UNITYSDK_OFFSET(0x17E508C0)
#define HLBPACJMFHK__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E509B0)
#define HLBPACJMFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x17E50920)

inline static constexpr unsigned int HLBPACJMFHK_TypeDefinitionIndex = 64528;

class HLBPACJMFHK
{
public:
	static ::System::Collections::Generic::Dictionary_2<::BMCLBONOOHK, ::KOHPAOOBMGD*>** StaticGet_GFDFAMGOHIK()
	{
		return (::System::Collections::Generic::Dictionary_2<::BMCLBONOOHK, ::KOHPAOOBMGD*>**)Il2CppClass::FromTypeDefinitionIndex(HLBPACJMFHK_TypeDefinitionIndex)->GetStaticField(0x464A0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLBPACJMFHK__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK_ONCREATE_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK_ONSTART_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK_DISPOSE_OFFSET))(this);
	}

	::System::Void Update(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLBPACJMFHK_UPDATE_OFFSET))(this, PMNLNNGEIFM);
	}

	static ::System::Boolean DHIIGMOGIAP(::BMCLBONOOHK MKCOMJHINNJ, ::KOHPAOOBMGD* PKOPHJANABJ)
	{
		return ((::System::Boolean(*)(::BMCLBONOOHK, ::KOHPAOOBMGD*))((::PBYTE)hIl2Cpp + HLBPACJMFHK_DHIIGMOGIAP_OFFSET))(MKCOMJHINNJ, PKOPHJANABJ);
	}

	::System::Void CJJAIPNHKIF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK_CJJAIPNHKIF_OFFSET))(this);
	}

	::System::Boolean PGBEJFABMEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBPACJMFHK_PGBEJFABMEC_OFFSET))(this);
	}

	static ::KOHPAOOBMGD* LECCDOOEPFA(::BMCLBONOOHK MKCOMJHINNJ)
	{
		return ((::KOHPAOOBMGD*(*)(::BMCLBONOOHK))((::PBYTE)hIl2Cpp + HLBPACJMFHK_LECCDOOEPFA_OFFSET))(MKCOMJHINNJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CCLGOPKLFMD_EOFGGADEMKE_OFFSET UNITYSDK_OFFSET(0x359320)
#define CCLGOPKLFMD_KCIOLEKEENG_OFFSET UNITYSDK_OFFSET(0x359150)
#define CCLGOPKLFMD__CCTOR_OFFSET UNITYSDK_OFFSET(0x14785360)
#define CCLGOPKLFMD__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int CCLGOPKLFMD_TypeDefinitionIndex = 58827;

struct alignas(4) CCLGOPKLFMD
{
	static ::CCLGOPKLFMD* StaticGet_DDGNFJDLOKA()
	{
		return (::CCLGOPKLFMD*)Il2CppClass::FromTypeDefinitionIndex(CCLGOPKLFMD_TypeDefinitionIndex)->GetStaticField(0x108C0);
	}
	::System::UInt32 _ABGHBBMEIBJ_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt32 LAPNCNIBEFD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCLGOPKLFMD__CTOR_OFFSET))(this, LAPNCNIBEFD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCLGOPKLFMD__CCTOR_OFFSET))();
	}

	::System::Void KCIOLEKEENG(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CCLGOPKLFMD_KCIOLEKEENG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 EOFGGADEMKE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CCLGOPKLFMD_EOFGGADEMKE_OFFSET))(this);
	}
};

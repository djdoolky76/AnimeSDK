#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBEAFE7E4FC88596;
namespace System { class String; }

#define AC55422AD7AA5E83_B732889B62ADE6AD_OFFSET UNITYSDK_OFFSET(0x169C070)
#define AC55422AD7AA5E83_B814DB6794C6121D_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define AC55422AD7AA5E83_E3D5C117772A8041_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define AC55422AD7AA5E83__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AC55422AD7AA5E83_TypeDefinitionIndex = 7788;

class AC55422AD7AA5E83 : public ::System::Object
{
public:
	::System::Boolean B4C639C5FA574CA0; // 0x10
	::System::Boolean B40BD93F6E290FC6; // 0x11
	::System::Byte _padding0[0x6];
	::System::String* B6EB09EB11421483; // 0x18
	::System::Boolean BACBB27B01ACCFB1; // 0x20
	::System::Byte _padding1[0x7];
	::FBEAFE7E4FC88596* EAF9B0D04AC3D9FF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC55422AD7AA5E83__CTOR_OFFSET))(this);
	}

	::FBEAFE7E4FC88596* B732889B62ADE6AD()
	{
		return ((::FBEAFE7E4FC88596*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC55422AD7AA5E83_B732889B62ADE6AD_OFFSET))(this);
	}

	::System::Void B814DB6794C6121D(::FBEAFE7E4FC88596* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FBEAFE7E4FC88596*))((::PBYTE)hIl2Cpp + AC55422AD7AA5E83_B814DB6794C6121D_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void E3D5C117772A8041(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AC55422AD7AA5E83_E3D5C117772A8041_OFFSET))(this, E937D4885DAA1AE8);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AA1B64AA73EDA2E8_A0D64694E6EC627B_OFFSET UNITYSDK_OFFSET(0x389F420)
#define AA1B64AA73EDA2E8_E4F0A449E2A8D3F9_OFFSET UNITYSDK_OFFSET(0x389F740)
#define AA1B64AA73EDA2E8_E70B17C4B75D5215_OFFSET UNITYSDK_OFFSET(0x389F790)
#define AA1B64AA73EDA2E8_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x389F3A0)
#define AA1B64AA73EDA2E8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA1B64AA73EDA2E8_TypeDefinitionIndex = 20924;

class AA1B64AA73EDA2E8 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* BF7D63604F72090F; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1B64AA73EDA2E8__CTOR_OFFSET))(this);
	}

	::System::Void A0D64694E6EC627B(::Il2CppArray<::System::Byte>* A4397C8B968FE405)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AA1B64AA73EDA2E8_A0D64694E6EC627B_OFFSET))(this, A4397C8B968FE405);
	}

	::System::Byte E4F0A449E2A8D3F9()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1B64AA73EDA2E8_E4F0A449E2A8D3F9_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA1B64AA73EDA2E8_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Void E70B17C4B75D5215(::System::Byte E9B1EC1226C9BC85)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AA1B64AA73EDA2E8_E70B17C4B75D5215_OFFSET))(this, E9B1EC1226C9BC85);
	}
};

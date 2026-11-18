#pragma once
#include "unitysdk/unitysdk.h"

class JGELKBLKFHE;

#define DJOKNMKNFJM_ACEGFKILDML_OFFSET UNITYSDK_OFFSET(0x7FC0EA0)
#define DJOKNMKNFJM_BAGHPEPINOD_OFFSET UNITYSDK_OFFSET(0x7FC0D70)
#define DJOKNMKNFJM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7FC0C50)
#define DJOKNMKNFJM_HIJFIKNDGGN_OFFSET UNITYSDK_OFFSET(0x7FC0FE0)
#define DJOKNMKNFJM_IKNGENHFHBG_OFFSET UNITYSDK_OFFSET(0x7FC0BB0)
#define DJOKNMKNFJM_ONCREATE_OFFSET UNITYSDK_OFFSET(0x7FBE940)
#define DJOKNMKNFJM_PHJPFNKHIKB_OFFSET UNITYSDK_OFFSET(0x7FC1080)
#define DJOKNMKNFJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x7FC0D60)
#define DJOKNMKNFJM__CTOR_OFFSET UNITYSDK_OFFSET(0x7FC0D40)

inline static constexpr unsigned int DJOKNMKNFJM_TypeDefinitionIndex = 81032;

class DJOKNMKNFJM
{
public:
	static ::System::Int32* StaticGet_LDECIKDAMNF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DJOKNMKNFJM_TypeDefinitionIndex)->GetStaticField(0x13370);
	}
	::Il2CppArray<::JGELKBLKFHE*>* MFBHEKKDIIJ; // 0x10
	::System::Boolean GMOIJAFIGDC; // 0x18
	::System::Boolean GNEIMAHICIN; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJOKNMKNFJM__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_ONCREATE_OFFSET))(this);
	}

	::System::Void IKNGENHFHBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_IKNGENHFHBG_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_DISPOSE_OFFSET))(this);
	}

	::System::Void BAGHPEPINOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_BAGHPEPINOD_OFFSET))(this);
	}

	::System::Void ACEGFKILDML()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_ACEGFKILDML_OFFSET))(this);
	}

	::System::Void HIJFIKNDGGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_HIJFIKNDGGN_OFFSET))(this);
	}

	::System::Void PHJPFNKHIKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJOKNMKNFJM_PHJPFNKHIKB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define JFHGFNHAHJM___C_AMDOIBNDOGP_OFFSET UNITYSDK_OFFSET(0x198A8D90)
#define JFHGFNHAHJM___C_IFCPGPCHJFC_OFFSET UNITYSDK_OFFSET(0x198A8D80)
#define JFHGFNHAHJM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x198A8D30)
#define JFHGFNHAHJM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x198A8D70)

inline static constexpr unsigned int JFHGFNHAHJM___c_TypeDefinitionIndex = 57382;

class JFHGFNHAHJM___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__21_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(JFHGFNHAHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D3C0);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__22_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(JFHGFNHAHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D3C8);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JFHGFNHAHJM___c_TypeDefinitionIndex)->GetStaticField(0x4D3D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFHGFNHAHJM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFHGFNHAHJM___C__CTOR_OFFSET))(this);
	}

	::System::Void IFCPGPCHJFC(::OAEFGCLEHHO* FPNLKPJNCGK)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JFHGFNHAHJM___C_IFCPGPCHJFC_OFFSET))(this, FPNLKPJNCGK);
	}

	::System::Void AMDOIBNDOGP(::OAEFGCLEHHO* FPNLKPJNCGK)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + JFHGFNHAHJM___C_AMDOIBNDOGP_OFFSET))(this, FPNLKPJNCGK);
	}
};

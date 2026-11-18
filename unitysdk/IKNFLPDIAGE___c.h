#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_DLAAJNDJPLO;
class OAEFGCLEHHO;

#define IKNFLPDIAGE___C_EABCCIMILJJ_OFFSET UNITYSDK_OFFSET(0x13C8E720)
#define IKNFLPDIAGE___C_JDMCHDMIIEA_OFFSET UNITYSDK_OFFSET(0x13C8E710)
#define IKNFLPDIAGE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C8E6C0)
#define IKNFLPDIAGE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C8E700)

inline static constexpr unsigned int IKNFLPDIAGE___c_TypeDefinitionIndex = 81821;

class IKNFLPDIAGE___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__6_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(IKNFLPDIAGE___c_TypeDefinitionIndex)->GetStaticField(0x44400);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IKNFLPDIAGE___c_TypeDefinitionIndex)->GetStaticField(0x44408);
	}
	static ::IANDOOLAALI_DLAAJNDJPLO** StaticGet___9__7_0()
	{
		return (::IANDOOLAALI_DLAAJNDJPLO**)Il2CppClass::FromTypeDefinitionIndex(IKNFLPDIAGE___c_TypeDefinitionIndex)->GetStaticField(0x44410);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKNFLPDIAGE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKNFLPDIAGE___C__CTOR_OFFSET))(this);
	}

	::System::Void JDMCHDMIIEA(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE___C_JDMCHDMIIEA_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EABCCIMILJJ(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IKNFLPDIAGE___C_EABCCIMILJJ_OFFSET))(this, GLAOEHCGCFO);
	}
};

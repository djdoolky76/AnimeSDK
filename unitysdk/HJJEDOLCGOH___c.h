#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;

#define HJJEDOLCGOH___C_HEKMHPFECEE_OFFSET UNITYSDK_OFFSET(0x140BD970)
#define HJJEDOLCGOH___C_PEKMDNIDBIN_OFFSET UNITYSDK_OFFSET(0x140BD810)
#define HJJEDOLCGOH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140BD7C0)
#define HJJEDOLCGOH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x140BD800)

inline static constexpr unsigned int HJJEDOLCGOH___c_TypeDefinitionIndex = 87727;

class HJJEDOLCGOH___c : public ::System::Object
{
public:
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__16_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(HJJEDOLCGOH___c_TypeDefinitionIndex)->GetStaticField(0x48020);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HJJEDOLCGOH___c_TypeDefinitionIndex)->GetStaticField(0x48028);
	}
	static ::IANDOOLAALI_NGKHGAPPFDA** StaticGet___9__9_1()
	{
		return (::IANDOOLAALI_NGKHGAPPFDA**)Il2CppClass::FromTypeDefinitionIndex(HJJEDOLCGOH___c_TypeDefinitionIndex)->GetStaticField(0x48030);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJJEDOLCGOH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJJEDOLCGOH___C__CTOR_OFFSET))(this);
	}

	::System::Void PEKMDNIDBIN(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH___C_PEKMDNIDBIN_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void HEKMHPFECEE(::OAEFGCLEHHO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HJJEDOLCGOH___C_HEKMHPFECEE_OFFSET))(this, LJBPECKCCEA);
	}
};

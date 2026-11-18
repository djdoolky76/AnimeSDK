#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LPKCNCBNLGO;
namespace System { template <typename T> class Comparison_1; }

#define DDFAKDMLEAH___C_PCBJAPANKGC_OFFSET UNITYSDK_OFFSET(0x193F9E40)
#define DDFAKDMLEAH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x193F9DF0)
#define DDFAKDMLEAH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193F9E30)

inline static constexpr unsigned int DDFAKDMLEAH___c_TypeDefinitionIndex = 55476;

class DDFAKDMLEAH___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::LPKCNCBNLGO*>** StaticGet___9__19_0()
	{
		return (::System::Comparison_1<::LPKCNCBNLGO*>**)Il2CppClass::FromTypeDefinitionIndex(DDFAKDMLEAH___c_TypeDefinitionIndex)->GetStaticField(0x4B700);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DDFAKDMLEAH___c_TypeDefinitionIndex)->GetStaticField(0x4B708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDFAKDMLEAH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFAKDMLEAH___C__CTOR_OFFSET))(this);
	}

	::System::Int32 PCBJAPANKGC(::LPKCNCBNLGO* EJCBEJMGFAJ, ::LPKCNCBNLGO* EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::LPKCNCBNLGO*, ::LPKCNCBNLGO*))((::PBYTE)hIl2Cpp + DDFAKDMLEAH___C_PCBJAPANKGC_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

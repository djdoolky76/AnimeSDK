#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNAONLKLHNB;
namespace System { template <typename T1, typename T2> class Func_2; }

#define EBCEHHLMNCP___C_DEHHMMLLLGC_OFFSET UNITYSDK_OFFSET(0x15466720)
#define EBCEHHLMNCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x154666D0)
#define EBCEHHLMNCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15466710)

inline static constexpr unsigned int EBCEHHLMNCP___c_TypeDefinitionIndex = 84162;

class EBCEHHLMNCP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EBCEHHLMNCP___c_TypeDefinitionIndex)->GetStaticField(0x4F420);
	}
	static ::System::Func_2<::PNAONLKLHNB*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::PNAONLKLHNB*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EBCEHHLMNCP___c_TypeDefinitionIndex)->GetStaticField(0x4F428);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBCEHHLMNCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBCEHHLMNCP___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 DEHHMMLLLGC(::PNAONLKLHNB* HAAEBCOBKFF)
	{
		return ((::System::UInt32(*)(::PVOID, ::PNAONLKLHNB*))((::PBYTE)hIl2Cpp + EBCEHHLMNCP___C_DEHHMMLLLGC_OFFSET))(this, HAAEBCOBKFF);
	}
};

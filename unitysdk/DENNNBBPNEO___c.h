#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AIPEPMMGFDM;
namespace System { template <typename T1, typename T2> class Func_2; }

#define DENNNBBPNEO___C_GGCMHOHEHEN_OFFSET UNITYSDK_OFFSET(0x1A1DD110)
#define DENNNBBPNEO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD0C0)
#define DENNNBBPNEO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD100)

inline static constexpr unsigned int DENNNBBPNEO___c_TypeDefinitionIndex = 75930;

class DENNNBBPNEO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DENNNBBPNEO___c_TypeDefinitionIndex)->GetStaticField(0x3D870);
	}
	static ::System::Func_2<::AIPEPMMGFDM*, ::System::Int32>** StaticGet___9__64_1()
	{
		return (::System::Func_2<::AIPEPMMGFDM*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DENNNBBPNEO___c_TypeDefinitionIndex)->GetStaticField(0x3D878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DENNNBBPNEO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DENNNBBPNEO___C__CTOR_OFFSET))(this);
	}

	::System::Int32 GGCMHOHEHEN(::AIPEPMMGFDM* IPMMCGDMODG)
	{
		return ((::System::Int32(*)(::PVOID, ::AIPEPMMGFDM*))((::PBYTE)hIl2Cpp + DENNNBBPNEO___C_GGCMHOHEHEN_OFFSET))(this, IPMMCGDMODG);
	}
};

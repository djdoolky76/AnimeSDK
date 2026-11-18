#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPLDABGFDMJ;
class GEIHCPAOKKK;
namespace System { template <typename T1, typename T2> class Action_2; }

#define OLJACCBGGLB___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x15F7C720)
#define OLJACCBGGLB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F7C6D0)
#define OLJACCBGGLB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7C710)

inline static constexpr unsigned int OLJACCBGGLB___c_TypeDefinitionIndex = 50408;

class OLJACCBGGLB___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(OLJACCBGGLB___c_TypeDefinitionIndex)->GetStaticField(0x3CE40);
	}
	static ::System::Action_2<::GEIHCPAOKKK*, ::FPLDABGFDMJ*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::GEIHCPAOKKK*, ::FPLDABGFDMJ*>**)Il2CppClass::FromTypeDefinitionIndex(OLJACCBGGLB___c_TypeDefinitionIndex)->GetStaticField(0x3CE48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLJACCBGGLB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLJACCBGGLB___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::GEIHCPAOKKK* OHPJHPEOFLD, ::FPLDABGFDMJ* FNALOOPPDEF)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::FPLDABGFDMJ*))((::PBYTE)hIl2Cpp + OLJACCBGGLB___C_PLACCFJJGGK_OFFSET))(this, OHPJHPEOFLD, FNALOOPPDEF);
	}
};

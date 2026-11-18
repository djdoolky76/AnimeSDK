#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define JGPALCCLEGI___C_NIIMDLHGGLK_OFFSET UNITYSDK_OFFSET(0x14FB5630)
#define JGPALCCLEGI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FB55E0)
#define JGPALCCLEGI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14FB5620)

inline static constexpr unsigned int JGPALCCLEGI___c_TypeDefinitionIndex = 41368;

class JGPALCCLEGI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JGPALCCLEGI___c_TypeDefinitionIndex)->GetStaticField(0x3B600);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__2_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JGPALCCLEGI___c_TypeDefinitionIndex)->GetStaticField(0x3B608);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGPALCCLEGI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI___C__CTOR_OFFSET))(this);
	}

	::System::String* NIIMDLHGGLK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGPALCCLEGI___C_NIIMDLHGGLK_OFFSET))(this);
	}
};

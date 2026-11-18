#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MLBCBFFBHGN___C_BACLGHFFGIA_OFFSET UNITYSDK_OFFSET(0x14DEFBB0)
#define MLBCBFFBHGN___C_EHKHFKIHOKG_OFFSET UNITYSDK_OFFSET(0x14DEFBA0)
#define MLBCBFFBHGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DEFB50)
#define MLBCBFFBHGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEFB90)

inline static constexpr unsigned int MLBCBFFBHGN___c_TypeDefinitionIndex = 79386;

class MLBCBFFBHGN___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__10_8()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MLBCBFFBHGN___c_TypeDefinitionIndex)->GetStaticField(0x48570);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__10_7()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MLBCBFFBHGN___c_TypeDefinitionIndex)->GetStaticField(0x48578);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MLBCBFFBHGN___c_TypeDefinitionIndex)->GetStaticField(0x48580);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBCBFFBHGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBCBFFBHGN___C__CTOR_OFFSET))(this);
	}

	::System::String* EHKHFKIHOKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBCBFFBHGN___C_EHKHFKIHOKG_OFFSET))(this);
	}

	::System::String* BACLGHFFGIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBCBFFBHGN___C_BACLGHFFGIA_OFFSET))(this);
	}
};

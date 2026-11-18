#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EGLLNLKCCCM___C_KJEJOBAFKIN_OFFSET UNITYSDK_OFFSET(0x161400E0)
#define EGLLNLKCCCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16140090)
#define EGLLNLKCCCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x161400D0)

inline static constexpr unsigned int EGLLNLKCCCM___c_TypeDefinitionIndex = 84949;

class EGLLNLKCCCM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__6_0()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EGLLNLKCCCM___c_TypeDefinitionIndex)->GetStaticField(0x49A40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EGLLNLKCCCM___c_TypeDefinitionIndex)->GetStaticField(0x49A48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLLNLKCCCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLLNLKCCCM___C__CTOR_OFFSET))(this);
	}

	::System::String* KJEJOBAFKIN(::System::Int32 EDIIGGBJNFE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGLLNLKCCCM___C_KJEJOBAFKIN_OFFSET))(this, EDIIGGBJNFE);
	}
};

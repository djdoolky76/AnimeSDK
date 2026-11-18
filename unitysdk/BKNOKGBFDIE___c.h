#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKNOKGBFDIE___C_ICBHDEENFHL_OFFSET UNITYSDK_OFFSET(0x169F9CE0)
#define BKNOKGBFDIE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169F9C90)
#define BKNOKGBFDIE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169F9CD0)

inline static constexpr unsigned int BKNOKGBFDIE___c_TypeDefinitionIndex = 57144;

class BKNOKGBFDIE___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__12_0()
	{
		return (::System::Func_2<::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(BKNOKGBFDIE___c_TypeDefinitionIndex)->GetStaticField(0x4E1A0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BKNOKGBFDIE___c_TypeDefinitionIndex)->GetStaticField(0x4E1A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKNOKGBFDIE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNOKGBFDIE___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Int32>* ICBHDEENFHL(::System::Collections::Generic::List_1<::System::Int32>* DJLOKMMLFJC)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + BKNOKGBFDIE___C_ICBHDEENFHL_OFFSET))(this, DJLOKMMLFJC);
	}
};

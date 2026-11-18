#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define FMKMGOPGNED___C_JHMPNJLFHKC_OFFSET UNITYSDK_OFFSET(0x1750B530)
#define FMKMGOPGNED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1750B4E0)
#define FMKMGOPGNED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1750B520)

inline static constexpr unsigned int FMKMGOPGNED___c_TypeDefinitionIndex = 40681;

class FMKMGOPGNED___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FMKMGOPGNED___c_TypeDefinitionIndex)->GetStaticField(0x37730);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__1_1()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FMKMGOPGNED___c_TypeDefinitionIndex)->GetStaticField(0x37738);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMKMGOPGNED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMGOPGNED___C__CTOR_OFFSET))(this);
	}

	::System::String* JHMPNJLFHKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKMGOPGNED___C_JHMPNJLFHKC_OFFSET))(this);
	}
};

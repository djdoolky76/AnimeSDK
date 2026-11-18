#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LPJHHHCOLMO___C_GDJAMEEDADB_OFFSET UNITYSDK_OFFSET(0x151B8E50)
#define LPJHHHCOLMO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151B8E00)
#define LPJHHHCOLMO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151B8E40)

inline static constexpr unsigned int LPJHHHCOLMO___c_TypeDefinitionIndex = 46654;

class LPJHHHCOLMO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LPJHHHCOLMO___c_TypeDefinitionIndex)->GetStaticField(0x484F0);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__59_2()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(LPJHHHCOLMO___c_TypeDefinitionIndex)->GetStaticField(0x484F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPJHHHCOLMO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJHHHCOLMO___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 GDJAMEEDADB(::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPJHHHCOLMO___C_GDJAMEEDADB_OFFSET))(this, HBJOLKHGGDD);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Track; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EMGMHNMJLGG___C_IPCFDPCCKAL_OFFSET UNITYSDK_OFFSET(0x1417D710)
#define EMGMHNMJLGG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1417D6C0)
#define EMGMHNMJLGG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1417D700)

inline static constexpr unsigned int EMGMHNMJLGG___c_TypeDefinitionIndex = 50666;

class EMGMHNMJLGG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EMGMHNMJLGG___c_TypeDefinitionIndex)->GetStaticField(0x37670);
	}
	static ::System::Func_2<::MoleMole::Track*, ::System::Int32>** StaticGet___9__57_0()
	{
		return (::System::Func_2<::MoleMole::Track*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EMGMHNMJLGG___c_TypeDefinitionIndex)->GetStaticField(0x37678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMGMHNMJLGG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGMHNMJLGG___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IPCFDPCCKAL(::MoleMole::Track* HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Track*))((::PBYTE)hIl2Cpp + EMGMHNMJLGG___C_IPCFDPCCKAL_OFFSET))(this, HAAEBCOBKFF);
	}
};

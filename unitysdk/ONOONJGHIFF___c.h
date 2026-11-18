#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ONOONJGHIFF___C_EKFCGGPJKDP_OFFSET UNITYSDK_OFFSET(0x13A76920)
#define ONOONJGHIFF___C_MMAMLOJDCMO_OFFSET UNITYSDK_OFFSET(0x13A76910)
#define ONOONJGHIFF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A768C0)
#define ONOONJGHIFF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A76900)

inline static constexpr unsigned int ONOONJGHIFF___c_TypeDefinitionIndex = 41457;

class ONOONJGHIFF___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ONOONJGHIFF___c_TypeDefinitionIndex)->GetStaticField(0x4B200);
	}
	static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__17_1()
	{
		return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ONOONJGHIFF___c_TypeDefinitionIndex)->GetStaticField(0x4B208);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::System::UInt32>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ONOONJGHIFF___c_TypeDefinitionIndex)->GetStaticField(0x4B210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONOONJGHIFF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONOONJGHIFF___C__CTOR_OFFSET))(this);
	}

	::System::Boolean MMAMLOJDCMO(::System::UInt32 IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONOONJGHIFF___C_MMAMLOJDCMO_OFFSET))(this, IPMMCGDMODG);
	}

	::System::UInt32 EKFCGGPJKDP(::MoleMole::Battle::Entity* IPMMCGDMODG)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ONOONJGHIFF___C_EKFCGGPJKDP_OFFSET))(this, IPMMCGDMODG);
	}
};

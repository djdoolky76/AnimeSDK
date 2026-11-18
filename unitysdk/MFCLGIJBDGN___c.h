#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MFCLGIJBDGN___C_BNKMFGGDGKJ_OFFSET UNITYSDK_OFFSET(0x151CC190)
#define MFCLGIJBDGN___C_ELOJHPPLJDO_OFFSET UNITYSDK_OFFSET(0x151CC400)
#define MFCLGIJBDGN___C_KJIHMOHJOKC_OFFSET UNITYSDK_OFFSET(0x151CC300)
#define MFCLGIJBDGN___C_MMDCOIMBMPE_OFFSET UNITYSDK_OFFSET(0x151CC1F0)
#define MFCLGIJBDGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x151CC140)
#define MFCLGIJBDGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x151CC180)

inline static constexpr unsigned int MFCLGIJBDGN___c_TypeDefinitionIndex = 71155;

class MFCLGIJBDGN___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__78_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN___c_TypeDefinitionIndex)->GetStaticField(0x48520);
	}
	static ::System::Action** StaticGet___9__75_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN___c_TypeDefinitionIndex)->GetStaticField(0x48528);
	}
	static ::System::Action** StaticGet___9__40_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN___c_TypeDefinitionIndex)->GetStaticField(0x48530);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN___c_TypeDefinitionIndex)->GetStaticField(0x48538);
	}
	static ::System::Action_1<::System::Boolean>** StaticGet___9__77_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MFCLGIJBDGN___c_TypeDefinitionIndex)->GetStaticField(0x48540);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C__CTOR_OFFSET))(this);
	}

	::System::Void BNKMFGGDGKJ(::System::Boolean PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C_BNKMFGGDGKJ_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MMDCOIMBMPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C_MMDCOIMBMPE_OFFSET))(this);
	}

	::System::Void KJIHMOHJOKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C_KJIHMOHJOKC_OFFSET))(this);
	}

	::System::Void ELOJHPPLJDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCLGIJBDGN___C_ELOJHPPLJDO_OFFSET))(this);
	}
};

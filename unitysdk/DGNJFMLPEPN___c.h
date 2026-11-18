#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define DGNJFMLPEPN___C_MEPEGHGCBDA_OFFSET UNITYSDK_OFFSET(0x19A486A0)
#define DGNJFMLPEPN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A48650)
#define DGNJFMLPEPN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A48690)

inline static constexpr unsigned int DGNJFMLPEPN___c_TypeDefinitionIndex = 73037;

class DGNJFMLPEPN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DGNJFMLPEPN___c_TypeDefinitionIndex)->GetStaticField(0x37270);
	}
	static ::System::Action_1<::System::Exception*>** StaticGet___9__24_0()
	{
		return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(DGNJFMLPEPN___c_TypeDefinitionIndex)->GetStaticField(0x37278);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGNJFMLPEPN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNJFMLPEPN___C__CTOR_OFFSET))(this);
	}

	::System::Void MEPEGHGCBDA(::System::Exception* KMDHKNFMCAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + DGNJFMLPEPN___C_MEPEGHGCBDA_OFFSET))(this, KMDHKNFMCAE);
	}
};

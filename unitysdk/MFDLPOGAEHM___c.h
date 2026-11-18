#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { template <typename T> class Func_1; }

#define MFDLPOGAEHM___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1A63CCF0)
#define MFDLPOGAEHM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A63CCA0)
#define MFDLPOGAEHM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A63CCE0)

inline static constexpr unsigned int MFDLPOGAEHM___c_TypeDefinitionIndex = 66842;

class MFDLPOGAEHM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFDLPOGAEHM___c_TypeDefinitionIndex)->GetStaticField(0x4D680);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigAvatarLayoutCameraMisc*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigAvatarLayoutCameraMisc*>**)Il2CppClass::FromTypeDefinitionIndex(MFDLPOGAEHM___c_TypeDefinitionIndex)->GetStaticField(0x4D688);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDLPOGAEHM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDLPOGAEHM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigAvatarLayoutCameraMisc* JFNPHKAHEJF()
	{
		return ((::MoleMole::Config::ConfigAvatarLayoutCameraMisc*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDLPOGAEHM___C_JFNPHKAHEJF_OFFSET))(this);
	}
};

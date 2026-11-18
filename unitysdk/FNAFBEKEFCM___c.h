#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { template <typename T> class Func_1; }

#define FNAFBEKEFCM___C_JALKPBJAMLJ_OFFSET UNITYSDK_OFFSET(0x11D869C0)
#define FNAFBEKEFCM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D86970)
#define FNAFBEKEFCM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D869B0)

inline static constexpr unsigned int FNAFBEKEFCM___c_TypeDefinitionIndex = 77217;

class FNAFBEKEFCM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FNAFBEKEFCM___c_TypeDefinitionIndex)->GetStaticField(0x3AD40);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigHollowChessboardLight*>** StaticGet___9__5_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigHollowChessboardLight*>**)Il2CppClass::FromTypeDefinitionIndex(FNAFBEKEFCM___c_TypeDefinitionIndex)->GetStaticField(0x3AD48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNAFBEKEFCM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFBEKEFCM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigHollowChessboardLight* JALKPBJAMLJ()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardLight*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFBEKEFCM___C_JALKPBJAMLJ_OFFSET))(this);
	}
};

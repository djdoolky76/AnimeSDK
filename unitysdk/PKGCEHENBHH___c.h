#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class OverlayOutlineCollectionConfig; }
namespace System { template <typename T> class Func_1; }

#define PKGCEHENBHH___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1D62C9F0)
#define PKGCEHENBHH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62C9A0)
#define PKGCEHENBHH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62C9E0)

inline static constexpr unsigned int PKGCEHENBHH___c_TypeDefinitionIndex = 72929;

class PKGCEHENBHH___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::OverlayOutlineCollectionConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::OverlayOutlineCollectionConfig*>**)Il2CppClass::FromTypeDefinitionIndex(PKGCEHENBHH___c_TypeDefinitionIndex)->GetStaticField(0x493D0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PKGCEHENBHH___c_TypeDefinitionIndex)->GetStaticField(0x493D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKGCEHENBHH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCEHENBHH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::OverlayOutlineCollectionConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::OverlayOutlineCollectionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKGCEHENBHH___C_LPCHADDECLC_OFFSET))(this);
	}
};

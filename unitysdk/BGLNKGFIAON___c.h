#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMisc; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define BGLNKGFIAON___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x115046D0)
#define BGLNKGFIAON___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x115045F0)
#define BGLNKGFIAON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x115045A0)
#define BGLNKGFIAON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x115045E0)

inline static constexpr unsigned int BGLNKGFIAON___c_TypeDefinitionIndex = 45255;

class BGLNKGFIAON___c : public ::System::Object
{
public:
	static ::System::Func_1<::Foundation::AssetPath>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(BGLNKGFIAON___c_TypeDefinitionIndex)->GetStaticField(0x42DF0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BGLNKGFIAON___c_TypeDefinitionIndex)->GetStaticField(0x42DF8);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigMisc*>** StaticGet___9__1_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigMisc*>**)Il2CppClass::FromTypeDefinitionIndex(BGLNKGFIAON___c_TypeDefinitionIndex)->GetStaticField(0x42E00);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLNKGFIAON___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNKGFIAON___C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath JFNPHKAHEJF()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLNKGFIAON___C_JFNPHKAHEJF_OFFSET))(this);
	}

	::System::Void JAFCCEBIBJP(::MoleMole::Config::ConfigMisc* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc*))((::PBYTE)hIl2Cpp + BGLNKGFIAON___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}
};

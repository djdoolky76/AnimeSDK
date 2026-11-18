#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class LevelData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define AOHFGGGDCPL___C_HFCINCIDDDH_OFFSET UNITYSDK_OFFSET(0x17DE7810)
#define AOHFGGGDCPL___C_JDFAGCMCCGK_OFFSET UNITYSDK_OFFSET(0x17DE7800)
#define AOHFGGGDCPL___C_PEPPCPCBGKB_OFFSET UNITYSDK_OFFSET(0x17DE7820)
#define AOHFGGGDCPL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DE77B0)
#define AOHFGGGDCPL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE77F0)

inline static constexpr unsigned int AOHFGGGDCPL___c_TypeDefinitionIndex = 75117;

class AOHFGGGDCPL___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__11_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AOHFGGGDCPL___c_TypeDefinitionIndex)->GetStaticField(0x4CBA0);
	}
	static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AOHFGGGDCPL___c_TypeDefinitionIndex)->GetStaticField(0x4CBA8);
	}
	static ::System::Func_2<::MoleMole::Project::Config::LevelData*, ::System::Int32>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::MoleMole::Project::Config::LevelData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AOHFGGGDCPL___c_TypeDefinitionIndex)->GetStaticField(0x4CBB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AOHFGGGDCPL___c_TypeDefinitionIndex)->GetStaticField(0x4CBB8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOHFGGGDCPL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOHFGGGDCPL___C__CTOR_OFFSET))(this);
	}

	::System::Int32 JDFAGCMCCGK(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOHFGGGDCPL___C_JDFAGCMCCGK_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 HFCINCIDDDH(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOHFGGGDCPL___C_HFCINCIDDDH_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Int32 PEPPCPCBGKB(::MoleMole::Project::Config::LevelData* DPGFPHIMDEL)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Project::Config::LevelData*))((::PBYTE)hIl2Cpp + AOHFGGGDCPL___C_PEPPCPCBGKB_OFFSET))(this, DPGFPHIMDEL);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigZenkovSpecialAvatar; }
namespace System { template <typename T> class Func_1; }

#define PNLFNIBCMCP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x1C66DDB0)
#define PNLFNIBCMCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C66DD60)
#define PNLFNIBCMCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66DDA0)

inline static constexpr unsigned int PNLFNIBCMCP___c_TypeDefinitionIndex = 92631;

class PNLFNIBCMCP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PNLFNIBCMCP___c_TypeDefinitionIndex)->GetStaticField(0x363B0);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigZenkovSpecialAvatar*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigZenkovSpecialAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(PNLFNIBCMCP___c_TypeDefinitionIndex)->GetStaticField(0x363B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNLFNIBCMCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNIBCMCP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigZenkovSpecialAvatar* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigZenkovSpecialAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNLFNIBCMCP___C_LPCHADDECLC_OFFSET))(this);
	}
};

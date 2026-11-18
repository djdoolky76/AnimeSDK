#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { template <typename T> class Func_1; }

#define NNKPDANGLFI___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xED3B760)
#define NNKPDANGLFI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xED3B710)
#define NNKPDANGLFI___C__CTOR_OFFSET UNITYSDK_OFFSET(0xED3B750)

inline static constexpr unsigned int NNKPDANGLFI___c_TypeDefinitionIndex = 54871;

class NNKPDANGLFI___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::Config::ConfigUIAvatar*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(NNKPDANGLFI___c_TypeDefinitionIndex)->GetStaticField(0x4ED40);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NNKPDANGLFI___c_TypeDefinitionIndex)->GetStaticField(0x4ED48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNKPDANGLFI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPDANGLFI___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::ConfigUIAvatar* LPCHADDECLC()
	{
		return ((::MoleMole::Config::ConfigUIAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKPDANGLFI___C_LPCHADDECLC_OFFSET))(this);
	}
};

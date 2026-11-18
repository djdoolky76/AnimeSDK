#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { template <typename T> class Func_1; }

#define JIJJPFDIFEM___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0x13CC1B10)
#define JIJJPFDIFEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13CC1AC0)
#define JIJJPFDIFEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC1B00)

inline static constexpr unsigned int JIJJPFDIFEM___c_TypeDefinitionIndex = 85749;

class JIJJPFDIFEM___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JIJJPFDIFEM___c_TypeDefinitionIndex)->GetStaticField(0x46740);
	}
	static ::System::Func_1<::MoleMole::ConfigUIFishV2*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::ConfigUIFishV2*>**)Il2CppClass::FromTypeDefinitionIndex(JIJJPFDIFEM___c_TypeDefinitionIndex)->GetStaticField(0x46748);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIJJPFDIFEM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJJPFDIFEM___C__CTOR_OFFSET))(this);
	}

	::MoleMole::ConfigUIFishV2* LPCHADDECLC()
	{
		return ((::MoleMole::ConfigUIFishV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJJPFDIFEM___C_LPCHADDECLC_OFFSET))(this);
	}
};

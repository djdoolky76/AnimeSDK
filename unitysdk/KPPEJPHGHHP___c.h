#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class EffectLODDataConfig; }
namespace System { template <typename T> class Func_1; }

#define KPPEJPHGHHP___C_LPCHADDECLC_OFFSET UNITYSDK_OFFSET(0xD411520)
#define KPPEJPHGHHP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD4114D0)
#define KPPEJPHGHHP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD411510)

inline static constexpr unsigned int KPPEJPHGHHP___c_TypeDefinitionIndex = 47546;

class KPPEJPHGHHP___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KPPEJPHGHHP___c_TypeDefinitionIndex)->GetStaticField(0x32A00);
	}
	static ::System::Func_1<::MoleMole::Config::EffectLODDataConfig*>** StaticGet___9__2_0()
	{
		return (::System::Func_1<::MoleMole::Config::EffectLODDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(KPPEJPHGHHP___c_TypeDefinitionIndex)->GetStaticField(0x32A08);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPEJPHGHHP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEJPHGHHP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::EffectLODDataConfig* LPCHADDECLC()
	{
		return ((::MoleMole::Config::EffectLODDataConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPEJPHGHHP___C_LPCHADDECLC_OFFSET))(this);
	}
};

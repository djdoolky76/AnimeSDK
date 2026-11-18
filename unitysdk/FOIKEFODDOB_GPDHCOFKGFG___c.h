#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIScriptableAnimSpecialNum; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define FOIKEFODDOB_GPDHCOFKGFG___C_JAFCCEBIBJP_OFFSET UNITYSDK_OFFSET(0x1750EFA0)
#define FOIKEFODDOB_GPDHCOFKGFG___C_JFNPHKAHEJF_OFFSET UNITYSDK_OFFSET(0x1750F090)
#define FOIKEFODDOB_GPDHCOFKGFG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1750EF50)
#define FOIKEFODDOB_GPDHCOFKGFG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1750EF90)

inline static constexpr unsigned int FOIKEFODDOB_GPDHCOFKGFG___c_TypeDefinitionIndex = 66546;

class FOIKEFODDOB_GPDHCOFKGFG___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_GPDHCOFKGFG___c_TypeDefinitionIndex)->GetStaticField(0x37750);
	}
	static ::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>** StaticGet___9__1_1()
	{
		return (::System::Action_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_GPDHCOFKGFG___c_TypeDefinitionIndex)->GetStaticField(0x37758);
	}
	static ::System::Func_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>** StaticGet___9__1_0()
	{
		return (::System::Func_1<::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*>**)Il2CppClass::FromTypeDefinitionIndex(FOIKEFODDOB_GPDHCOFKGFG___c_TypeDefinitionIndex)->GetStaticField(0x37760);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG___C__CTOR_OFFSET))(this);
	}

	::System::Void JAFCCEBIBJP(::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG___C_JAFCCEBIBJP_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigUIScriptableAnimSpecialNum* JFNPHKAHEJF()
	{
		return ((::MoleMole::Config::ConfigUIScriptableAnimSpecialNum*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_GPDHCOFKGFG___C_JFNPHKAHEJF_OFFSET))(this);
	}
};

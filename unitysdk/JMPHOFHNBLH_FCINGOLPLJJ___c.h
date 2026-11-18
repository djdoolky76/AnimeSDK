#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IScenePerformConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JMPHOFHNBLH_FCINGOLPLJJ___C_GMNPPCBIEGL_OFFSET UNITYSDK_OFFSET(0x1A47EAC0)
#define JMPHOFHNBLH_FCINGOLPLJJ___C_MINJFOAIIIN_OFFSET UNITYSDK_OFFSET(0x1A47EB90)
#define JMPHOFHNBLH_FCINGOLPLJJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A47EA70)
#define JMPHOFHNBLH_FCINGOLPLJJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47EAB0)

inline static constexpr unsigned int JMPHOFHNBLH_FCINGOLPLJJ___c_TypeDefinitionIndex = 73726;

class JMPHOFHNBLH_FCINGOLPLJJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_0()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JMPHOFHNBLH_FCINGOLPLJJ___c_TypeDefinitionIndex)->GetStaticField(0x40FB0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JMPHOFHNBLH_FCINGOLPLJJ___c_TypeDefinitionIndex)->GetStaticField(0x40FB8);
	}
	static ::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>** StaticGet___9__67_1()
	{
		return (::System::Func_2<::MoleMole::Config::IScenePerformConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(JMPHOFHNBLH_FCINGOLPLJJ___c_TypeDefinitionIndex)->GetStaticField(0x40FC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean GMNPPCBIEGL(::MoleMole::Config::IScenePerformConfig* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ___C_GMNPPCBIEGL_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean MINJFOAIIIN(::MoleMole::Config::IScenePerformConfig* DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::IScenePerformConfig*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_FCINGOLPLJJ___C_MINJFOAIIIN_OFFSET))(this, DFMKILICPFB);
	}
};

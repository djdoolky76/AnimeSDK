#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine::Events { class UnityAction; }

#define NJDIHHLAMHO___C_CAEPFMOBHON_OFFSET UNITYSDK_OFFSET(0x1375D750)
#define NJDIHHLAMHO___C_DGDLPAJPGOL_OFFSET UNITYSDK_OFFSET(0x1375D770)
#define NJDIHHLAMHO___C_EIEBKOAGEGM_OFFSET UNITYSDK_OFFSET(0x1375D780)
#define NJDIHHLAMHO___C_FJEDLKMKKKO_OFFSET UNITYSDK_OFFSET(0x1375D670)
#define NJDIHHLAMHO___C_HICMNBAAMII_OFFSET UNITYSDK_OFFSET(0x1375D760)
#define NJDIHHLAMHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1375D620)
#define NJDIHHLAMHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1375D660)

inline static constexpr unsigned int NJDIHHLAMHO___c_TypeDefinitionIndex = 51913;

class NJDIHHLAMHO___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_1()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F00);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_9()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F08);
	}
	static ::System::Action** StaticGet___9__15_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F10);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__11_8()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F18);
	}
	static ::System::Action** StaticGet___9__15_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F20);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NJDIHHLAMHO___c_TypeDefinitionIndex)->GetStaticField(0x48F28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C__CTOR_OFFSET))(this);
	}

	::System::Void FJEDLKMKKKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C_FJEDLKMKKKO_OFFSET))(this);
	}

	::System::Void CAEPFMOBHON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C_CAEPFMOBHON_OFFSET))(this);
	}

	::System::Void HICMNBAAMII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C_HICMNBAAMII_OFFSET))(this);
	}

	::System::Boolean DGDLPAJPGOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C_DGDLPAJPGOL_OFFSET))(this);
	}

	::System::Boolean EIEBKOAGEGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDIHHLAMHO___C_EIEBKOAGEGM_OFFSET))(this);
	}
};

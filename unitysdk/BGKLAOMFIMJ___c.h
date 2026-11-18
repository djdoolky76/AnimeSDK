#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKDAICMCHMP.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define BGKLAOMFIMJ___C_FIDICCDFELG_OFFSET UNITYSDK_OFFSET(0x143F2890)
#define BGKLAOMFIMJ___C_MNEAOGOLCEE_OFFSET UNITYSDK_OFFSET(0x143F2880)
#define BGKLAOMFIMJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143F2830)
#define BGKLAOMFIMJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143F2870)

inline static constexpr unsigned int BGKLAOMFIMJ___c_TypeDefinitionIndex = 68194;

class BGKLAOMFIMJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::KKDAICMCHMP>** StaticGet___9__94_0()
	{
		return (::System::Func_2<::System::Int32, ::KKDAICMCHMP>**)Il2CppClass::FromTypeDefinitionIndex(BGKLAOMFIMJ___c_TypeDefinitionIndex)->GetStaticField(0x4F200);
	}
	static ::System::Action** StaticGet___9__11_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(BGKLAOMFIMJ___c_TypeDefinitionIndex)->GetStaticField(0x4F208);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BGKLAOMFIMJ___c_TypeDefinitionIndex)->GetStaticField(0x4F210);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGKLAOMFIMJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLAOMFIMJ___C__CTOR_OFFSET))(this);
	}

	::KKDAICMCHMP MNEAOGOLCEE(::System::Int32 OPIJNCNMLEO)
	{
		return ((::KKDAICMCHMP(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BGKLAOMFIMJ___C_MNEAOGOLCEE_OFFSET))(this, OPIJNCNMLEO);
	}

	::System::Void FIDICCDFELG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKLAOMFIMJ___C_FIDICCDFELG_OFFSET))(this);
	}
};

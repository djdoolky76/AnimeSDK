#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define LHDJJGJKHGN___C_IKHCMHFDNMC_OFFSET UNITYSDK_OFFSET(0x158E14B0)
#define LHDJJGJKHGN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x158E1460)
#define LHDJJGJKHGN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x158E14A0)

inline static constexpr unsigned int LHDJJGJKHGN___c_TypeDefinitionIndex = 63825;

class LHDJJGJKHGN___c : public ::System::Object
{
public:
	static ::System::Func_2<::UnityEngine::RaycastHit, ::System::Single>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::UnityEngine::RaycastHit, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(LHDJJGJKHGN___c_TypeDefinitionIndex)->GetStaticField(0x384B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LHDJJGJKHGN___c_TypeDefinitionIndex)->GetStaticField(0x384B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHDJJGJKHGN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDJJGJKHGN___C__CTOR_OFFSET))(this);
	}

	::System::Single IKHCMHFDNMC(::UnityEngine::RaycastHit OFLHPPDJLNL)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LHDJJGJKHGN___C_IKHCMHFDNMC_OFFSET))(this, OFLHPPDJLNL);
	}
};

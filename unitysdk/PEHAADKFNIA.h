#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define PEHAADKFNIA_BPPIDNAHJLB_OFFSET UNITYSDK_OFFSET(0x136F5C90)
#define PEHAADKFNIA_EOLKLDFGLJP_OFFSET UNITYSDK_OFFSET(0x136F5D10)
#define PEHAADKFNIA__CCTOR_OFFSET UNITYSDK_OFFSET(0x136F5C50)
#define PEHAADKFNIA__CTOR_OFFSET UNITYSDK_OFFSET(0x136F5C40)

inline static constexpr unsigned int PEHAADKFNIA_TypeDefinitionIndex = 53037;

class PEHAADKFNIA : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EPDLGLNLPCG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PEHAADKFNIA_TypeDefinitionIndex)->GetStaticField(0x11EE0);
	}
	::UnityEngine::Material* FEDEMLCMDIC; // 0x10

	::System::Void _ctor(::UnityEngine::Material* FEDEMLCMDIC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + PEHAADKFNIA__CTOR_OFFSET))(this, FEDEMLCMDIC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEHAADKFNIA__CCTOR_OFFSET))();
	}

	::System::Single BPPIDNAHJLB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHAADKFNIA_BPPIDNAHJLB_OFFSET))(this);
	}

	::System::Void EOLKLDFGLJP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PEHAADKFNIA_EOLKLDFGLJP_OFFSET))(this, EGEGIMGMJHN);
	}
};

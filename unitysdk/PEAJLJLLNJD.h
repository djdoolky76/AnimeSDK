#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMEKFNOLPND.h"
#include "unitysdk/MFAOOLCMILD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PEAJLJLLNJD_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x18465A30)
#define PEAJLJLLNJD__CCTOR_OFFSET UNITYSDK_OFFSET(0x184659F0)

inline static constexpr unsigned int PEAJLJLLNJD_TypeDefinitionIndex = 43868;

class PEAJLJLLNJD : public ::System::Object
{
public:
	static ::MFAOOLCMILD* StaticGet_NABAJJPDLOI()
	{
		return (::MFAOOLCMILD*)Il2CppClass::FromTypeDefinitionIndex(PEAJLJLLNJD_TypeDefinitionIndex)->GetStaticField(0x100F0);
	}
	static ::System::Int32* StaticGet_KOIJLDMCBEP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PEAJLJLLNJD_TypeDefinitionIndex)->GetStaticField(0x10108);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEAJLJLLNJD__CCTOR_OFFSET))();
	}

	static ::System::Boolean OKJCHFGIKBH(::GMEKFNOLPND NFKAJAIMGJM, ::System::Boolean GIPECNMEEPB, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Boolean(*)(::GMEKFNOLPND, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PEAJLJLLNJD_OKJCHFGIKBH_OFFSET))(NFKAJAIMGJM, GIPECNMEEPB, OHOGDOMNHNK);
	}
};

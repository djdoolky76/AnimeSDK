#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/F5F0D9F823685E5A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::UI { class Image; }

#define A2AEED9A308227AD_AAFC3D94C1384A68_OFFSET UNITYSDK_OFFSET(0x3ACABE0)
#define A2AEED9A308227AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ACAD60)
#define A2AEED9A308227AD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A2AEED9A308227AD_TypeDefinitionIndex = 12139;

class A2AEED9A308227AD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::BED79290917896D4::F5F0D9F823685E5A, ::System::String*>** StaticGet_E5EF2FD57D7A136C()
	{
		return (::System::Collections::Generic::Dictionary_2<::BED79290917896D4::F5F0D9F823685E5A, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A2AEED9A308227AD_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A2AEED9A308227AD__CTOR_OFFSET))(this);
	}

	static ::System::Void AAFC3D94C1384A68(::UnityEngine::UI::Image* AA2ED3B428073905, ::BED79290917896D4::F5F0D9F823685E5A B3A8E245D8B6944E)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Image*, ::BED79290917896D4::F5F0D9F823685E5A))((::PBYTE)hIl2Cpp + A2AEED9A308227AD_AAFC3D94C1384A68_OFFSET))(AA2ED3B428073905, B3A8E245D8B6944E);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A2AEED9A308227AD__CCTOR_OFFSET))();
	}
};

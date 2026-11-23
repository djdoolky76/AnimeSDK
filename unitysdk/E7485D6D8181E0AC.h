#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AB4BABFB400D6C39; }

#define E7485D6D8181E0AC_FC325D1931549644_OFFSET UNITYSDK_OFFSET(0x43FB6B0)
#define E7485D6D8181E0AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x43FB840)

inline static constexpr unsigned int E7485D6D8181E0AC_TypeDefinitionIndex = 19424;

class E7485D6D8181E0AC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::AF7290E01E012C43, ::System::Int32>** StaticGet_E6F7FF4FCFEE3468()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::AF7290E01E012C43, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(E7485D6D8181E0AC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::AF7290E01E012C43>** StaticGet_F37CA8862CCB6408()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(E7485D6D8181E0AC_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Int32 FC325D1931549644(::UnityEngine::AB4BABFB400D6C39* BAFBBB8691317753)
	{
		return ((::System::Int32(*)(::UnityEngine::AB4BABFB400D6C39*))((::PBYTE)hIl2Cpp + E7485D6D8181E0AC_FC325D1931549644_OFFSET))(BAFBBB8691317753);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E7485D6D8181E0AC__CCTOR_OFFSET))();
	}
};

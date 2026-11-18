#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapGradientAlphaKey.h"
#include "unitysdk/NapGradientColorKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System { template <typename T> class Comparison_1; }

#define CGAEDDFDFHC___C_AODDDMHKJEM_OFFSET UNITYSDK_OFFSET(0x1153DA50)
#define CGAEDDFDFHC___C_IKFLCMHLGIB_OFFSET UNITYSDK_OFFSET(0x1153D790)
#define CGAEDDFDFHC___C_PKIDGDIOHKK_OFFSET UNITYSDK_OFFSET(0x1153DAB0)
#define CGAEDDFDFHC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1153D740)
#define CGAEDDFDFHC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1153D780)

inline static constexpr unsigned int CGAEDDFDFHC___c_TypeDefinitionIndex = 77383;

class CGAEDDFDFHC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::NapGradientAlphaKey>** StaticGet___9__35_1()
	{
		return (::System::Comparison_1<::NapGradientAlphaKey>**)Il2CppClass::FromTypeDefinitionIndex(CGAEDDFDFHC___c_TypeDefinitionIndex)->GetStaticField(0x42FE0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGAEDDFDFHC___c_TypeDefinitionIndex)->GetStaticField(0x42FE8);
	}
	static ::System::Comparison_1<::UnityEngine::Keyframe>** StaticGet___9__38_3()
	{
		return (::System::Comparison_1<::UnityEngine::Keyframe>**)Il2CppClass::FromTypeDefinitionIndex(CGAEDDFDFHC___c_TypeDefinitionIndex)->GetStaticField(0x42FF0);
	}
	static ::System::Comparison_1<::NapGradientColorKey>** StaticGet___9__35_0()
	{
		return (::System::Comparison_1<::NapGradientColorKey>**)Il2CppClass::FromTypeDefinitionIndex(CGAEDDFDFHC___c_TypeDefinitionIndex)->GetStaticField(0x42FF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGAEDDFDFHC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGAEDDFDFHC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 IKFLCMHLGIB(::UnityEngine::Keyframe EJCBEJMGFAJ, ::UnityEngine::Keyframe EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Keyframe, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + CGAEDDFDFHC___C_IKFLCMHLGIB_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 AODDDMHKJEM(::NapGradientAlphaKey EJCBEJMGFAJ, ::NapGradientAlphaKey EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientAlphaKey, ::NapGradientAlphaKey))((::PBYTE)hIl2Cpp + CGAEDDFDFHC___C_AODDDMHKJEM_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Int32 PKIDGDIOHKK(::NapGradientColorKey EJCBEJMGFAJ, ::NapGradientColorKey EBFCACIEKBC)
	{
		return ((::System::Int32(*)(::PVOID, ::NapGradientColorKey, ::NapGradientColorKey))((::PBYTE)hIl2Cpp + CGAEDDFDFHC___C_PKIDGDIOHKK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}
};

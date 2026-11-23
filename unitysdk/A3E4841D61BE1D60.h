#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define A3E4841D61BE1D60_ECD0EAF3F6896DDF_OFFSET UNITYSDK_OFFSET(0x3DB9980)
#define A3E4841D61BE1D60_FECC77AD7AD83C3C_OFFSET UNITYSDK_OFFSET(0x3DB9890)
#define A3E4841D61BE1D60__CCTOR_OFFSET UNITYSDK_OFFSET(0x3DB9AA0)

inline static constexpr unsigned int A3E4841D61BE1D60_TypeDefinitionIndex = 21158;

class A3E4841D61BE1D60 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_A6DBC1FA6E90AB77()
	{
		return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(A3E4841D61BE1D60_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Int32 ECD0EAF3F6896DDF(::System::Int32 F8581B2652EF6762, ::Il2CppArray<::System::Single>* B9994C2B13AED7E8)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + A3E4841D61BE1D60_ECD0EAF3F6896DDF_OFFSET))(F8581B2652EF6762, B9994C2B13AED7E8);
	}

	static ::System::Int32 FECC77AD7AD83C3C(::System::Int32 F8581B2652EF6762, ::Il2CppArray<::System::Single>* B9994C2B13AED7E8)
	{
		return ((::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + A3E4841D61BE1D60_FECC77AD7AD83C3C_OFFSET))(F8581B2652EF6762, B9994C2B13AED7E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A3E4841D61BE1D60__CCTOR_OFFSET))();
	}
};

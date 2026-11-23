#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AC7EC60781B7D3AF/A4C5F5DEDDCE09CC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AF7290E01E012C43.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define E8A27700E4AC3A41_A5A0352A1DF06476_OFFSET UNITYSDK_OFFSET(0x39722C0)
#define E8A27700E4AC3A41_B5A84F53460B9BF7_OFFSET UNITYSDK_OFFSET(0x39720F0)
#define E8A27700E4AC3A41_EE5ABE1B8850DA4F_OFFSET UNITYSDK_OFFSET(0x3971E60)
#define E8A27700E4AC3A41__CCTOR_OFFSET UNITYSDK_OFFSET(0x3972490)

inline static constexpr unsigned int E8A27700E4AC3A41_TypeDefinitionIndex = 12453;

class E8A27700E4AC3A41 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>** StaticGet_B24293DF9191B09F()
	{
		return (::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(E8A27700E4AC3A41_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>** StaticGet_FF5B8D6E82C284FC()
	{
		return (::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(E8A27700E4AC3A41_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>** StaticGet_A97E74F2FC5CF056()
	{
		return (::System::Collections::Generic::Dictionary_2<::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC, ::UnityEngine::AF7290E01E012C43>**)Il2CppClass::FromTypeDefinitionIndex(E8A27700E4AC3A41_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8A27700E4AC3A41__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AF7290E01E012C43>* EE5ABE1B8850DA4F(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC A5C299C395D3E1B2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::AF7290E01E012C43>*(*)(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC))((::PBYTE)hIl2Cpp + E8A27700E4AC3A41_EE5ABE1B8850DA4F_OFFSET))(A5C299C395D3E1B2);
	}

	static ::System::Boolean B5A84F53460B9BF7(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC))((::PBYTE)hIl2Cpp + E8A27700E4AC3A41_B5A84F53460B9BF7_OFFSET))(A5C299C395D3E1B2);
	}

	static ::System::Boolean A5A0352A1DF06476(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC A5C299C395D3E1B2)
	{
		return ((::System::Boolean(*)(::AC7EC60781B7D3AF::A4C5F5DEDDCE09CC))((::PBYTE)hIl2Cpp + E8A27700E4AC3A41_A5A0352A1DF06476_OFFSET))(A5C299C395D3E1B2);
	}
};

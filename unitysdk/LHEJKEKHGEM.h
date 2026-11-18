#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Coroutine; }

#define LHEJKEKHGEM_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0xD42D490)
#define LHEJKEKHGEM_FFLJJEGBHEL_OFFSET UNITYSDK_OFFSET(0xD42CE30)
#define LHEJKEKHGEM_FLHNGDLANDC_1_OFFSET UNITYSDK_OFFSET(0xD42D120)
#define LHEJKEKHGEM_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0xD42CF50)
#define LHEJKEKHGEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xD42CD90)

inline static constexpr unsigned int LHEJKEKHGEM_TypeDefinitionIndex = 46277;

class LHEJKEKHGEM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::Coroutine*>** StaticGet_LHHEPELIIHG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::Coroutine*>**)Il2CppClass::FromTypeDefinitionIndex(LHEJKEKHGEM_TypeDefinitionIndex)->GetStaticField(0x32AE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHEJKEKHGEM__CCTOR_OFFSET))();
	}

	static ::System::Collections::IEnumerator* FFLJJEGBHEL(::Foundation::ViewObject::ViewObjectHandle GOGKEOGCNIB, ::System::ValueTuple_2<::System::Int32, ::System::Int32> MGMDLMBEDJF, ::System::Single FAMBCIJIIOH, ::System::Single BEFMIMJBDKG, ::System::Single IHMPCKPNJEA, ::Foundation::ViewObject::ViewObjectHandle HODAIDNDKHD, ::System::Boolean NBDHBKLLBLL)
	{
		return ((::System::Collections::IEnumerator*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::Single, ::System::Single, ::System::Single, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FFLJJEGBHEL_OFFSET))(GOGKEOGCNIB, MGMDLMBEDJF, FAMBCIJIIOH, BEFMIMJBDKG, IHMPCKPNJEA, HODAIDNDKHD, NBDHBKLLBLL);
	}

	static ::System::Void FLHNGDLANDC(::System::ValueTuple_2<::System::Int32, ::System::Int32> MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FLHNGDLANDC_OFFSET))(MGMDLMBEDJF);
	}

	static ::System::Void FLHNGDLANDC_1(::System::Int32 FIPAGJPCDDP)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_FLHNGDLANDC_1_OFFSET))(FIPAGJPCDDP);
	}

	static ::System::Void ANPBCLAFCJB(::System::ValueTuple_2<::System::Int32, ::System::Int32> MGMDLMBEDJF, ::Foundation::ViewObject::ViewObjectHandle GOGKEOGCNIB, ::System::Single FAMBCIJIIOH, ::System::Single BEFMIMJBDKG, ::System::Single IHMPCKPNJEA, ::Foundation::ViewObject::ViewObjectHandle HODAIDNDKHD, ::System::Boolean NBDHBKLLBLL)
	{
		return ((::System::Void(*)(::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::Foundation::ViewObject::ViewObjectHandle, ::System::Single, ::System::Single, ::System::Single, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + LHEJKEKHGEM_ANPBCLAFCJB_OFFSET))(MGMDLMBEDJF, GOGKEOGCNIB, FAMBCIJIIOH, BEFMIMJBDKG, IHMPCKPNJEA, HODAIDNDKHD, NBDHBKLLBLL);
	}
};

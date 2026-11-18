#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/ValueTuple_2.h"

#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F475CA0)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F475CE0)
#define FOUNDATION_NAMEVALUECONTAINERBUILDER___C___CCTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1F475CF0)

namespace Foundation
{
	inline static constexpr unsigned int NameValueContainerBuilder___c_TypeDefinitionIndex = 9076;

	class NameValueContainerBuilder___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NameValueContainerBuilder___c_TypeDefinitionIndex)->GetStaticField(0x7520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__12_0(::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> a, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32> b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>, ::System::ValueTuple_2<::Foundation::Unreal::FName, ::System::Int32>))((::PBYTE)hIl2Cpp + FOUNDATION_NAMEVALUECONTAINERBUILDER___C___CCTOR_B__12_0_OFFSET))(this, a, b);
		}
	};
}

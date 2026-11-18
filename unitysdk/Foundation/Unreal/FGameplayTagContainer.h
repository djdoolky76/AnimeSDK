#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/FixedArray2_1.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/Foundation/InlineList_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class IGameplayTagContainerVisitor; }
namespace System { class Object; }

#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x78A3F0)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0x78A340)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_1_OFFSET UNITYSDK_OFFSET(0x16640F40)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_OFFSET UNITYSDK_OFFSET(0x16640D70)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16641040)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_VISITGAMEPLAYTAG_OFFSET UNITYSDK_OFFSET(0x78A330)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16641460)
#define FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x78A240)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FGameplayTagContainer_TypeDefinitionIndex = 13622;

	struct alignas(8) FGameplayTagContainer
	{
		static ::Foundation::Unreal::FGameplayTagContainer* StaticGet_Empty()
		{
			return (::Foundation::Unreal::FGameplayTagContainer*)Il2CppClass::FromTypeDefinitionIndex(FGameplayTagContainer_TypeDefinitionIndex)->GetStaticField(0x76D0);
		}
		::Foundation::InlineList_2<::Foundation::Unreal::FGameplayTag, ::Foundation::FixedArray2_1<::Foundation::Unreal::FGameplayTag>> GameplayTags; // 0x10
		::System::Byte _padding0[0x18];
		::Foundation::InlineList_2<::Foundation::Unreal::FGameplayTag, ::Foundation::FixedArray8_1<::Foundation::Unreal::FGameplayTag>> ParentTags; // 0x30

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CTOR_OFFSET))(this, _);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER__CCTOR_OFFSET))();
		}

		/*
		static ::Foundation::Unreal::FGameplayTagContainer New(::Foundation::Unreal::FGameplayTag tag)
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_OFFSET))(tag);
		}
		*/

		/*
		static ::Foundation::Unreal::FGameplayTagContainer New_1()
		{
			return ((::Foundation::Unreal::FGameplayTagContainer(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_NEW_1_OFFSET))();
		}
		*/

		/*
		static ::System::Boolean op_Equality(::Foundation::Unreal::FGameplayTagContainer& left, ::Foundation::Unreal::FGameplayTagContainer& right)
		{
			return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer&, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_OP_EQUALITY_OFFSET))(left, right);
		}
		*/

		::System::Void VisitGameplayTag(::Foundation::Unreal::IGameplayTagContainerVisitor* visitor)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::IGameplayTagContainerVisitor*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_VISITGAMEPLAYTAG_OFFSET))(this, visitor);
		}

		/*
		::System::Boolean Equals(::Foundation::Unreal::FGameplayTagContainer other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FGAMEPLAYTAGCONTAINER_EQUALS_1_OFFSET))(this, obj);
		}
	};
}

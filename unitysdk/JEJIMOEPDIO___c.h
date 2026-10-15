#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define JEJIMOEPDIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1661EA20)
#define JEJIMOEPDIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1661EA60)
#define JEJIMOEPDIO___C__SHOULDEMPHASIZEWRONGLYPEAKED_B__0_0_OFFSET UNITYSDK_OFFSET(0x1661EA70)

inline static constexpr unsigned int JEJIMOEPDIO___c_TypeDefinitionIndex = 79415;

	class JEJIMOEPDIO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA9C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA9C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ShouldEmphasizeWronglyPeaked_b__0_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C__SHOULDEMPHASIZEWRONGLYPEAKED_B__0_0_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OJOHBFMIDJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBEC6090)
#define OJOHBFMIDJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC60D0)
#define OJOHBFMIDJD___C___LOADATTRIBUTETYPES_B__31_1_OFFSET UNITYSDK_OFFSET(0xBEC60E0)
#define OJOHBFMIDJD___C___LOADTRAITS_B__32_0_OFFSET UNITYSDK_OFFSET(0xBEC60F0)
#define OJOHBFMIDJD___C___LOADTRAITS_B__32_2_OFFSET UNITYSDK_OFFSET(0xBEC6100)

inline static constexpr unsigned int OJOHBFMIDJD___c_TypeDefinitionIndex = 79560;

	class OJOHBFMIDJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C3C0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C3C8);
		}

		static ::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__32_2()
		{
			return (::System::Func_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C3D0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C3D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJOHBFMIDJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __LoadAttributeTypes_b__31_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___C___LOADATTRIBUTETYPES_B__31_1_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __LoadTraits_b__32_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___C___LOADTRAITS_B__32_0_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType __LoadTraits_b__32_2(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + OJOHBFMIDJD___C___LOADTRAITS_B__32_2_OFFSET))(this, a1);
		}

	};

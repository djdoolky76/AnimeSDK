#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ALDMDBEKHPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C510D50)
#define ALDMDBEKHPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C510D90)
#define ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C510DA0)
#define ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C510DB0)

inline static constexpr unsigned int ALDMDBEKHPL___c_TypeDefinitionIndex = 41740;

	class ALDMDBEKHPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F9B0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F9B8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_2(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32> a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftChipTraitType, ::System::Int32>))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET))(this, a1);
		}

	};

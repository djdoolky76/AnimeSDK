#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define ALDMDBEKHPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C53F210)
#define ALDMDBEKHPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C53F250)
#define ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C53F260)
#define ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET UNITYSDK_OFFSET(0x1C53F270)

	class ALDMDBEKHPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162F0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x162F8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftChipTraitType>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::RPG::Client::MechCraft::MechCraftChipTraitType>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_1_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftChipTraitType _DetermineProductTraits_b__6_2(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + ALDMDBEKHPL___C__DETERMINEPRODUCTTRAITS_B__6_2_OFFSET))(this, a1);
		}

	};

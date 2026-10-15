#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFEOAPAHKLC;
class HCOCIAMDBDO;
class KCAMGNGBBLN;
class LJNBEGPNLDL;
namespace RPG::Client { class RogueBuffData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ILOFKJGANPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x164C8F40)
#define ILOFKJGANPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x164C8F70)
#define ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_0_OFFSET UNITYSDK_OFFSET(0x164C8F80)
#define ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_1_OFFSET UNITYSDK_OFFSET(0x164C9310)
#define ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_2_OFFSET UNITYSDK_OFFSET(0x164C92F0)
#define ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_3_OFFSET UNITYSDK_OFFSET(0x164C96A0)

	class ILOFKJGANPP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LJNBEGPNLDL*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::LJNBEGPNLDL*, ::RPG::Client::RogueBuffData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66720);
		}

		static ::System::Func_2<::HCOCIAMDBDO*, ::RPG::Client::RogueBuffData*>** StaticGet___9__1_3()
		{
			return (::System::Func_2<::HCOCIAMDBDO*, ::RPG::Client::RogueBuffData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66728);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66730);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::HCOCIAMDBDO*>*, ::KCAMGNGBBLN*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::HCOCIAMDBDO*>*, ::KCAMGNGBBLN*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66738);
		}

		static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::LJNBEGPNLDL*>*, ::BFEOAPAHKLC*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::LJNBEGPNLDL*>*, ::BFEOAPAHKLC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILOFKJGANPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILOFKJGANPP___C_CTOR_OFFSET))(this);
		}

		::BFEOAPAHKLC* _HandlePostProcess_b__1_0(::System::Collections::Generic::IEnumerable_1<::LJNBEGPNLDL*>* a1)
		{
			return ((::BFEOAPAHKLC*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LJNBEGPNLDL*>*))((::PBYTE)hIl2Cpp + ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_0_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_2(::LJNBEGPNLDL* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::LJNBEGPNLDL*))((::PBYTE)hIl2Cpp + ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_2_OFFSET))(this, a1);
		}

		::KCAMGNGBBLN* _HandlePostProcess_b__1_1(::System::Collections::Generic::IEnumerable_1<::HCOCIAMDBDO*>* a1)
		{
			return ((::KCAMGNGBBLN*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::HCOCIAMDBDO*>*))((::PBYTE)hIl2Cpp + ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_1_OFFSET))(this, a1);
		}

		::RPG::Client::RogueBuffData* _HandlePostProcess_b__1_3(::HCOCIAMDBDO* a1)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::HCOCIAMDBDO*))((::PBYTE)hIl2Cpp + ILOFKJGANPP___C__HANDLEPOSTPROCESS_B__1_3_OFFSET))(this, a1);
		}

	};

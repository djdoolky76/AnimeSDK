#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IFGHNHEJCLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F0B1C0)
#define IFGHNHEJCLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0B200)
#define IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_0_OFFSET UNITYSDK_OFFSET(0x15F0B210)
#define IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_2_OFFSET UNITYSDK_OFFSET(0x15F0B220)

inline static constexpr unsigned int IFGHNHEJCLF___c_TypeDefinitionIndex = 79670;

	class IFGHNHEJCLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CDE0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CDE8);
		}

		static ::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>** StaticGet___9__26_2()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> __CreateRequireInfos_b__26_0(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_0_OFFSET))(this, a1);
		}

		::System::Boolean __CreateRequireInfos_b__26_2(::FKLECLLJCEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + IFGHNHEJCLF___C___CREATEREQUIREINFOS_B__26_2_OFFSET))(this, a1);
		}

	};

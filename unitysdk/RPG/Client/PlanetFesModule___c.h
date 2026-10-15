#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELJLJHFNNLN;
namespace RPG::Client { class PlanetFesAvatarData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_PLANETFESMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDBBA060)
#define RPG_CLIENT_PLANETFESMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDBBA0A0)
#define RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET UNITYSDK_OFFSET(0xDBBA180)
#define RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET UNITYSDK_OFFSET(0xDBBA0B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesModule___c_TypeDefinitionIndex = 66647;

	class PlanetFesModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x25610);
		}

		static ::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::ELJLJHFNNLN*>*, ::System::Collections::Generic::IEnumerable_1<::ELJLJHFNNLN*>*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::Collections::Generic::Dictionary_2<::System::Int32, ::ELJLJHFNNLN*>*, ::System::Collections::Generic::IEnumerable_1<::ELJLJHFNNLN*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x25618);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>** StaticGet___9__153_1()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesAvatarData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x25620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::ELJLJHFNNLN*>* __CombineSameSourceBuffs_b__42_0(::System::Collections::Generic::Dictionary_2<::System::Int32, ::ELJLJHFNNLN*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::ELJLJHFNNLN*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ELJLJHFNNLN*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C___COMBINESAMESOURCEBUFFS_B__42_0_OFFSET))(this, a1);
		}

		::System::Boolean _CalcIncomeAfterSwitchAvatar_b__153_1(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESMODULE___C__CALCINCOMEAFTERSWITCHAVATAR_B__153_1_OFFSET))(this, a1);
		}

	};
}

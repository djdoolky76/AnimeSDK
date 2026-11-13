#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RaidConfigType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IIIHJBDBCEJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0xC9883E0)
#define IIIHJBDBCEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC9889B0)
#define IIIHJBDBCEJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0xC988550)
#define IIIHJBDBCEJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0xC987E50)
#define IIIHJBDBCEJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0xC9880E0)
#define IIIHJBDBCEJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0xC9885F0)
#define IIIHJBDBCEJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0xC988640)
#define IIIHJBDBCEJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0xC988420)
#define IIIHJBDBCEJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0xC988080)
#define IIIHJBDBCEJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xC988250)
#define IIIHJBDBCEJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0xC9884B0)
#define IIIHJBDBCEJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0xC987DD0)

inline static constexpr unsigned int IIIHJBDBCEJ_TypeDefinitionIndex = 14761;

	class IIIHJBDBCEJ : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IIIHJBDBCEJ")->GetStaticField(0x20360);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IIIHJBDBCEJ")->GetStaticField(0x20368);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>**)UnitySDK::FromName("", "IIIHJBDBCEJ")->GetStaticField(0x20370);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IIIHJBDBCEJ")->GetStaticField(0x6E90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IIIHJBDBCEJ")->GetStaticField(0x6E91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RaidTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RaidTypeConfigRow* LMBKNCAIDLC(::RPG::GameCore::RaidConfigType a1)
		{
			return ((::RPG::GameCore::RaidTypeConfigRow*(*)(::RPG::GameCore::RaidConfigType))((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RaidTypeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RaidTypeConfigRow*))((::PBYTE)hIl2Cpp + IIIHJBDBCEJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

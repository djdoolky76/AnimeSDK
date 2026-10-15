#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/DanmuType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DanmuGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHNONIDJBDN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF35A0)
#define FHNONIDJBDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDF4200)
#define FHNONIDJBDN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF3940)
#define FHNONIDJBDN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF35E0)
#define FHNONIDJBDN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF3EB0)
#define FHNONIDJBDN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDF39E0)
#define FHNONIDJBDN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDF3A30)
#define FHNONIDJBDN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF3810)
#define FHNONIDJBDN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF3E50)
#define FHNONIDJBDN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF4020)
#define FHNONIDJBDN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF38A0)
#define FHNONIDJBDN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF3DD0)

inline static constexpr unsigned int FHNONIDJBDN_TypeDefinitionIndex = 15194;

	class FHNONIDJBDN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*>**)UnitySDK::FromName("", "FHNONIDJBDN")->GetStaticField(0x13640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FHNONIDJBDN")->GetStaticField(0x13648);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "FHNONIDJBDN")->GetStaticField(0x13650);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FHNONIDJBDN")->GetStaticField(0x4410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FHNONIDJBDN")->GetStaticField(0x4411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FHNONIDJBDN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FHNONIDJBDN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FHNONIDJBDN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DanmuGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DanmuGroupRow*))((::PBYTE)hIl2Cpp + FHNONIDJBDN_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*>*(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DanmuGroupRow*>(*)())((::PBYTE)hIl2Cpp + FHNONIDJBDN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DanmuGroupRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::DanmuType a2)
		{
			return ((::RPG::GameCore::DanmuGroupRow*(*)(::System::UInt32, ::RPG::GameCore::DanmuType))((::PBYTE)hIl2Cpp + FHNONIDJBDN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};

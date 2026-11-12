#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PSTrophyGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HMGGLHKNJGG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0A6030)
#define HMGGLHKNJGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6600)
#define HMGGLHKNJGG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0A61A0)
#define HMGGLHKNJGG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0A5AA0)
#define HMGGLHKNJGG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0A5D30)
#define HMGGLHKNJGG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0A6240)
#define HMGGLHKNJGG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0A6290)
#define HMGGLHKNJGG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0A6070)
#define HMGGLHKNJGG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0A5CD0)
#define HMGGLHKNJGG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0A5EA0)
#define HMGGLHKNJGG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0A6100)
#define HMGGLHKNJGG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0A5A20)

inline static constexpr unsigned int HMGGLHKNJGG_TypeDefinitionIndex = 13152;

	class HMGGLHKNJGG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HMGGLHKNJGG")->GetStaticField(0x16DA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>**)UnitySDK::FromName("", "HMGGLHKNJGG")->GetStaticField(0x16DA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HMGGLHKNJGG")->GetStaticField(0x16DB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMGGLHKNJGG")->GetStaticField(0x4BA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HMGGLHKNJGG")->GetStaticField(0x4BA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>*(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PSTrophyGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PSTrophyGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMGGLHKNJGG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMGGLHKNJGG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HMGGLHKNJGG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HMGGLHKNJGG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HMGGLHKNJGG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PSTrophyGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PSTrophyGroupRow*))((::PBYTE)hIl2Cpp + HMGGLHKNJGG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

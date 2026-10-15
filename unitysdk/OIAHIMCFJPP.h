#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UniqueActorRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIAHIMCFJPP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D281E20)
#define OIAHIMCFJPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2823F0)
#define OIAHIMCFJPP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D281F90)
#define OIAHIMCFJPP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D281870)
#define OIAHIMCFJPP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D281B00)
#define OIAHIMCFJPP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D282030)
#define OIAHIMCFJPP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D282080)
#define OIAHIMCFJPP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D281E60)
#define OIAHIMCFJPP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D281AA0)
#define OIAHIMCFJPP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D281C70)
#define OIAHIMCFJPP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D281EF0)
#define OIAHIMCFJPP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2817F0)

inline static constexpr unsigned int OIAHIMCFJPP_TypeDefinitionIndex = 13108;

	class OIAHIMCFJPP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>**)UnitySDK::FromName("", "OIAHIMCFJPP")->GetStaticField(0x37300);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OIAHIMCFJPP")->GetStaticField(0x37308);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OIAHIMCFJPP")->GetStaticField(0x37310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OIAHIMCFJPP")->GetStaticField(0xBB00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OIAHIMCFJPP")->GetStaticField(0xBB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>*(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniqueActorRow*>(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::UniqueActorRow* LMBKNCAIDLC(::System::String* a1)
		{
			return ((::RPG::GameCore::UniqueActorRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + OIAHIMCFJPP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAHIMCFJPP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OIAHIMCFJPP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OIAHIMCFJPP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OIAHIMCFJPP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::UniqueActorRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UniqueActorRow*))((::PBYTE)hIl2Cpp + OIAHIMCFJPP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

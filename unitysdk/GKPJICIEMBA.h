#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackPhotoNpcConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKPJICIEMBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE332D0)
#define GKPJICIEMBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE33900)
#define GKPJICIEMBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE33440)
#define GKPJICIEMBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE32CC0)
#define GKPJICIEMBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE32F50)
#define GKPJICIEMBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE334E0)
#define GKPJICIEMBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE33530)
#define GKPJICIEMBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE33310)
#define GKPJICIEMBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE32EF0)
#define GKPJICIEMBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE330C0)
#define GKPJICIEMBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE333A0)
#define GKPJICIEMBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE32C40)

inline static constexpr unsigned int GKPJICIEMBA_TypeDefinitionIndex = 12514;

	class GKPJICIEMBA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x16F00);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x16F08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x16F10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x4DC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x4DC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>*(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrackPhotoNpcConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::TrackPhotoNpcConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GKPJICIEMBA_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKPJICIEMBA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GKPJICIEMBA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GKPJICIEMBA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GKPJICIEMBA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrackPhotoNpcConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrackPhotoNpcConfigRow*))((::PBYTE)hIl2Cpp + GKPJICIEMBA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

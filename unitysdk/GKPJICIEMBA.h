#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackPhotoNpcConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GKPJICIEMBA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE613D0)
#define GKPJICIEMBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE61A00)
#define GKPJICIEMBA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE61540)
#define GKPJICIEMBA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE60DC0)
#define GKPJICIEMBA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE61050)
#define GKPJICIEMBA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE615E0)
#define GKPJICIEMBA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE61630)
#define GKPJICIEMBA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE61410)
#define GKPJICIEMBA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE60FF0)
#define GKPJICIEMBA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE611C0)
#define GKPJICIEMBA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE614A0)
#define GKPJICIEMBA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE60D40)

inline static constexpr unsigned int GKPJICIEMBA_TypeDefinitionIndex = 12514;

	class GKPJICIEMBA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrackPhotoNpcConfigRow*>**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x18FB0);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x18FB8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x18FC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x5C30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GKPJICIEMBA")->GetStaticField(0x5C31);
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

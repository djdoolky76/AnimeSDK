#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityPhotoExhibitionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FNKKGHHJLAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDE18C0)
#define FNKKGHHJLAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDE1E40)
#define FNKKGHHJLAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDE1A30)
#define FNKKGHHJLAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDE13B0)
#define FNKKGHHJLAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDE1640)
#define FNKKGHHJLAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDE1AD0)
#define FNKKGHHJLAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDE1B20)
#define FNKKGHHJLAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDE1900)
#define FNKKGHHJLAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDE15E0)
#define FNKKGHHJLAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDE1770)
#define FNKKGHHJLAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDE1990)
#define FNKKGHHJLAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDE1330)

inline static constexpr unsigned int FNKKGHHJLAE_TypeDefinitionIndex = 12117;

	class FNKKGHHJLAE : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FNKKGHHJLAE")->GetStaticField(0x132C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*>**)UnitySDK::FromName("", "FNKKGHHJLAE")->GetStaticField(0x132C8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FNKKGHHJLAE")->GetStaticField(0x132D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FNKKGHHJLAE")->GetStaticField(0x3E40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FNKKGHHJLAE")->GetStaticField(0x3E41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*>*(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityPhotoExhibitionRow*>(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityPhotoExhibitionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityPhotoExhibitionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FNKKGHHJLAE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKKGHHJLAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FNKKGHHJLAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNKKGHHJLAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FNKKGHHJLAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityPhotoExhibitionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityPhotoExhibitionRow*))((::PBYTE)hIl2Cpp + FNKKGHHJLAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

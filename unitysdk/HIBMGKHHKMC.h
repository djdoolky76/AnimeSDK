#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoExhibitionDetailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIBMGKHHKMC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAE000)
#define HIBMGKHHKMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAE580)
#define HIBMGKHHKMC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAE170)
#define HIBMGKHHKMC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEADAB0)
#define HIBMGKHHKMC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEADD40)
#define HIBMGKHHKMC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAE210)
#define HIBMGKHHKMC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAE260)
#define HIBMGKHHKMC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAE040)
#define HIBMGKHHKMC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEADCE0)
#define HIBMGKHHKMC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEADEB0)
#define HIBMGKHHKMC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAE0D0)
#define HIBMGKHHKMC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEADA30)

inline static constexpr unsigned int HIBMGKHHKMC_TypeDefinitionIndex = 12119;

	class HIBMGKHHKMC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*>**)UnitySDK::FromName("", "HIBMGKHHKMC")->GetStaticField(0x1DFE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HIBMGKHHKMC")->GetStaticField(0x1DFE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIBMGKHHKMC")->GetStaticField(0x1DFF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIBMGKHHKMC")->GetStaticField(0x6D00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIBMGKHHKMC")->GetStaticField(0x6D01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*>*(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoExhibitionDetailRow*>(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PhotoExhibitionDetailRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PhotoExhibitionDetailRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIBMGKHHKMC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIBMGKHHKMC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIBMGKHHKMC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIBMGKHHKMC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HIBMGKHHKMC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PhotoExhibitionDetailRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoExhibitionDetailRow*))((::PBYTE)hIl2Cpp + HIBMGKHHKMC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

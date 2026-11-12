#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KDMNDIOLMDF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E274FE0)
#define KDMNDIOLMDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2755B0)
#define KDMNDIOLMDF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E275150)
#define KDMNDIOLMDF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E274A50)
#define KDMNDIOLMDF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E274CE0)
#define KDMNDIOLMDF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2751F0)
#define KDMNDIOLMDF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E275240)
#define KDMNDIOLMDF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E275020)
#define KDMNDIOLMDF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E274C80)
#define KDMNDIOLMDF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E274E50)
#define KDMNDIOLMDF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2750B0)
#define KDMNDIOLMDF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2749D0)

inline static constexpr unsigned int KDMNDIOLMDF_TypeDefinitionIndex = 14645;

	class KDMNDIOLMDF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>**)UnitySDK::FromName("", "KDMNDIOLMDF")->GetStaticField(0x2C790);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KDMNDIOLMDF")->GetStaticField(0x2C798);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KDMNDIOLMDF")->GetStaticField(0x2C7A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KDMNDIOLMDF")->GetStaticField(0x9260);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KDMNDIOLMDF")->GetStaticField(0x9261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PhotoGraphConfigRow* LMBKNCAIDLC(::RPG::GameCore::EmotionID a1)
		{
			return ((::RPG::GameCore::PhotoGraphConfigRow*(*)(::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + KDMNDIOLMDF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMNDIOLMDF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KDMNDIOLMDF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMNDIOLMDF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KDMNDIOLMDF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PhotoGraphConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PhotoGraphConfigRow*))((::PBYTE)hIl2Cpp + KDMNDIOLMDF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HAAEKFLMCBN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE7BC80)
#define HAAEKFLMCBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE7C200)
#define HAAEKFLMCBN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE7BDF0)
#define HAAEKFLMCBN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE7B730)
#define HAAEKFLMCBN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE7B9C0)
#define HAAEKFLMCBN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE7BE90)
#define HAAEKFLMCBN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE7BEE0)
#define HAAEKFLMCBN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE7BCC0)
#define HAAEKFLMCBN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE7B960)
#define HAAEKFLMCBN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE7BB30)
#define HAAEKFLMCBN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE7BD50)
#define HAAEKFLMCBN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE7B6B0)

inline static constexpr unsigned int HAAEKFLMCBN_TypeDefinitionIndex = 12505;

	class HAAEKFLMCBN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*>**)UnitySDK::FromName("", "HAAEKFLMCBN")->GetStaticField(0x1B000);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HAAEKFLMCBN")->GetStaticField(0x1B008);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HAAEKFLMCBN")->GetStaticField(0x1B010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HAAEKFLMCBN")->GetStaticField(0x6170);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HAAEKFLMCBN")->GetStaticField(0x6171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*>*(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionLevelRow*>(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HAAEKFLMCBN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAAEKFLMCBN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HAAEKFLMCBN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAAEKFLMCBN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HAAEKFLMCBN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityTelevisionLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionLevelRow*))((::PBYTE)hIl2Cpp + HAAEKFLMCBN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

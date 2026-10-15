#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamPlaceInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABICKGIENKK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC719B0)
#define ABICKGIENKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC71F80)
#define ABICKGIENKK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC71B20)
#define ABICKGIENKK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC71420)
#define ABICKGIENKK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC716B0)
#define ABICKGIENKK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC71BC0)
#define ABICKGIENKK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC71C10)
#define ABICKGIENKK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC719F0)
#define ABICKGIENKK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC71650)
#define ABICKGIENKK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC71820)
#define ABICKGIENKK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC71A80)
#define ABICKGIENKK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC713A0)

inline static constexpr unsigned int ABICKGIENKK_TypeDefinitionIndex = 14305;

	class ABICKGIENKK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ABICKGIENKK")->GetStaticField(0x3D5D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>**)UnitySDK::FromName("", "ABICKGIENKK")->GetStaticField(0x3D5D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ABICKGIENKK")->GetStaticField(0x3D5E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ABICKGIENKK")->GetStaticField(0xC4B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ABICKGIENKK")->GetStaticField(0xC4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>*(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PamPlaceInfoRow* LMBKNCAIDLC(::RPG::GameCore::PamPlaceType a1)
		{
			return ((::RPG::GameCore::PamPlaceInfoRow*(*)(::RPG::GameCore::PamPlaceType))((::PBYTE)hIl2Cpp + ABICKGIENKK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABICKGIENKK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ABICKGIENKK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABICKGIENKK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ABICKGIENKK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PamPlaceInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PamPlaceInfoRow*))((::PBYTE)hIl2Cpp + ABICKGIENKK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

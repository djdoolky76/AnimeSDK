#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraGalleryTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PJDGFBKAIKP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2C6820)
#define PJDGFBKAIKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2C6DA0)
#define PJDGFBKAIKP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2C6990)
#define PJDGFBKAIKP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2C62D0)
#define PJDGFBKAIKP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2C6560)
#define PJDGFBKAIKP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2C6A30)
#define PJDGFBKAIKP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2C6A80)
#define PJDGFBKAIKP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2C6860)
#define PJDGFBKAIKP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2C6500)
#define PJDGFBKAIKP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2C6690)
#define PJDGFBKAIKP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2C68F0)
#define PJDGFBKAIKP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2C6250)

inline static constexpr unsigned int PJDGFBKAIKP_TypeDefinitionIndex = 13053;

	class PJDGFBKAIKP : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PJDGFBKAIKP")->GetStaticField(0x50CE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PJDGFBKAIKP")->GetStaticField(0x50CE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>**)UnitySDK::FromName("", "PJDGFBKAIKP")->GetStaticField(0x50CF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PJDGFBKAIKP")->GetStaticField(0x12370);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PJDGFBKAIKP")->GetStaticField(0x12371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>*(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraGalleryTalkRow* LMBKNCAIDLC(::RPG::GameCore::ChimeraTalkConditionType a1)
		{
			return ((::RPG::GameCore::ChimeraGalleryTalkRow*(*)(::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + PJDGFBKAIKP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJDGFBKAIKP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PJDGFBKAIKP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PJDGFBKAIKP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PJDGFBKAIKP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraGalleryTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraGalleryTalkRow*))((::PBYTE)hIl2Cpp + PJDGFBKAIKP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

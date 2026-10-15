#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarCobrandConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKKADGPBGIN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEBC650)
#define HKKADGPBGIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEBCBD0)
#define HKKADGPBGIN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEBC7C0)
#define HKKADGPBGIN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEBC100)
#define HKKADGPBGIN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEBC390)
#define HKKADGPBGIN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEBC860)
#define HKKADGPBGIN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEBC8B0)
#define HKKADGPBGIN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEBC690)
#define HKKADGPBGIN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEBC330)
#define HKKADGPBGIN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEBC4C0)
#define HKKADGPBGIN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEBC720)
#define HKKADGPBGIN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEBC080)

inline static constexpr unsigned int HKKADGPBGIN_TypeDefinitionIndex = 12706;

	class HKKADGPBGIN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HKKADGPBGIN")->GetStaticField(0x1ED10);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HKKADGPBGIN")->GetStaticField(0x1ED18);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*>**)UnitySDK::FromName("", "HKKADGPBGIN")->GetStaticField(0x1ED20);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HKKADGPBGIN")->GetStaticField(0x70F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HKKADGPBGIN")->GetStaticField(0x70F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCobrandConfigRow*>(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarCobrandConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarCobrandConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HKKADGPBGIN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKKADGPBGIN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HKKADGPBGIN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HKKADGPBGIN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HKKADGPBGIN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarCobrandConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarCobrandConfigRow*))((::PBYTE)hIl2Cpp + HKKADGPBGIN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

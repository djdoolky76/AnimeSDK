#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotBookDeleteInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNJABDILGEB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D024D90)
#define JNJABDILGEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D025970)
#define JNJABDILGEB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D025130)
#define JNJABDILGEB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D024DD0)
#define JNJABDILGEB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D025670)
#define JNJABDILGEB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0251D0)
#define JNJABDILGEB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D025220)
#define JNJABDILGEB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D025000)
#define JNJABDILGEB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D025610)
#define JNJABDILGEB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0257E0)
#define JNJABDILGEB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D025090)
#define JNJABDILGEB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D025590)

inline static constexpr unsigned int JNJABDILGEB_TypeDefinitionIndex = 15272;

	class JNJABDILGEB : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JNJABDILGEB")->GetStaticField(0x2FDE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JNJABDILGEB")->GetStaticField(0x2FDE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*>**)UnitySDK::FromName("", "JNJABDILGEB")->GetStaticField(0x2FDF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JNJABDILGEB")->GetStaticField(0x9DF0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JNJABDILGEB")->GetStaticField(0x9DF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JNJABDILGEB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNJABDILGEB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JNJABDILGEB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TarotBookDeleteInfoRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TarotBookDeleteInfoRow*))((::PBYTE)hIl2Cpp + JNJABDILGEB_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*>*(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookDeleteInfoRow*>(*)())((::PBYTE)hIl2Cpp + JNJABDILGEB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TarotBookDeleteInfoRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TarotBookDeleteInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JNJABDILGEB_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

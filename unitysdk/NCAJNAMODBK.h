#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NCAJNAMODBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E896F10)
#define NCAJNAMODBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E897490)
#define NCAJNAMODBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E897080)
#define NCAJNAMODBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E896A00)
#define NCAJNAMODBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E896C90)
#define NCAJNAMODBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E897120)
#define NCAJNAMODBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E897170)
#define NCAJNAMODBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E896F50)
#define NCAJNAMODBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E896C30)
#define NCAJNAMODBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E896DC0)
#define NCAJNAMODBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E896FE0)
#define NCAJNAMODBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E896980)

inline static constexpr unsigned int NCAJNAMODBK_TypeDefinitionIndex = 15156;

	class NCAJNAMODBK : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NCAJNAMODBK")->GetStaticField(0x4DD70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*>**)UnitySDK::FromName("", "NCAJNAMODBK")->GetStaticField(0x4DD78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NCAJNAMODBK")->GetStaticField(0x4DD80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NCAJNAMODBK")->GetStaticField(0x11180);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NCAJNAMODBK")->GetStaticField(0x11181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournAvatarRow*>(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournAvatarRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NCAJNAMODBK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCAJNAMODBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NCAJNAMODBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NCAJNAMODBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NCAJNAMODBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournAvatarRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournAvatarRow*))((::PBYTE)hIl2Cpp + NCAJNAMODBK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

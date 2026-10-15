#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournGambleGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPGOEPIGPIB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D31A290)
#define PPGOEPIGPIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D31A860)
#define PPGOEPIGPIB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D31A400)
#define PPGOEPIGPIB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D319D00)
#define PPGOEPIGPIB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D319F90)
#define PPGOEPIGPIB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D31A4A0)
#define PPGOEPIGPIB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D31A4F0)
#define PPGOEPIGPIB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D31A2D0)
#define PPGOEPIGPIB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D319F30)
#define PPGOEPIGPIB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D31A100)
#define PPGOEPIGPIB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D31A360)
#define PPGOEPIGPIB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D319C80)

inline static constexpr unsigned int PPGOEPIGPIB_TypeDefinitionIndex = 15042;

	class PPGOEPIGPIB : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x47550);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x47558);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x47560);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x10FB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PPGOEPIGPIB")->GetStaticField(0x10FB1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>*(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournGambleGroupRow*>(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournGambleGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournGambleGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGOEPIGPIB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournGambleGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournGambleGroupRow*))((::PBYTE)hIl2Cpp + PPGOEPIGPIB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

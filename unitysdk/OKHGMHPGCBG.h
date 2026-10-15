#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraTeamTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OKHGMHPGCBG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D260C30)
#define OKHGMHPGCBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2611B0)
#define OKHGMHPGCBG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D260DA0)
#define OKHGMHPGCBG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2606E0)
#define OKHGMHPGCBG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D260970)
#define OKHGMHPGCBG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D260E40)
#define OKHGMHPGCBG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D260E90)
#define OKHGMHPGCBG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D260C70)
#define OKHGMHPGCBG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D260910)
#define OKHGMHPGCBG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D260AA0)
#define OKHGMHPGCBG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D260D00)
#define OKHGMHPGCBG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D260660)

inline static constexpr unsigned int OKHGMHPGCBG_TypeDefinitionIndex = 13035;

	class OKHGMHPGCBG : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OKHGMHPGCBG")->GetStaticField(0x48A50);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OKHGMHPGCBG")->GetStaticField(0x48A58);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*>**)UnitySDK::FromName("", "OKHGMHPGCBG")->GetStaticField(0x48A60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OKHGMHPGCBG")->GetStaticField(0x10E50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OKHGMHPGCBG")->GetStaticField(0x10E51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*>*(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTeamTalkRow*>(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraTeamTalkRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraTeamTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OKHGMHPGCBG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKHGMHPGCBG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OKHGMHPGCBG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OKHGMHPGCBG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OKHGMHPGCBG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraTeamTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraTeamTalkRow*))((::PBYTE)hIl2Cpp + OKHGMHPGCBG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

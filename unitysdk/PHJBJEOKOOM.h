#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarCutinChangeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PHJBJEOKOOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2E7D00)
#define PHJBJEOKOOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E82D0)
#define PHJBJEOKOOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2E7E70)
#define PHJBJEOKOOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2E7770)
#define PHJBJEOKOOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2E7A00)
#define PHJBJEOKOOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2E7F10)
#define PHJBJEOKOOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2E7F60)
#define PHJBJEOKOOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2E7D40)
#define PHJBJEOKOOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2E79A0)
#define PHJBJEOKOOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2E7B70)
#define PHJBJEOKOOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2E7DD0)
#define PHJBJEOKOOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2E76F0)

inline static constexpr unsigned int PHJBJEOKOOM_TypeDefinitionIndex = 12729;

	class PHJBJEOKOOM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>**)UnitySDK::FromName("", "PHJBJEOKOOM")->GetStaticField(0x40130);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PHJBJEOKOOM")->GetStaticField(0x40138);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PHJBJEOKOOM")->GetStaticField(0x40140);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PHJBJEOKOOM")->GetStaticField(0xDAD0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PHJBJEOKOOM")->GetStaticField(0xDAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarCutinChangeConfigRow*>(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarCutinChangeConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarCutinChangeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PHJBJEOKOOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHJBJEOKOOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PHJBJEOKOOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PHJBJEOKOOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PHJBJEOKOOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::AvatarCutinChangeConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarCutinChangeConfigRow*))((::PBYTE)hIl2Cpp + PHJBJEOKOOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

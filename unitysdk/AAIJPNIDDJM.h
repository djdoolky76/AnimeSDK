#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTalentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AAIJPNIDDJM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DE3D140)
#define AAIJPNIDDJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE3D6C0)
#define AAIJPNIDDJM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DE3D2B0)
#define AAIJPNIDDJM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DE3CBF0)
#define AAIJPNIDDJM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DE3CE80)
#define AAIJPNIDDJM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DE3D350)
#define AAIJPNIDDJM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DE3D3A0)
#define AAIJPNIDDJM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DE3D180)
#define AAIJPNIDDJM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DE3CE20)
#define AAIJPNIDDJM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DE3CFB0)
#define AAIJPNIDDJM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DE3D210)
#define AAIJPNIDDJM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DE3CB70)

inline static constexpr unsigned int AAIJPNIDDJM_TypeDefinitionIndex = 13681;

	class AAIJPNIDDJM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AAIJPNIDDJM")->GetStaticField(0x2AEB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>**)UnitySDK::FromName("", "AAIJPNIDDJM")->GetStaticField(0x2AEB8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AAIJPNIDDJM")->GetStaticField(0x2AEC0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AAIJPNIDDJM")->GetStaticField(0x8CC0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AAIJPNIDDJM")->GetStaticField(0x8CC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTalentConfigRow*>(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTalentConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTalentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AAIJPNIDDJM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAIJPNIDDJM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AAIJPNIDDJM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AAIJPNIDDJM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AAIJPNIDDJM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightTalentConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightTalentConfigRow*))((::PBYTE)hIl2Cpp + AAIJPNIDDJM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

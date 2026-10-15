#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionSpEquipRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPDHNHNNPPD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2BBEB0)
#define OPDHNHNNPPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2BC480)
#define OPDHNHNNPPD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2BC020)
#define OPDHNHNNPPD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2BB920)
#define OPDHNHNNPPD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2BBBB0)
#define OPDHNHNNPPD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2BC0C0)
#define OPDHNHNNPPD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2BC110)
#define OPDHNHNNPPD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2BBEF0)
#define OPDHNHNNPPD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2BBB50)
#define OPDHNHNNPPD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2BBD20)
#define OPDHNHNNPPD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2BBF80)
#define OPDHNHNNPPD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2BB8A0)

inline static constexpr unsigned int OPDHNHNNPPD_TypeDefinitionIndex = 11834;

	class OPDHNHNNPPD : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "OPDHNHNNPPD")->GetStaticField(0x3D350);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>**)UnitySDK::FromName("", "OPDHNHNNPPD")->GetStaticField(0x3D358);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OPDHNHNNPPD")->GetStaticField(0x3D360);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OPDHNHNNPPD")->GetStaticField(0xD1F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OPDHNHNNPPD")->GetStaticField(0xD1F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>*(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestionSpEquipRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestionSpEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OPDHNHNNPPD_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPDHNHNNPPD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OPDHNHNNPPD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OPDHNHNNPPD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OPDHNHNNPPD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestionSpEquipRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionSpEquipRow*))((::PBYTE)hIl2Cpp + OPDHNHNNPPD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

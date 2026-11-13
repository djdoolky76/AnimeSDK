#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityResidentPanelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DJLPKFELDEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7F77A0)
#define DJLPKFELDEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7F7D20)
#define DJLPKFELDEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7F7910)
#define DJLPKFELDEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7F7250)
#define DJLPKFELDEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7F74E0)
#define DJLPKFELDEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7F79B0)
#define DJLPKFELDEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7F7A00)
#define DJLPKFELDEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7F77E0)
#define DJLPKFELDEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7F7480)
#define DJLPKFELDEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7F7650)
#define DJLPKFELDEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7F7870)
#define DJLPKFELDEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7F71D0)

inline static constexpr unsigned int DJLPKFELDEH_TypeDefinitionIndex = 11257;

	class DJLPKFELDEH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DJLPKFELDEH")->GetStaticField(0x3E930);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DJLPKFELDEH")->GetStaticField(0x3E938);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*>**)UnitySDK::FromName("", "DJLPKFELDEH")->GetStaticField(0x3E940);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DJLPKFELDEH")->GetStaticField(0xC870);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DJLPKFELDEH")->GetStaticField(0xC871);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*>*(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityResidentPanelRow*>(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityResidentPanelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityResidentPanelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DJLPKFELDEH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLPKFELDEH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DJLPKFELDEH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DJLPKFELDEH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DJLPKFELDEH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityResidentPanelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityResidentPanelRow*))((::PBYTE)hIl2Cpp + DJLPKFELDEH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

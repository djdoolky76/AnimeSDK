#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyEventConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CODFKHKLIOJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DCB6990)
#define CODFKHKLIOJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCB7570)
#define CODFKHKLIOJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DCB6D30)
#define CODFKHKLIOJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DCB69D0)
#define CODFKHKLIOJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DCB7270)
#define CODFKHKLIOJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DCB6DD0)
#define CODFKHKLIOJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DCB6E20)
#define CODFKHKLIOJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DCB6C00)
#define CODFKHKLIOJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DCB7210)
#define CODFKHKLIOJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DCB73E0)
#define CODFKHKLIOJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DCB6C90)
#define CODFKHKLIOJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DCB7190)

inline static constexpr unsigned int CODFKHKLIOJ_TypeDefinitionIndex = 15342;

	class CODFKHKLIOJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*>**)UnitySDK::FromName("", "CODFKHKLIOJ")->GetStaticField(0x45110);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CODFKHKLIOJ")->GetStaticField(0x45118);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CODFKHKLIOJ")->GetStaticField(0x45120);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CODFKHKLIOJ")->GetStaticField(0x10690);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CODFKHKLIOJ")->GetStaticField(0x10691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CODFKHKLIOJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CODFKHKLIOJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CODFKHKLIOJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TrainPartyEventConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TrainPartyEventConfigRow*))((::PBYTE)hIl2Cpp + CODFKHKLIOJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventConfigRow*>(*)())((::PBYTE)hIl2Cpp + CODFKHKLIOJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TrainPartyEventConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TrainPartyEventConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CODFKHKLIOJ_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

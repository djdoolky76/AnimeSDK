#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerReturnQuestGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPMKGFPEOOO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1F93B190)
#define JPMKGFPEOOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F93B760)
#define JPMKGFPEOOO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1F93B300)
#define JPMKGFPEOOO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1F93AC00)
#define JPMKGFPEOOO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1F93AE90)
#define JPMKGFPEOOO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1F93B3A0)
#define JPMKGFPEOOO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1F93B3F0)
#define JPMKGFPEOOO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1F93B1D0)
#define JPMKGFPEOOO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1F93AE30)
#define JPMKGFPEOOO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1F93B000)
#define JPMKGFPEOOO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1F93B260)
#define JPMKGFPEOOO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1F93AB80)

inline static constexpr unsigned int JPMKGFPEOOO_TypeDefinitionIndex = 14685;

	class JPMKGFPEOOO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*>**)UnitySDK::FromName("", "JPMKGFPEOOO")->GetStaticField(0x30640);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JPMKGFPEOOO")->GetStaticField(0x30648);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JPMKGFPEOOO")->GetStaticField(0x30650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JPMKGFPEOOO")->GetStaticField(0x9750);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JPMKGFPEOOO")->GetStaticField(0x9751);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*>*(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestGroupRow*>(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnQuestGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PlayerReturnQuestGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JPMKGFPEOOO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPMKGFPEOOO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JPMKGFPEOOO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JPMKGFPEOOO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JPMKGFPEOOO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PlayerReturnQuestGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnQuestGroupRow*))((::PBYTE)hIl2Cpp + JPMKGFPEOOO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

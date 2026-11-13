#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DADHKLJHEOD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EB9B3C0)
#define DADHKLJHEOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9BED0)
#define DADHKLJHEOD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EB9B760)
#define DADHKLJHEOD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EB9B400)
#define DADHKLJHEOD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EB9BC50)
#define DADHKLJHEOD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EB9B800)
#define DADHKLJHEOD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EB9B850)
#define DADHKLJHEOD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EB9B630)
#define DADHKLJHEOD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EB9BBF0)
#define DADHKLJHEOD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EB9BD80)
#define DADHKLJHEOD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EB9B6C0)
#define DADHKLJHEOD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EB9BB70)

inline static constexpr unsigned int DADHKLJHEOD_TypeDefinitionIndex = 15442;

	class DADHKLJHEOD : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x38310);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x38318);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0x38320);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0xB130);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DADHKLJHEOD")->GetStaticField(0xB131);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DADHKLJHEOD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::TextJoinConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + DADHKLJHEOD_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TextJoinConfigRow*>(*)())((::PBYTE)hIl2Cpp + DADHKLJHEOD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::TextJoinConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TextJoinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DADHKLJHEOD_LMBKNCAIDLC_OFFSET))(a1);
		}

	};

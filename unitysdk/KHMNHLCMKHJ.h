#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DepletablePoolContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHMNHLCMKHJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E2883E0)
#define KHMNHLCMKHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2889E0)
#define KHMNHLCMKHJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E288550)
#define KHMNHLCMKHJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E287E10)
#define KHMNHLCMKHJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E2880A0)
#define KHMNHLCMKHJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E2885F0)
#define KHMNHLCMKHJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E288640)
#define KHMNHLCMKHJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E288420)
#define KHMNHLCMKHJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E288040)
#define KHMNHLCMKHJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E288210)
#define KHMNHLCMKHJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E2884B0)
#define KHMNHLCMKHJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E287D90)

inline static constexpr unsigned int KHMNHLCMKHJ_TypeDefinitionIndex = 13200;

	class KHMNHLCMKHJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KHMNHLCMKHJ")->GetStaticField(0x2DE20);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHMNHLCMKHJ")->GetStaticField(0x2DE28);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*>**)UnitySDK::FromName("", "KHMNHLCMKHJ")->GetStaticField(0x2DE30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHMNHLCMKHJ")->GetStaticField(0x9960);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHMNHLCMKHJ")->GetStaticField(0x9961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*>*(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DepletablePoolContentRow*>(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::DepletablePoolContentRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::DepletablePoolContentRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::DepletablePoolContentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DepletablePoolContentRow*))((::PBYTE)hIl2Cpp + KHMNHLCMKHJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

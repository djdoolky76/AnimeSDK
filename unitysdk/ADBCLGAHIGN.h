#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveChapterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ADBCLGAHIGN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC7E650)
#define ADBCLGAHIGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC7EC20)
#define ADBCLGAHIGN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC7E7C0)
#define ADBCLGAHIGN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC7E0C0)
#define ADBCLGAHIGN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC7E350)
#define ADBCLGAHIGN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC7E860)
#define ADBCLGAHIGN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC7E8B0)
#define ADBCLGAHIGN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC7E690)
#define ADBCLGAHIGN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC7E2F0)
#define ADBCLGAHIGN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC7E4C0)
#define ADBCLGAHIGN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC7E720)
#define ADBCLGAHIGN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC7E040)

inline static constexpr unsigned int ADBCLGAHIGN_TypeDefinitionIndex = 11691;

	class ADBCLGAHIGN : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ADBCLGAHIGN")->GetStaticField(0x3DCE0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ADBCLGAHIGN")->GetStaticField(0x3DCE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*>**)UnitySDK::FromName("", "ADBCLGAHIGN")->GetStaticField(0x3DCF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ADBCLGAHIGN")->GetStaticField(0xE950);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ADBCLGAHIGN")->GetStaticField(0xE951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*>*(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveChapterRow*>(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveChapterRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveChapterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ADBCLGAHIGN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBCLGAHIGN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ADBCLGAHIGN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ADBCLGAHIGN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ADBCLGAHIGN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveChapterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveChapterRow*))((::PBYTE)hIl2Cpp + ADBCLGAHIGN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

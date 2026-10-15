#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineAnimGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BBKFNCKJMJJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF6790)
#define BBKFNCKJMJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF6D60)
#define BBKFNCKJMJJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF6900)
#define BBKFNCKJMJJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF6200)
#define BBKFNCKJMJJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF6490)
#define BBKFNCKJMJJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF69A0)
#define BBKFNCKJMJJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF69F0)
#define BBKFNCKJMJJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF67D0)
#define BBKFNCKJMJJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF6430)
#define BBKFNCKJMJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF6600)
#define BBKFNCKJMJJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF6860)
#define BBKFNCKJMJJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF6180)

inline static constexpr unsigned int BBKFNCKJMJJ_TypeDefinitionIndex = 11811;

	class BBKFNCKJMJJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>**)UnitySDK::FromName("", "BBKFNCKJMJJ")->GetStaticField(0x3DB70);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BBKFNCKJMJJ")->GetStaticField(0x3DB78);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BBKFNCKJMJJ")->GetStaticField(0x3DB80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BBKFNCKJMJJ")->GetStaticField(0xD380);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BBKFNCKJMJJ")->GetStaticField(0xD381);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>*(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineAnimGroupRow*>(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveSpineAnimGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveSpineAnimGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveSpineAnimGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineAnimGroupRow*))((::PBYTE)hIl2Cpp + BBKFNCKJMJJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

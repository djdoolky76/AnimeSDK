#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DFGKDPEJCOM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCE90B0)
#define DFGKDPEJCOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCE9680)
#define DFGKDPEJCOM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCE9220)
#define DFGKDPEJCOM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCE8B20)
#define DFGKDPEJCOM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCE8DB0)
#define DFGKDPEJCOM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCE92C0)
#define DFGKDPEJCOM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCE9310)
#define DFGKDPEJCOM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCE90F0)
#define DFGKDPEJCOM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCE8D50)
#define DFGKDPEJCOM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCE8F20)
#define DFGKDPEJCOM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCE9180)
#define DFGKDPEJCOM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCE8AA0)

inline static constexpr unsigned int DFGKDPEJCOM_TypeDefinitionIndex = 11828;

	class DFGKDPEJCOM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DFGKDPEJCOM")->GetStaticField(0x45140);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*>**)UnitySDK::FromName("", "DFGKDPEJCOM")->GetStaticField(0x45148);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DFGKDPEJCOM")->GetStaticField(0x45150);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DFGKDPEJCOM")->GetStaticField(0x104E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DFGKDPEJCOM")->GetStaticField(0x104E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*>*(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionOptionRow*>(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveQuestionOptionRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveQuestionOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DFGKDPEJCOM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFGKDPEJCOM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DFGKDPEJCOM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DFGKDPEJCOM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DFGKDPEJCOM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveQuestionOptionRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionOptionRow*))((::PBYTE)hIl2Cpp + DFGKDPEJCOM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

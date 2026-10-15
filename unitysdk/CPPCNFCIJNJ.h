#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchDetailRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CPPCNFCIJNJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DC97D40)
#define CPPCNFCIJNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC98310)
#define CPPCNFCIJNJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DC97EB0)
#define CPPCNFCIJNJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DC977B0)
#define CPPCNFCIJNJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DC97A40)
#define CPPCNFCIJNJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DC97F50)
#define CPPCNFCIJNJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DC97FA0)
#define CPPCNFCIJNJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DC97D80)
#define CPPCNFCIJNJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DC979E0)
#define CPPCNFCIJNJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DC97BB0)
#define CPPCNFCIJNJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DC97E10)
#define CPPCNFCIJNJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DC97730)

inline static constexpr unsigned int CPPCNFCIJNJ_TypeDefinitionIndex = 11870;

	class CPPCNFCIJNJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CPPCNFCIJNJ")->GetStaticField(0x406A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*>**)UnitySDK::FromName("", "CPPCNFCIJNJ")->GetStaticField(0x406A8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CPPCNFCIJNJ")->GetStaticField(0x406B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CPPCNFCIJNJ")->GetStaticField(0xF4B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CPPCNFCIJNJ")->GetStaticField(0xF4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*>*(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchDetailRow*>(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MarbleMatchDetailRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MarbleMatchDetailRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MarbleMatchDetailRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MarbleMatchDetailRow*))((::PBYTE)hIl2Cpp + CPPCNFCIJNJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

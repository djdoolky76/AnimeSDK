#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PermanentRecordRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EBMFPJIJCLO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD62010)
#define EBMFPJIJCLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD625E0)
#define EBMFPJIJCLO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD62180)
#define EBMFPJIJCLO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD61A80)
#define EBMFPJIJCLO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD61D10)
#define EBMFPJIJCLO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD62220)
#define EBMFPJIJCLO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD62270)
#define EBMFPJIJCLO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD62050)
#define EBMFPJIJCLO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD61CB0)
#define EBMFPJIJCLO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD61E80)
#define EBMFPJIJCLO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD620E0)
#define EBMFPJIJCLO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD61A00)

inline static constexpr unsigned int EBMFPJIJCLO_TypeDefinitionIndex = 14381;

	class EBMFPJIJCLO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*>**)UnitySDK::FromName("", "EBMFPJIJCLO")->GetStaticField(0x53050);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "EBMFPJIJCLO")->GetStaticField(0x53058);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EBMFPJIJCLO")->GetStaticField(0x53060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EBMFPJIJCLO")->GetStaticField(0x12700);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EBMFPJIJCLO")->GetStaticField(0x12701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*>*(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PermanentRecordRow*>(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PermanentRecordRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PermanentRecordRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EBMFPJIJCLO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMFPJIJCLO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBMFPJIJCLO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBMFPJIJCLO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EBMFPJIJCLO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PermanentRecordRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PermanentRecordRow*))((::PBYTE)hIl2Cpp + EBMFPJIJCLO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

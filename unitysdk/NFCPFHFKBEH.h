#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFCPFHFKBEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D4530)
#define NFCPFHFKBEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D4AB0)
#define NFCPFHFKBEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D46A0)
#define NFCPFHFKBEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D3FE0)
#define NFCPFHFKBEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D4270)
#define NFCPFHFKBEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D4740)
#define NFCPFHFKBEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D4790)
#define NFCPFHFKBEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D4570)
#define NFCPFHFKBEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D4210)
#define NFCPFHFKBEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D43A0)
#define NFCPFHFKBEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D4600)
#define NFCPFHFKBEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D3F60)

inline static constexpr unsigned int NFCPFHFKBEH_TypeDefinitionIndex = 12501;

	class NFCPFHFKBEH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x3F870);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x3F878);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x3F880);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0xF060);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0xF061);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>*(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityTelevisionStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NFCPFHFKBEH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFCPFHFKBEH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFCPFHFKBEH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFCPFHFKBEH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NFCPFHFKBEH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ActivityTelevisionStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionStageRow*))((::PBYTE)hIl2Cpp + NFCPFHFKBEH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

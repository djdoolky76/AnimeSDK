#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionStageRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NFCPFHFKBEH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D202190)
#define NFCPFHFKBEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D202710)
#define NFCPFHFKBEH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D202300)
#define NFCPFHFKBEH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D201C40)
#define NFCPFHFKBEH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D201ED0)
#define NFCPFHFKBEH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2023A0)
#define NFCPFHFKBEH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2023F0)
#define NFCPFHFKBEH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2021D0)
#define NFCPFHFKBEH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D201E70)
#define NFCPFHFKBEH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D202000)
#define NFCPFHFKBEH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D202260)
#define NFCPFHFKBEH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D201BC0)

inline static constexpr unsigned int NFCPFHFKBEH_TypeDefinitionIndex = 12501;

	class NFCPFHFKBEH : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x2DFD0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionStageRow*>**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x2DFD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x2DFE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x96D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NFCPFHFKBEH")->GetStaticField(0x96D1);
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

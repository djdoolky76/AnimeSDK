#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGKDDAJKOMI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CCF2120)
#define DGKDDAJKOMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CCF26A0)
#define DGKDDAJKOMI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CCF2290)
#define DGKDDAJKOMI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CCF1C10)
#define DGKDDAJKOMI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CCF1EA0)
#define DGKDDAJKOMI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CCF2330)
#define DGKDDAJKOMI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CCF2380)
#define DGKDDAJKOMI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CCF2160)
#define DGKDDAJKOMI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CCF1E40)
#define DGKDDAJKOMI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CCF1FD0)
#define DGKDDAJKOMI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CCF21F0)
#define DGKDDAJKOMI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CCF1B90)

inline static constexpr unsigned int DGKDDAJKOMI_TypeDefinitionIndex = 12128;

	class DGKDDAJKOMI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x45C40);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x45C48);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x45C50);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x106C0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DGKDDAJKOMI")->GetStaticField(0x106C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>*(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirStageRow*>(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::PixAirStageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PixAirStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKDDAJKOMI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::PixAirStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::PixAirStageRow*))((::PBYTE)hIl2Cpp + DGKDDAJKOMI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StoryLineFloorDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGDAAOKNGNJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1D7470)
#define NGDAAOKNGNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1D8040)
#define NGDAAOKNGNJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1D7810)
#define NGDAAOKNGNJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1D74B0)
#define NGDAAOKNGNJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1D7D40)
#define NGDAAOKNGNJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1D78B0)
#define NGDAAOKNGNJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1D7900)
#define NGDAAOKNGNJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1D76E0)
#define NGDAAOKNGNJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1D7CE0)
#define NGDAAOKNGNJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1D7E70)
#define NGDAAOKNGNJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1D7770)
#define NGDAAOKNGNJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1D7C60)

inline static constexpr unsigned int NGDAAOKNGNJ_TypeDefinitionIndex = 15205;

	class NGDAAOKNGNJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*>**)UnitySDK::FromName("", "NGDAAOKNGNJ")->GetStaticField(0x3FDD0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NGDAAOKNGNJ")->GetStaticField(0x3FDD8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NGDAAOKNGNJ")->GetStaticField(0x3FDE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NGDAAOKNGNJ")->GetStaticField(0xF1A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NGDAAOKNGNJ")->GetStaticField(0xF1A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_CCTOR_OFFSET))();
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::StoryLineFloorDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StoryLineFloorDataRow*))((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*>*(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryLineFloorDataRow*>(*)())((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::StoryLineFloorDataRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::StoryLineFloorDataRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NGDAAOKNGNJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

	};

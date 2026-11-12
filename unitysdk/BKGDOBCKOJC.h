#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BKGDOBCKOJC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E9CEED0)
#define BKGDOBCKOJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CF450)
#define BKGDOBCKOJC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E9CF040)
#define BKGDOBCKOJC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E9CE980)
#define BKGDOBCKOJC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E9CEC10)
#define BKGDOBCKOJC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E9CF0E0)
#define BKGDOBCKOJC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E9CF130)
#define BKGDOBCKOJC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E9CEF10)
#define BKGDOBCKOJC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E9CEBB0)
#define BKGDOBCKOJC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E9CED80)
#define BKGDOBCKOJC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E9CEFA0)
#define BKGDOBCKOJC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E9CE900)

inline static constexpr unsigned int BKGDOBCKOJC_TypeDefinitionIndex = 11031;

	class BKGDOBCKOJC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BKGDOBCKOJC")->GetStaticField(0x46E90);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*>**)UnitySDK::FromName("", "BKGDOBCKOJC")->GetStaticField(0x46E98);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "BKGDOBCKOJC")->GetStaticField(0x46EA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BKGDOBCKOJC")->GetStaticField(0xEC10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BKGDOBCKOJC")->GetStaticField(0xEC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*>*(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceFieldScoreRow*>(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CakeRaceFieldScoreRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceFieldScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BKGDOBCKOJC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKGDOBCKOJC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BKGDOBCKOJC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BKGDOBCKOJC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BKGDOBCKOJC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CakeRaceFieldScoreRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + BKGDOBCKOJC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

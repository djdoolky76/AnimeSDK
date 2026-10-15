#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournWorkbenchFuncRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FJFAMHOEAKN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CDF9E30)
#define FJFAMHOEAKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CDFA400)
#define FJFAMHOEAKN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CDF9FA0)
#define FJFAMHOEAKN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CDF98A0)
#define FJFAMHOEAKN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CDF9B30)
#define FJFAMHOEAKN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CDFA040)
#define FJFAMHOEAKN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CDFA090)
#define FJFAMHOEAKN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CDF9E70)
#define FJFAMHOEAKN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CDF9AD0)
#define FJFAMHOEAKN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CDF9CA0)
#define FJFAMHOEAKN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CDF9F00)
#define FJFAMHOEAKN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CDF9820)

inline static constexpr unsigned int FJFAMHOEAKN_TypeDefinitionIndex = 14971;

	class FJFAMHOEAKN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>**)UnitySDK::FromName("", "FJFAMHOEAKN")->GetStaticField(0x13EC0);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FJFAMHOEAKN")->GetStaticField(0x13EC8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FJFAMHOEAKN")->GetStaticField(0x13ED0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FJFAMHOEAKN")->GetStaticField(0x4540);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FJFAMHOEAKN")->GetStaticField(0x4541);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>*(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournWorkbenchFuncRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournWorkbenchFuncRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FJFAMHOEAKN_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJFAMHOEAKN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FJFAMHOEAKN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FJFAMHOEAKN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FJFAMHOEAKN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournWorkbenchFuncRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournWorkbenchFuncRow*))((::PBYTE)hIl2Cpp + FJFAMHOEAKN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

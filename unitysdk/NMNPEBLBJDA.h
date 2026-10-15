#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMNPEBLBJDA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D239FD0)
#define NMNPEBLBJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D23A550)
#define NMNPEBLBJDA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D23A140)
#define NMNPEBLBJDA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D239A80)
#define NMNPEBLBJDA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D239D10)
#define NMNPEBLBJDA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D23A1E0)
#define NMNPEBLBJDA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D23A230)
#define NMNPEBLBJDA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D23A010)
#define NMNPEBLBJDA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D239CB0)
#define NMNPEBLBJDA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D239E80)
#define NMNPEBLBJDA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D23A0A0)
#define NMNPEBLBJDA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D239A00)

inline static constexpr unsigned int NMNPEBLBJDA_TypeDefinitionIndex = 15032;

	class NMNPEBLBJDA : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x30820);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x30828);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0x30830);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0xA410);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NMNPEBLBJDA")->GetStaticField(0xA411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>*(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHandbookMiracleRow*>(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHandbookMiracleRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHandbookMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMNPEBLBJDA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::RogueTournHandbookMiracleRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + NMNPEBLBJDA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

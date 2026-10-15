#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DAKNHCDMAPO;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHECODIPCEM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD21E60)
#define DHECODIPCEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD22420)
#define DHECODIPCEM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD21FD0)
#define DHECODIPCEM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD218C0)
#define DHECODIPCEM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD21B50)
#define DHECODIPCEM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD22070)
#define DHECODIPCEM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD220C0)
#define DHECODIPCEM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD21EA0)
#define DHECODIPCEM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD21AF0)
#define DHECODIPCEM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD21CC0)
#define DHECODIPCEM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD21F30)
#define DHECODIPCEM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD21840)

inline static constexpr unsigned int DHECODIPCEM_TypeDefinitionIndex = 14949;

	class DHECODIPCEM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DHECODIPCEM")->GetStaticField(0x4C8E0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*>**)UnitySDK::FromName("", "DHECODIPCEM")->GetStaticField(0x4C8E8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DHECODIPCEM")->GetStaticField(0x4C8F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DHECODIPCEM")->GetStaticField(0x11A40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DHECODIPCEM")->GetStaticField(0x11A41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*>*(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DAKNHCDMAPO*>(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_FPHGMAMDFHE_OFFSET))();
		}

		static ::DAKNHCDMAPO* LMBKNCAIDLC(::RPG::GameCore::RogueTournAreaGroupID a1, ::RPG::GameCore::RogueTournMode a2)
		{
			return ((::DAKNHCDMAPO*(*)(::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + DHECODIPCEM_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHECODIPCEM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DHECODIPCEM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DHECODIPCEM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DHECODIPCEM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DAKNHCDMAPO* a1)
		{
			return ((::System::Void(*)(::DAKNHCDMAPO*))((::PBYTE)hIl2Cpp + DHECODIPCEM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

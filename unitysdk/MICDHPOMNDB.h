#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AFHPMNBMPNN;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MICDHPOMNDB_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D183A10)
#define MICDHPOMNDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D183FE0)
#define MICDHPOMNDB_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D183B80)
#define MICDHPOMNDB_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D183480)
#define MICDHPOMNDB_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D183710)
#define MICDHPOMNDB_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D183C20)
#define MICDHPOMNDB_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D183C70)
#define MICDHPOMNDB_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D183A50)
#define MICDHPOMNDB_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1836B0)
#define MICDHPOMNDB_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D183880)
#define MICDHPOMNDB_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D183AE0)
#define MICDHPOMNDB_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D183400)

inline static constexpr unsigned int MICDHPOMNDB_TypeDefinitionIndex = 12821;

	class MICDHPOMNDB : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MICDHPOMNDB")->GetStaticField(0x469D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*>**)UnitySDK::FromName("", "MICDHPOMNDB")->GetStaticField(0x469D8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MICDHPOMNDB")->GetStaticField(0x469E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MICDHPOMNDB")->GetStaticField(0x108F0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MICDHPOMNDB")->GetStaticField(0x108F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*>*(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AFHPMNBMPNN*>(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_FPHGMAMDFHE_OFFSET))();
		}

		static ::AFHPMNBMPNN* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AFHPMNBMPNN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MICDHPOMNDB_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICDHPOMNDB_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MICDHPOMNDB_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MICDHPOMNDB_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MICDHPOMNDB_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AFHPMNBMPNN* a1)
		{
			return ((::System::Void(*)(::AFHPMNBMPNN*))((::PBYTE)hIl2Cpp + MICDHPOMNDB_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

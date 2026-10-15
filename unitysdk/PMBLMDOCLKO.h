#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CKHENKIDNKP;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMBLMDOCLKO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D305050)
#define PMBLMDOCLKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D305620)
#define PMBLMDOCLKO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3051C0)
#define PMBLMDOCLKO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D304AC0)
#define PMBLMDOCLKO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D304D50)
#define PMBLMDOCLKO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D305260)
#define PMBLMDOCLKO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3052B0)
#define PMBLMDOCLKO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D305090)
#define PMBLMDOCLKO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D304CF0)
#define PMBLMDOCLKO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D304EC0)
#define PMBLMDOCLKO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D305120)
#define PMBLMDOCLKO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D304A40)

inline static constexpr unsigned int PMBLMDOCLKO_TypeDefinitionIndex = 11562;

	class PMBLMDOCLKO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*>**)UnitySDK::FromName("", "PMBLMDOCLKO")->GetStaticField(0x45960);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "PMBLMDOCLKO")->GetStaticField(0x45968);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMBLMDOCLKO")->GetStaticField(0x45970);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMBLMDOCLKO")->GetStaticField(0x10AA0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMBLMDOCLKO")->GetStaticField(0x10AA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*>*(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CKHENKIDNKP*>(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_FPHGMAMDFHE_OFFSET))();
		}

		static ::CKHENKIDNKP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CKHENKIDNKP*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMBLMDOCLKO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBLMDOCLKO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMBLMDOCLKO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMBLMDOCLKO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMBLMDOCLKO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CKHENKIDNKP* a1)
		{
			return ((::System::Void(*)(::CKHENKIDNKP*))((::PBYTE)hIl2Cpp + PMBLMDOCLKO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

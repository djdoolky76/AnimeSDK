#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModelIconConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PMDCEGLOCEL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D307260)
#define PMDCEGLOCEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D307830)
#define PMDCEGLOCEL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D3073D0)
#define PMDCEGLOCEL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D306CD0)
#define PMDCEGLOCEL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D306F60)
#define PMDCEGLOCEL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D307470)
#define PMDCEGLOCEL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D3074C0)
#define PMDCEGLOCEL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D3072A0)
#define PMDCEGLOCEL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D306F00)
#define PMDCEGLOCEL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D3070D0)
#define PMDCEGLOCEL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D307330)
#define PMDCEGLOCEL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D306C50)

inline static constexpr unsigned int PMDCEGLOCEL_TypeDefinitionIndex = 12579;

	class PMDCEGLOCEL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PMDCEGLOCEL")->GetStaticField(0x45EE0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>**)UnitySDK::FromName("", "PMDCEGLOCEL")->GetStaticField(0x45EE8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PMDCEGLOCEL")->GetStaticField(0x45EF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PMDCEGLOCEL")->GetStaticField(0x10B70);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PMDCEGLOCEL")->GetStaticField(0x10B71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ModelIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ModelIconConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ModelIconConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PMDCEGLOCEL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMDCEGLOCEL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PMDCEGLOCEL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PMDCEGLOCEL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PMDCEGLOCEL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ModelIconConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ModelIconConfigRow*))((::PBYTE)hIl2Cpp + PMDCEGLOCEL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

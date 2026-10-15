#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class HBNBHDNEEEH;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MEHDIFGGDMO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1233A0)
#define MEHDIFGGDMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D123970)
#define MEHDIFGGDMO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D123510)
#define MEHDIFGGDMO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D122E10)
#define MEHDIFGGDMO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1230A0)
#define MEHDIFGGDMO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1235B0)
#define MEHDIFGGDMO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D123600)
#define MEHDIFGGDMO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1233E0)
#define MEHDIFGGDMO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D123040)
#define MEHDIFGGDMO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D123210)
#define MEHDIFGGDMO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D123470)
#define MEHDIFGGDMO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D122D90)

inline static constexpr unsigned int MEHDIFGGDMO_TypeDefinitionIndex = 11320;

	class MEHDIFGGDMO : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MEHDIFGGDMO")->GetStaticField(0x42BF0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MEHDIFGGDMO")->GetStaticField(0x42BF8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*>**)UnitySDK::FromName("", "MEHDIFGGDMO")->GetStaticField(0x42C00);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MEHDIFGGDMO")->GetStaticField(0xFD80);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MEHDIFGGDMO")->GetStaticField(0xFD81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*>*(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HBNBHDNEEEH*>(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_FPHGMAMDFHE_OFFSET))();
		}

		static ::HBNBHDNEEEH* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::HBNBHDNEEEH*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MEHDIFGGDMO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHDIFGGDMO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MEHDIFGGDMO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MEHDIFGGDMO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MEHDIFGGDMO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::HBNBHDNEEEH* a1)
		{
			return ((::System::Void(*)(::HBNBHDNEEEH*))((::PBYTE)hIl2Cpp + MEHDIFGGDMO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

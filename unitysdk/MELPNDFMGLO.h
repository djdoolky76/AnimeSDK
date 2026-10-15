#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJGCILDAOEP.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class DNFLPDDLIPA;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MELPNDFMGLO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1548B0)
#define MELPNDFMGLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D154EB0)
#define MELPNDFMGLO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D154A20)
#define MELPNDFMGLO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1542D0)
#define MELPNDFMGLO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D154560)
#define MELPNDFMGLO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D154AC0)
#define MELPNDFMGLO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D154B10)
#define MELPNDFMGLO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1548F0)
#define MELPNDFMGLO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D154500)
#define MELPNDFMGLO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1546D0)
#define MELPNDFMGLO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D154980)
#define MELPNDFMGLO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D154250)

inline static constexpr unsigned int MELPNDFMGLO_TypeDefinitionIndex = 12022;

	class MELPNDFMGLO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "MELPNDFMGLO")->GetStaticField(0x49B20);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*>**)UnitySDK::FromName("", "MELPNDFMGLO")->GetStaticField(0x49B28);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MELPNDFMGLO")->GetStaticField(0x49B30);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MELPNDFMGLO")->GetStaticField(0x11460);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MELPNDFMGLO")->GetStaticField(0x11461);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*>*(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::DNFLPDDLIPA*>(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_FPHGMAMDFHE_OFFSET))();
		}

		static ::DNFLPDDLIPA* LMBKNCAIDLC(::System::UInt32 a1, ::LJGCILDAOEP a2)
		{
			return ((::DNFLPDDLIPA*(*)(::System::UInt32, ::LJGCILDAOEP))((::PBYTE)hIl2Cpp + MELPNDFMGLO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MELPNDFMGLO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MELPNDFMGLO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MELPNDFMGLO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MELPNDFMGLO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::DNFLPDDLIPA* a1)
		{
			return ((::System::Void(*)(::DNFLPDDLIPA*))((::PBYTE)hIl2Cpp + MELPNDFMGLO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

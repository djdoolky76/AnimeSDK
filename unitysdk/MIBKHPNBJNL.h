#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class EGEFJOHILLD;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIBKHPNBJNL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D1AE770)
#define MIBKHPNBJNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AED40)
#define MIBKHPNBJNL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D1AE8E0)
#define MIBKHPNBJNL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D1AE1E0)
#define MIBKHPNBJNL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D1AE470)
#define MIBKHPNBJNL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D1AE980)
#define MIBKHPNBJNL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D1AE9D0)
#define MIBKHPNBJNL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D1AE7B0)
#define MIBKHPNBJNL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D1AE410)
#define MIBKHPNBJNL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D1AE5E0)
#define MIBKHPNBJNL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D1AE840)
#define MIBKHPNBJNL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D1AE160)

inline static constexpr unsigned int MIBKHPNBJNL_TypeDefinitionIndex = 11510;

	class MIBKHPNBJNL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MIBKHPNBJNL")->GetStaticField(0x4D300);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*>**)UnitySDK::FromName("", "MIBKHPNBJNL")->GetStaticField(0x4D308);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MIBKHPNBJNL")->GetStaticField(0x4D310);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MIBKHPNBJNL")->GetStaticField(0x11C00);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MIBKHPNBJNL")->GetStaticField(0x11C01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*>*(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::EGEFJOHILLD*>(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_FPHGMAMDFHE_OFFSET))();
		}

		static ::EGEFJOHILLD* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::EGEFJOHILLD*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIBKHPNBJNL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIBKHPNBJNL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIBKHPNBJNL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIBKHPNBJNL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MIBKHPNBJNL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::EGEFJOHILLD* a1)
		{
			return ((::System::Void(*)(::EGEFJOHILLD*))((::PBYTE)hIl2Cpp + MIBKHPNBJNL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

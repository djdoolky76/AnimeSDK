#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class JEBLBMDOOML;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PLHDFMFOOID_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D2D1F80)
#define PLHDFMFOOID_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2D2500)
#define PLHDFMFOOID_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D2D20F0)
#define PLHDFMFOOID_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D2D1A70)
#define PLHDFMFOOID_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2D1D00)
#define PLHDFMFOOID_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D2D2190)
#define PLHDFMFOOID_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D2D21E0)
#define PLHDFMFOOID_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D2D1FC0)
#define PLHDFMFOOID_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D2D1CA0)
#define PLHDFMFOOID_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D2D1E30)
#define PLHDFMFOOID_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D2D2050)
#define PLHDFMFOOID_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2D19F0)

inline static constexpr unsigned int PLHDFMFOOID_TypeDefinitionIndex = 15064;

	class PLHDFMFOOID : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*>**)UnitySDK::FromName("", "PLHDFMFOOID")->GetStaticField(0x514A0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PLHDFMFOOID")->GetStaticField(0x514A8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PLHDFMFOOID")->GetStaticField(0x514B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PLHDFMFOOID")->GetStaticField(0x124E0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PLHDFMFOOID")->GetStaticField(0x124E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*>*(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::JEBLBMDOOML*>(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_FPHGMAMDFHE_OFFSET))();
		}

		static ::JEBLBMDOOML* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::JEBLBMDOOML*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PLHDFMFOOID_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHDFMFOOID_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PLHDFMFOOID_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PLHDFMFOOID_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PLHDFMFOOID_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::JEBLBMDOOML* a1)
		{
			return ((::System::Void(*)(::JEBLBMDOOML*))((::PBYTE)hIl2Cpp + PLHDFMFOOID_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

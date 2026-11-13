#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class NDMMNBDMCNG;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DMGJPHPMGDK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E80C200)
#define DMGJPHPMGDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80C7D0)
#define DMGJPHPMGDK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E80C370)
#define DMGJPHPMGDK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E80BC70)
#define DMGJPHPMGDK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E80BF00)
#define DMGJPHPMGDK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E80C410)
#define DMGJPHPMGDK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E80C460)
#define DMGJPHPMGDK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E80C240)
#define DMGJPHPMGDK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E80BEA0)
#define DMGJPHPMGDK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E80C070)
#define DMGJPHPMGDK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E80C2D0)
#define DMGJPHPMGDK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E80BBF0)

inline static constexpr unsigned int DMGJPHPMGDK_TypeDefinitionIndex = 11539;

	class DMGJPHPMGDK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*>**)UnitySDK::FromName("", "DMGJPHPMGDK")->GetStaticField(0x3FAA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DMGJPHPMGDK")->GetStaticField(0x3FAA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "DMGJPHPMGDK")->GetStaticField(0x3FAB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DMGJPHPMGDK")->GetStaticField(0xCC60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DMGJPHPMGDK")->GetStaticField(0xCC61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*>*(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::NDMMNBDMCNG*>(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_FPHGMAMDFHE_OFFSET))();
		}

		static ::NDMMNBDMCNG* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::NDMMNBDMCNG*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DMGJPHPMGDK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGJPHPMGDK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DMGJPHPMGDK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DMGJPHPMGDK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DMGJPHPMGDK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::NDMMNBDMCNG* a1)
		{
			return ((::System::Void(*)(::NDMMNBDMCNG*))((::PBYTE)hIl2Cpp + DMGJPHPMGDK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

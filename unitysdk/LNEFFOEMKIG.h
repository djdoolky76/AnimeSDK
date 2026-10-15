#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class AENHJIPFJPA;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNEFFOEMKIG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0EBEC0)
#define LNEFFOEMKIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EC490)
#define LNEFFOEMKIG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0EC030)
#define LNEFFOEMKIG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0EB930)
#define LNEFFOEMKIG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0EBBC0)
#define LNEFFOEMKIG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0EC0D0)
#define LNEFFOEMKIG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0EC120)
#define LNEFFOEMKIG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0EBF00)
#define LNEFFOEMKIG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0EBB60)
#define LNEFFOEMKIG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0EBD30)
#define LNEFFOEMKIG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0EBF90)
#define LNEFFOEMKIG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0EB8B0)

inline static constexpr unsigned int LNEFFOEMKIG_TypeDefinitionIndex = 11666;

	class LNEFFOEMKIG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*>**)UnitySDK::FromName("", "LNEFFOEMKIG")->GetStaticField(0x3EE00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LNEFFOEMKIG")->GetStaticField(0x3EE08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LNEFFOEMKIG")->GetStaticField(0x3EE10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LNEFFOEMKIG")->GetStaticField(0xED10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LNEFFOEMKIG")->GetStaticField(0xED11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*>*(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::AENHJIPFJPA*>(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_FPHGMAMDFHE_OFFSET))();
		}

		static ::AENHJIPFJPA* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::AENHJIPFJPA*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LNEFFOEMKIG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNEFFOEMKIG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LNEFFOEMKIG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNEFFOEMKIG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LNEFFOEMKIG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::AENHJIPFJPA* a1)
		{
			return ((::System::Void(*)(::AENHJIPFJPA*))((::PBYTE)hIl2Cpp + LNEFFOEMKIG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

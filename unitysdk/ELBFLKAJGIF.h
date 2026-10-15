#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class IFGDFILPFGL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ELBFLKAJGIF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD99590)
#define ELBFLKAJGIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD99B10)
#define ELBFLKAJGIF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD99700)
#define ELBFLKAJGIF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD99080)
#define ELBFLKAJGIF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD99310)
#define ELBFLKAJGIF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD997A0)
#define ELBFLKAJGIF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD997F0)
#define ELBFLKAJGIF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD995D0)
#define ELBFLKAJGIF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD992B0)
#define ELBFLKAJGIF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD99440)
#define ELBFLKAJGIF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD99660)
#define ELBFLKAJGIF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD99000)

inline static constexpr unsigned int ELBFLKAJGIF_TypeDefinitionIndex = 13976;

	class ELBFLKAJGIF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*>**)UnitySDK::FromName("", "ELBFLKAJGIF")->GetStaticField(0x2900);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "ELBFLKAJGIF")->GetStaticField(0x2908);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "ELBFLKAJGIF")->GetStaticField(0x2910);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "ELBFLKAJGIF")->GetStaticField(0x2090);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "ELBFLKAJGIF")->GetStaticField(0x2091);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*>*(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::IFGDFILPFGL*>(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_FPHGMAMDFHE_OFFSET))();
		}

		static ::IFGDFILPFGL* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::IFGDFILPFGL*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ELBFLKAJGIF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBFLKAJGIF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ELBFLKAJGIF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ELBFLKAJGIF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + ELBFLKAJGIF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::IFGDFILPFGL* a1)
		{
			return ((::System::Void(*)(::IFGDFILPFGL*))((::PBYTE)hIl2Cpp + ELBFLKAJGIF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

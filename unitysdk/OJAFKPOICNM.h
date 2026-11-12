#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class CIFNHLNIFPE;
class FCOEMCEDLNL;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OJAFKPOICNM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E48E7C0)
#define OJAFKPOICNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48ED40)
#define OJAFKPOICNM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E48E930)
#define OJAFKPOICNM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E48E270)
#define OJAFKPOICNM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E48E500)
#define OJAFKPOICNM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E48E9D0)
#define OJAFKPOICNM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E48EA20)
#define OJAFKPOICNM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E48E800)
#define OJAFKPOICNM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E48E4A0)
#define OJAFKPOICNM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E48E670)
#define OJAFKPOICNM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E48E890)
#define OJAFKPOICNM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E48E1F0)

inline static constexpr unsigned int OJAFKPOICNM_TypeDefinitionIndex = 15212;

	class OJAFKPOICNM : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OJAFKPOICNM")->GetStaticField(0x52070);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*>**)UnitySDK::FromName("", "OJAFKPOICNM")->GetStaticField(0x52078);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OJAFKPOICNM")->GetStaticField(0x52080);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OJAFKPOICNM")->GetStaticField(0x100F0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OJAFKPOICNM")->GetStaticField(0x100F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*>*(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::CIFNHLNIFPE*>(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_FPHGMAMDFHE_OFFSET))();
		}

		static ::CIFNHLNIFPE* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::CIFNHLNIFPE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OJAFKPOICNM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJAFKPOICNM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OJAFKPOICNM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJAFKPOICNM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OJAFKPOICNM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::CIFNHLNIFPE* a1)
		{
			return ((::System::Void(*)(::CIFNHLNIFPE*))((::PBYTE)hIl2Cpp + OJAFKPOICNM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

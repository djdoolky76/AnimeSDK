#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultiFloorConflictGroupRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DDPPNNKNOHF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD0EF00)
#define DDPPNNKNOHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD0F480)
#define DDPPNNKNOHF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD0F070)
#define DDPPNNKNOHF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD0E9F0)
#define DDPPNNKNOHF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD0EC80)
#define DDPPNNKNOHF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD0F110)
#define DDPPNNKNOHF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD0F160)
#define DDPPNNKNOHF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD0EF40)
#define DDPPNNKNOHF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD0EC20)
#define DDPPNNKNOHF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD0EDB0)
#define DDPPNNKNOHF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD0EFD0)
#define DDPPNNKNOHF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD0E970)

inline static constexpr unsigned int DDPPNNKNOHF_TypeDefinitionIndex = 14057;

	class DDPPNNKNOHF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "DDPPNNKNOHF")->GetStaticField(0x4B5A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>**)UnitySDK::FromName("", "DDPPNNKNOHF")->GetStaticField(0x4B5A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "DDPPNNKNOHF")->GetStaticField(0x4B5B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DDPPNNKNOHF")->GetStaticField(0x11770);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "DDPPNNKNOHF")->GetStaticField(0x11771);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>*(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiFloorConflictGroupRow*>(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MultiFloorConflictGroupRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MultiFloorConflictGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + DDPPNNKNOHF_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDPPNNKNOHF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DDPPNNKNOHF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DDPPNNKNOHF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + DDPPNNKNOHF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MultiFloorConflictGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MultiFloorConflictGroupRow*))((::PBYTE)hIl2Cpp + DDPPNNKNOHF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

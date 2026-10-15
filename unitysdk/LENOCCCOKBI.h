#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraGalleryActRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LENOCCCOKBI_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0B8790)
#define LENOCCCOKBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0B8D10)
#define LENOCCCOKBI_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0B8900)
#define LENOCCCOKBI_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0B8280)
#define LENOCCCOKBI_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0B8510)
#define LENOCCCOKBI_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0B89A0)
#define LENOCCCOKBI_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0B89F0)
#define LENOCCCOKBI_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0B87D0)
#define LENOCCCOKBI_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0B84B0)
#define LENOCCCOKBI_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0B8640)
#define LENOCCCOKBI_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0B8860)
#define LENOCCCOKBI_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0B8200)

inline static constexpr unsigned int LENOCCCOKBI_TypeDefinitionIndex = 13055;

	class LENOCCCOKBI : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LENOCCCOKBI")->GetStaticField(0x3A790);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LENOCCCOKBI")->GetStaticField(0x3A798);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>**)UnitySDK::FromName("", "LENOCCCOKBI")->GetStaticField(0x3A7A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LENOCCCOKBI")->GetStaticField(0xBCE0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LENOCCCOKBI")->GetStaticField(0xBCE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>*(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryActRow*>(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraGalleryActRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraGalleryActRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LENOCCCOKBI_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENOCCCOKBI_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LENOCCCOKBI_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LENOCCCOKBI_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LENOCCCOKBI_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ChimeraGalleryActRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraGalleryActRow*))((::PBYTE)hIl2Cpp + LENOCCCOKBI_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

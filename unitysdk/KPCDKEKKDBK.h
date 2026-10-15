#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultiplePathAvatarAtlasRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KPCDKEKKDBK_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0C6E20)
#define KPCDKEKKDBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0C73F0)
#define KPCDKEKKDBK_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D0C6F90)
#define KPCDKEKKDBK_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0C6890)
#define KPCDKEKKDBK_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0C6B20)
#define KPCDKEKKDBK_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0C7030)
#define KPCDKEKKDBK_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D0C7080)
#define KPCDKEKKDBK_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D0C6E60)
#define KPCDKEKKDBK_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D0C6AC0)
#define KPCDKEKKDBK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0C6C90)
#define KPCDKEKKDBK_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D0C6EF0)
#define KPCDKEKKDBK_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0C6810)

	class KPCDKEKKDBK : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "KPCDKEKKDBK")->GetStaticField(0x39E60);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*>**)UnitySDK::FromName("", "KPCDKEKKDBK")->GetStaticField(0x39E68);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KPCDKEKKDBK")->GetStaticField(0x39E70);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KPCDKEKKDBK")->GetStaticField(0xC590);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KPCDKEKKDBK")->GetStaticField(0xC591);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MultiplePathAvatarAtlasRow*>(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MultiplePathAvatarAtlasRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MultiplePathAvatarAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + KPCDKEKKDBK_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCDKEKKDBK_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPCDKEKKDBK_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KPCDKEKKDBK_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KPCDKEKKDBK_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MultiplePathAvatarAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MultiplePathAvatarAtlasRow*))((::PBYTE)hIl2Cpp + KPCDKEKKDBK_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

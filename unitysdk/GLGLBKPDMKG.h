#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertDeviceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLGLBKPDMKG_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6563E0)
#define GLGLBKPDMKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6569B0)
#define GLGLBKPDMKG_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E656550)
#define GLGLBKPDMKG_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E655E50)
#define GLGLBKPDMKG_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6560E0)
#define GLGLBKPDMKG_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6565F0)
#define GLGLBKPDMKG_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E656640)
#define GLGLBKPDMKG_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E656420)
#define GLGLBKPDMKG_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E656080)
#define GLGLBKPDMKG_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E656250)
#define GLGLBKPDMKG_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6564B0)
#define GLGLBKPDMKG_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E655DD0)

inline static constexpr unsigned int GLGLBKPDMKG_TypeDefinitionIndex = 11234;

	class GLGLBKPDMKG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*>**)UnitySDK::FromName("", "GLGLBKPDMKG")->GetStaticField(0x11280);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "GLGLBKPDMKG")->GetStaticField(0x11288);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "GLGLBKPDMKG")->GetStaticField(0x11290);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "GLGLBKPDMKG")->GetStaticField(0x3800);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "GLGLBKPDMKG")->GetStaticField(0x3801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*>*(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertDeviceRow*>(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertDeviceRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertDeviceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GLGLBKPDMKG_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLGLBKPDMKG_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + GLGLBKPDMKG_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GLGLBKPDMKG_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + GLGLBKPDMKG_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertDeviceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertDeviceRow*))((::PBYTE)hIl2Cpp + GLGLBKPDMKG_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

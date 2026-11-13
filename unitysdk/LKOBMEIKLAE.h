#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKOBMEIKLAE_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E405210)
#define LKOBMEIKLAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4057E0)
#define LKOBMEIKLAE_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E405380)
#define LKOBMEIKLAE_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E404C80)
#define LKOBMEIKLAE_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E404F10)
#define LKOBMEIKLAE_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E405420)
#define LKOBMEIKLAE_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E405470)
#define LKOBMEIKLAE_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E405250)
#define LKOBMEIKLAE_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E404EB0)
#define LKOBMEIKLAE_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E405080)
#define LKOBMEIKLAE_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E4052E0)
#define LKOBMEIKLAE_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E404C00)

inline static constexpr unsigned int LKOBMEIKLAE_TypeDefinitionIndex = 11224;

	class LKOBMEIKLAE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*>**)UnitySDK::FromName("", "LKOBMEIKLAE")->GetStaticField(0x3BB00);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LKOBMEIKLAE")->GetStaticField(0x3BB08);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LKOBMEIKLAE")->GetStaticField(0x3BB10);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LKOBMEIKLAE")->GetStaticField(0xBE50);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LKOBMEIKLAE")->GetStaticField(0xBE51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*>*(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelRow*>(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertLevelRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + LKOBMEIKLAE_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKOBMEIKLAE_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LKOBMEIKLAE_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LKOBMEIKLAE_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LKOBMEIKLAE_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertLevelRow*))((::PBYTE)hIl2Cpp + LKOBMEIKLAE_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

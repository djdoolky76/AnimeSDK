#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertLevelComicRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FEGAFBGBKFA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E448570)
#define FEGAFBGBKFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E448B40)
#define FEGAFBGBKFA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E4486E0)
#define FEGAFBGBKFA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E447FE0)
#define FEGAFBGBKFA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E448270)
#define FEGAFBGBKFA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E448780)
#define FEGAFBGBKFA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E4487D0)
#define FEGAFBGBKFA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E4485B0)
#define FEGAFBGBKFA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E448210)
#define FEGAFBGBKFA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E4483E0)
#define FEGAFBGBKFA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E448640)
#define FEGAFBGBKFA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E447F60)

inline static constexpr unsigned int FEGAFBGBKFA_TypeDefinitionIndex = 11242;

	class FEGAFBGBKFA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FEGAFBGBKFA")->GetStaticField(0x52E00);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FEGAFBGBKFA")->GetStaticField(0x52E08);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*>**)UnitySDK::FromName("", "FEGAFBGBKFA")->GetStaticField(0x52E10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FEGAFBGBKFA")->GetStaticField(0x11CE0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FEGAFBGBKFA")->GetStaticField(0x11CE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*>*(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertLevelComicRow*>(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertLevelComicRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertLevelComicRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FEGAFBGBKFA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEGAFBGBKFA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FEGAFBGBKFA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FEGAFBGBKFA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FEGAFBGBKFA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertLevelComicRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertLevelComicRow*))((::PBYTE)hIl2Cpp + FEGAFBGBKFA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

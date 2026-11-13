#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PNNMINBMOJO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E7B43C0)
#define PNNMINBMOJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B4990)
#define PNNMINBMOJO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E7B4530)
#define PNNMINBMOJO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E7B3E30)
#define PNNMINBMOJO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E7B40C0)
#define PNNMINBMOJO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E7B45D0)
#define PNNMINBMOJO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E7B4620)
#define PNNMINBMOJO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E7B4400)
#define PNNMINBMOJO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E7B4060)
#define PNNMINBMOJO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E7B4230)
#define PNNMINBMOJO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E7B4490)
#define PNNMINBMOJO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E7B3DB0)

inline static constexpr unsigned int PNNMINBMOJO_TypeDefinitionIndex = 11248;

	class PNNMINBMOJO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "PNNMINBMOJO")->GetStaticField(0x42E70);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*>**)UnitySDK::FromName("", "PNNMINBMOJO")->GetStaticField(0x42E78);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "PNNMINBMOJO")->GetStaticField(0x42E80);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "PNNMINBMOJO")->GetStaticField(0xD660);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "PNNMINBMOJO")->GetStaticField(0xD661);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*>*(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ComicDessertCustomerRow*>(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ComicDessertCustomerRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ComicDessertCustomerRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PNNMINBMOJO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNNMINBMOJO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PNNMINBMOJO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PNNMINBMOJO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + PNNMINBMOJO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ComicDessertCustomerRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ComicDessertCustomerRow*))((::PBYTE)hIl2Cpp + PNNMINBMOJO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

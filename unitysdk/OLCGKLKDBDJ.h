#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemMultiMaterialConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLCGKLKDBDJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D26A320)
#define OLCGKLKDBDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D26A8A0)
#define OLCGKLKDBDJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D26A490)
#define OLCGKLKDBDJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D269DD0)
#define OLCGKLKDBDJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D26A060)
#define OLCGKLKDBDJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D26A530)
#define OLCGKLKDBDJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D26A580)
#define OLCGKLKDBDJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D26A360)
#define OLCGKLKDBDJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D26A000)
#define OLCGKLKDBDJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D26A190)
#define OLCGKLKDBDJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D26A3F0)
#define OLCGKLKDBDJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D269D50)

inline static constexpr unsigned int OLCGKLKDBDJ_TypeDefinitionIndex = 13891;

	class OLCGKLKDBDJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "OLCGKLKDBDJ")->GetStaticField(0x49BA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>**)UnitySDK::FromName("", "OLCGKLKDBDJ")->GetStaticField(0x49BA8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "OLCGKLKDBDJ")->GetStaticField(0x49BB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "OLCGKLKDBDJ")->GetStaticField(0x11010);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "OLCGKLKDBDJ")->GetStaticField(0x11011);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>*(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ItemMultiMaterialConfigRow*>(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::ItemMultiMaterialConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ItemMultiMaterialConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::ItemMultiMaterialConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ItemMultiMaterialConfigRow*))((::PBYTE)hIl2Cpp + OLCGKLKDBDJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

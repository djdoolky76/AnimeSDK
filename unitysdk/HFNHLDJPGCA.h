#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPetPalEffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HFNHLDJPGCA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E8126A0)
#define HFNHLDJPGCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E812C70)
#define HFNHLDJPGCA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E812810)
#define HFNHLDJPGCA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E812110)
#define HFNHLDJPGCA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E8123A0)
#define HFNHLDJPGCA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E8128B0)
#define HFNHLDJPGCA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E812900)
#define HFNHLDJPGCA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E8126E0)
#define HFNHLDJPGCA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E812340)
#define HFNHLDJPGCA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E812510)
#define HFNHLDJPGCA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E812770)
#define HFNHLDJPGCA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E812090)

inline static constexpr unsigned int HFNHLDJPGCA_TypeDefinitionIndex = 13568;

	class HFNHLDJPGCA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HFNHLDJPGCA")->GetStaticField(0x169B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HFNHLDJPGCA")->GetStaticField(0x169B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*>**)UnitySDK::FromName("", "HFNHLDJPGCA")->GetStaticField(0x169C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HFNHLDJPGCA")->GetStaticField(0x5050);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HFNHLDJPGCA")->GetStaticField(0x5051);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*>*(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPetPalEffRow*>(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPetPalEffRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPetPalEffRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HFNHLDJPGCA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFNHLDJPGCA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HFNHLDJPGCA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HFNHLDJPGCA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HFNHLDJPGCA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPetPalEffRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPetPalEffRow*))((::PBYTE)hIl2Cpp + HFNHLDJPGCA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

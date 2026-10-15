#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightFrontSpecialSPConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHLKBKBOOBF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D0667C0)
#define KHLKBKBOOBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D066DC0)
#define KHLKBKBOOBF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D066930)
#define KHLKBKBOOBF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D0661F0)
#define KHLKBKBOOBF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D066480)
#define KHLKBKBOOBF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D0669D0)
#define KHLKBKBOOBF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D066A20)
#define KHLKBKBOOBF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D066800)
#define KHLKBKBOOBF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D066420)
#define KHLKBKBOOBF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D0665F0)
#define KHLKBKBOOBF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D066890)
#define KHLKBKBOOBF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D066170)

inline static constexpr unsigned int KHLKBKBOOBF_TypeDefinitionIndex = 13548;

	class KHLKBKBOOBF : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*>**)UnitySDK::FromName("", "KHLKBKBOOBF")->GetStaticField(0x34A30);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "KHLKBKBOOBF")->GetStaticField(0x34A38);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "KHLKBKBOOBF")->GetStaticField(0x34A40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "KHLKBKBOOBF")->GetStaticField(0xAA60);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KHLKBKBOOBF")->GetStaticField(0xAA61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*>*(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFrontSpecialSPConfigRow*>(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightFrontSpecialSPConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightFrontSpecialSPConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHLKBKBOOBF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHLKBKBOOBF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KHLKBKBOOBF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KHLKBKBOOBF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + KHLKBKBOOBF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightFrontSpecialSPConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightFrontSpecialSPConfigRow*))((::PBYTE)hIl2Cpp + KHLKBKBOOBF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

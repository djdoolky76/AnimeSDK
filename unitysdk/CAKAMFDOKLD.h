#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventDialogConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAKAMFDOKLD_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1EBCB120)
#define CAKAMFDOKLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBCB720)
#define CAKAMFDOKLD_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1EBCB290)
#define CAKAMFDOKLD_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1EBCAB50)
#define CAKAMFDOKLD_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1EBCADE0)
#define CAKAMFDOKLD_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1EBCB330)
#define CAKAMFDOKLD_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1EBCB380)
#define CAKAMFDOKLD_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1EBCB160)
#define CAKAMFDOKLD_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1EBCAD80)
#define CAKAMFDOKLD_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1EBCAF50)
#define CAKAMFDOKLD_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1EBCB1F0)
#define CAKAMFDOKLD_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1EBCAAD0)

inline static constexpr unsigned int CAKAMFDOKLD_TypeDefinitionIndex = 13575;

	class CAKAMFDOKLD : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "CAKAMFDOKLD")->GetStaticField(0x4C3B0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "CAKAMFDOKLD")->GetStaticField(0x4C3B8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*>**)UnitySDK::FromName("", "CAKAMFDOKLD")->GetStaticField(0x4C3C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "CAKAMFDOKLD")->GetStaticField(0xF740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "CAKAMFDOKLD")->GetStaticField(0xF741);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*>(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightBonfireEventDialogConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightBonfireEventDialogConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAKAMFDOKLD_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAKAMFDOKLD_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CAKAMFDOKLD_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CAKAMFDOKLD_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + CAKAMFDOKLD_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightBonfireEventDialogConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightBonfireEventDialogConfigRow*))((::PBYTE)hIl2Cpp + CAKAMFDOKLD_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

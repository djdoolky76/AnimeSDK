#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HGIGNNBCADC_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE78150)
#define HGIGNNBCADC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE78720)
#define HGIGNNBCADC_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE782C0)
#define HGIGNNBCADC_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE77BC0)
#define HGIGNNBCADC_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE77E50)
#define HGIGNNBCADC_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE78360)
#define HGIGNNBCADC_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE783B0)
#define HGIGNNBCADC_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE78190)
#define HGIGNNBCADC_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE77DF0)
#define HGIGNNBCADC_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE77FC0)
#define HGIGNNBCADC_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE78220)
#define HGIGNNBCADC_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE77B40)

inline static constexpr unsigned int HGIGNNBCADC_TypeDefinitionIndex = 13636;

	class HGIGNNBCADC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HGIGNNBCADC")->GetStaticField(0x1B690);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*>**)UnitySDK::FromName("", "HGIGNNBCADC")->GetStaticField(0x1B698);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HGIGNNBCADC")->GetStaticField(0x1B6A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HGIGNNBCADC")->GetStaticField(0x5EF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HGIGNNBCADC")->GetStaticField(0x5EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPortalBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightPortalBuffConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightPortalBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HGIGNNBCADC_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGIGNNBCADC_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HGIGNNBCADC_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HGIGNNBCADC_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HGIGNNBCADC_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightPortalBuffConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightPortalBuffConfigRow*))((::PBYTE)hIl2Cpp + HGIGNNBCADC_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

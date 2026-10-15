#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CatDialogueBubbleOffsetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJCNCGIIPLM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CD600C0)
#define EJCNCGIIPLM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD60A70)
#define EJCNCGIIPLM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CD60230)
#define EJCNCGIIPLM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CD5FB30)
#define EJCNCGIIPLM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CD5FDC0)
#define EJCNCGIIPLM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CD606B0)
#define EJCNCGIIPLM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CD60700)
#define EJCNCGIIPLM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CD60100)
#define EJCNCGIIPLM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CD5FD60)
#define EJCNCGIIPLM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CD5FF30)
#define EJCNCGIIPLM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CD60190)
#define EJCNCGIIPLM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CD5FAB0)

inline static constexpr unsigned int EJCNCGIIPLM_TypeDefinitionIndex = 12941;

	class EJCNCGIIPLM : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EJCNCGIIPLM")->GetStaticField(0x1200);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*>**)UnitySDK::FromName("", "EJCNCGIIPLM")->GetStaticField(0x1208);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EJCNCGIIPLM")->GetStaticField(0x1210);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EJCNCGIIPLM")->GetStaticField(0x700);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EJCNCGIIPLM")->GetStaticField(0x701);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*>*(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CatDialogueBubbleOffsetRow*>(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::CatDialogueBubbleOffsetRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CatDialogueBubbleOffsetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EJCNCGIIPLM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJCNCGIIPLM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EJCNCGIIPLM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EJCNCGIIPLM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EJCNCGIIPLM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::CatDialogueBubbleOffsetRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::CatDialogueBubbleOffsetRow*))((::PBYTE)hIl2Cpp + EJCNCGIIPLM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveDisplayImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EHNNJOHBADO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1DF55980)
#define EHNNJOHBADO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF55F50)
#define EHNNJOHBADO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1DF55AF0)
#define EHNNJOHBADO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1DF553F0)
#define EHNNJOHBADO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1DF55680)
#define EHNNJOHBADO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1DF55B90)
#define EHNNJOHBADO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1DF55BE0)
#define EHNNJOHBADO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1DF559C0)
#define EHNNJOHBADO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1DF55620)
#define EHNNJOHBADO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1DF557F0)
#define EHNNJOHBADO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1DF55A50)
#define EHNNJOHBADO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1DF55370)

inline static constexpr unsigned int EHNNJOHBADO_TypeDefinitionIndex = 11854;

	class EHNNJOHBADO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>**)UnitySDK::FromName("", "EHNNJOHBADO")->GetStaticField(0x37730);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "EHNNJOHBADO")->GetStaticField(0x37738);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "EHNNJOHBADO")->GetStaticField(0x37740);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "EHNNJOHBADO")->GetStaticField(0xBFA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EHNNJOHBADO")->GetStaticField(0xBFA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>*(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDisplayImageRow*>(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveDisplayImageRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveDisplayImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + EHNNJOHBADO_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHNNJOHBADO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EHNNJOHBADO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHNNJOHBADO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + EHNNJOHBADO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveDisplayImageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveDisplayImageRow*))((::PBYTE)hIl2Cpp + EHNNJOHBADO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

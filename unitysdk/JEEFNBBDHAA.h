#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAdvTechTreeTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JEEFNBBDHAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CFEE590)
#define JEEFNBBDHAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFEEA80)
#define JEEFNBBDHAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CFEE670)
#define JEEFNBBDHAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CF22230)
#define JEEFNBBDHAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CFEE2D0)
#define JEEFNBBDHAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CFEE710)
#define JEEFNBBDHAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CFEE760)
#define JEEFNBBDHAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CFA8910)
#define JEEFNBBDHAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CFEE270)
#define JEEFNBBDHAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CFEE400)
#define JEEFNBBDHAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CFEE5D0)
#define JEEFNBBDHAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CFEE1F0)

inline static constexpr unsigned int JEEFNBBDHAA_TypeDefinitionIndex = 11732;

	class JEEFNBBDHAA : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x2BBC0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x2BBC8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x2BBD0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x92C0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x92C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>*(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::IdleLiveAdvTechTreeTabRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IdleLiveAdvTechTreeTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JEEFNBBDHAA_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFNBBDHAA_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JEEFNBBDHAA_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JEEFNBBDHAA_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JEEFNBBDHAA_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::IdleLiveAdvTechTreeTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IdleLiveAdvTechTreeTabRow*))((::PBYTE)hIl2Cpp + JEEFNBBDHAA_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

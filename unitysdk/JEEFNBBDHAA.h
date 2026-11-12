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

#define JEEFNBBDHAA_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E209D90)
#define JEEFNBBDHAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20A280)
#define JEEFNBBDHAA_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E209E70)
#define JEEFNBBDHAA_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E137E70)
#define JEEFNBBDHAA_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E209AD0)
#define JEEFNBBDHAA_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E209F10)
#define JEEFNBBDHAA_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E209F60)
#define JEEFNBBDHAA_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E1C2070)
#define JEEFNBBDHAA_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E209A70)
#define JEEFNBBDHAA_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E209C00)
#define JEEFNBBDHAA_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E209DD0)
#define JEEFNBBDHAA_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E2099F0)

inline static constexpr unsigned int JEEFNBBDHAA_TypeDefinitionIndex = 11789;

	class JEEFNBBDHAA : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x29FA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAdvTechTreeTabRow*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x29FA8);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x29FB0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x8710);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JEEFNBBDHAA")->GetStaticField(0x8711);
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

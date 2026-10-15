#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class BEIFEIGCEGF;
class FCOEMCEDLNL;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JIMBBBPKOBP_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D036BE0)
#define JIMBBBPKOBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0371B0)
#define JIMBBBPKOBP_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D036D50)
#define JIMBBBPKOBP_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D036650)
#define JIMBBBPKOBP_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D0368E0)
#define JIMBBBPKOBP_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D036DF0)
#define JIMBBBPKOBP_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D036E40)
#define JIMBBBPKOBP_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D036C20)
#define JIMBBBPKOBP_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D036880)
#define JIMBBBPKOBP_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D036A50)
#define JIMBBBPKOBP_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D036CB0)
#define JIMBBBPKOBP_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D0365D0)

inline static constexpr unsigned int JIMBBBPKOBP_TypeDefinitionIndex = 11294;

	class JIMBBBPKOBP : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "JIMBBBPKOBP")->GetStaticField(0x2EA30);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*>**)UnitySDK::FromName("", "JIMBBBPKOBP")->GetStaticField(0x2EA38);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "JIMBBBPKOBP")->GetStaticField(0x2EA40);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "JIMBBBPKOBP")->GetStaticField(0x9A30);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "JIMBBBPKOBP")->GetStaticField(0x9A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*>*(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::BEIFEIGCEGF*>(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_FPHGMAMDFHE_OFFSET))();
		}

		static ::BEIFEIGCEGF* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::BEIFEIGCEGF*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JIMBBBPKOBP_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIMBBBPKOBP_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + JIMBBBPKOBP_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + JIMBBBPKOBP_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + JIMBBBPKOBP_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::BEIFEIGCEGF* a1)
		{
			return ((::System::Void(*)(::BEIFEIGCEGF*))((::PBYTE)hIl2Cpp + JIMBBBPKOBP_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

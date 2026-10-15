#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
class FJNIECBLHHM;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HBLKDLMMMAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CE87EA0)
#define HBLKDLMMMAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE88470)
#define HBLKDLMMMAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CE88010)
#define HBLKDLMMMAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CE87910)
#define HBLKDLMMMAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CE87BA0)
#define HBLKDLMMMAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CE880B0)
#define HBLKDLMMMAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CE88100)
#define HBLKDLMMMAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CE87EE0)
#define HBLKDLMMMAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CE87B40)
#define HBLKDLMMMAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CE87D10)
#define HBLKDLMMMAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CE87F70)
#define HBLKDLMMMAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CE87890)

inline static constexpr unsigned int HBLKDLMMMAM_TypeDefinitionIndex = 11291;

	class HBLKDLMMMAM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*>**)UnitySDK::FromName("", "HBLKDLMMMAM")->GetStaticField(0x1B890);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HBLKDLMMMAM")->GetStaticField(0x1B898);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HBLKDLMMMAM")->GetStaticField(0x1B8A0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HBLKDLMMMAM")->GetStaticField(0x6350);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HBLKDLMMMAM")->GetStaticField(0x6351);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*>*(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::FJNIECBLHHM*>(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::FJNIECBLHHM* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::FJNIECBLHHM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HBLKDLMMMAM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBLKDLMMMAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HBLKDLMMMAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HBLKDLMMMAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HBLKDLMMMAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::FJNIECBLHHM* a1)
		{
			return ((::System::Void(*)(::FJNIECBLHHM*))((::PBYTE)hIl2Cpp + HBLKDLMMMAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

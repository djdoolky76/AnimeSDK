#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NounAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FAPGFHAIOAM_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1ED2A330)
#define FAPGFHAIOAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED2A8B0)
#define FAPGFHAIOAM_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1ED2A4A0)
#define FAPGFHAIOAM_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1ED29E20)
#define FAPGFHAIOAM_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1ED2A0B0)
#define FAPGFHAIOAM_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1ED2A540)
#define FAPGFHAIOAM_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1ED2A590)
#define FAPGFHAIOAM_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1ED2A370)
#define FAPGFHAIOAM_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1ED2A050)
#define FAPGFHAIOAM_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1ED2A1E0)
#define FAPGFHAIOAM_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1ED2A400)
#define FAPGFHAIOAM_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1ED29DA0)

inline static constexpr unsigned int FAPGFHAIOAM_TypeDefinitionIndex = 12762;

	class FAPGFHAIOAM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>**)UnitySDK::FromName("", "FAPGFHAIOAM")->GetStaticField(0x4F900);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "FAPGFHAIOAM")->GetStaticField(0x4F908);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FAPGFHAIOAM")->GetStaticField(0x4F910);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "FAPGFHAIOAM")->GetStaticField(0x11640);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FAPGFHAIOAM")->GetStaticField(0x11641);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NounAtlasRow*>(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::NounAtlasRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::NounAtlasRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FAPGFHAIOAM_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAPGFHAIOAM_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FAPGFHAIOAM_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FAPGFHAIOAM_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + FAPGFHAIOAM_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::NounAtlasRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::NounAtlasRow*))((::PBYTE)hIl2Cpp + FAPGFHAIOAM_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

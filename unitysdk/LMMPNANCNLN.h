#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRecomSpotLightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMMPNANCNLN_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E315930)
#define LMMPNANCNLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E315F30)
#define LMMPNANCNLN_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E315AA0)
#define LMMPNANCNLN_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E315350)
#define LMMPNANCNLN_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E3155E0)
#define LMMPNANCNLN_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E315B40)
#define LMMPNANCNLN_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E315B90)
#define LMMPNANCNLN_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E315970)
#define LMMPNANCNLN_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E315580)
#define LMMPNANCNLN_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E315750)
#define LMMPNANCNLN_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E315A00)
#define LMMPNANCNLN_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E3152D0)

inline static constexpr unsigned int LMMPNANCNLN_TypeDefinitionIndex = 13722;

	class LMMPNANCNLN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*>**)UnitySDK::FromName("", "LMMPNANCNLN")->GetStaticField(0x36430);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "LMMPNANCNLN")->GetStaticField(0x36438);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "LMMPNANCNLN")->GetStaticField(0x36440);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "LMMPNANCNLN")->GetStaticField(0xB960);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "LMMPNANCNLN")->GetStaticField(0xB961);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*>(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
		{
			return ((::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + LMMPNANCNLN_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMMPNANCNLN_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + LMMPNANCNLN_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LMMPNANCNLN_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + LMMPNANCNLN_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*))((::PBYTE)hIl2Cpp + LMMPNANCNLN_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

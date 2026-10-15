#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOldRoleConfigRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BMOHKAPLAKO_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D9E5020)
#define BMOHKAPLAKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9E5620)
#define BMOHKAPLAKO_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D9E5190)
#define BMOHKAPLAKO_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D9E4A50)
#define BMOHKAPLAKO_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D9E4CE0)
#define BMOHKAPLAKO_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D9E5230)
#define BMOHKAPLAKO_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D9E5280)
#define BMOHKAPLAKO_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D9E5060)
#define BMOHKAPLAKO_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D9E4C80)
#define BMOHKAPLAKO_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D9E4E50)
#define BMOHKAPLAKO_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D9E50F0)
#define BMOHKAPLAKO_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D9E49D0)

inline static constexpr unsigned int BMOHKAPLAKO_TypeDefinitionIndex = 13565;

	class BMOHKAPLAKO : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "BMOHKAPLAKO")->GetStaticField(0x383D0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>**)UnitySDK::FromName("", "BMOHKAPLAKO")->GetStaticField(0x383D8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "BMOHKAPLAKO")->GetStaticField(0x383E0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BMOHKAPLAKO")->GetStaticField(0xC040);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "BMOHKAPLAKO")->GetStaticField(0xC041);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightOldRoleConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightOldRoleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BMOHKAPLAKO_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMOHKAPLAKO_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BMOHKAPLAKO_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + BMOHKAPLAKO_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + BMOHKAPLAKO_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightOldRoleConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightOldRoleConfigRow*))((::PBYTE)hIl2Cpp + BMOHKAPLAKO_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

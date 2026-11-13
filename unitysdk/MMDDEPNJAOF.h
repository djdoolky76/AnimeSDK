#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleBackendExtraRankConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MMDDEPNJAOF_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E873DE0)
#define MMDDEPNJAOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8743E0)
#define MMDDEPNJAOF_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E873F50)
#define MMDDEPNJAOF_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E873810)
#define MMDDEPNJAOF_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E873AA0)
#define MMDDEPNJAOF_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E873FF0)
#define MMDDEPNJAOF_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E874040)
#define MMDDEPNJAOF_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E873E20)
#define MMDDEPNJAOF_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E873A40)
#define MMDDEPNJAOF_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E873C10)
#define MMDDEPNJAOF_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E873EB0)
#define MMDDEPNJAOF_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E873790)

inline static constexpr unsigned int MMDDEPNJAOF_TypeDefinitionIndex = 13610;

	class MMDDEPNJAOF : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "MMDDEPNJAOF")->GetStaticField(0x4B530);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "MMDDEPNJAOF")->GetStaticField(0x4B538);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>**)UnitySDK::FromName("", "MMDDEPNJAOF")->GetStaticField(0x4B540);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "MMDDEPNJAOF")->GetStaticField(0xE650);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "MMDDEPNJAOF")->GetStaticField(0xE651);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>*(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MMDDEPNJAOF_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMDDEPNJAOF_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MMDDEPNJAOF_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMDDEPNJAOF_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + MMDDEPNJAOF_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*))((::PBYTE)hIl2Cpp + MMDDEPNJAOF_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

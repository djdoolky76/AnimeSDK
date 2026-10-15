#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/GridFightUnlockFunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightFuncManageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEGJLEFPFOH_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CC83D60)
#define AEGJLEFPFOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC84330)
#define AEGJLEFPFOH_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CC83ED0)
#define AEGJLEFPFOH_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CC837D0)
#define AEGJLEFPFOH_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CC83A60)
#define AEGJLEFPFOH_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CC83F70)
#define AEGJLEFPFOH_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CC83FC0)
#define AEGJLEFPFOH_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CC83DA0)
#define AEGJLEFPFOH_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CC83A00)
#define AEGJLEFPFOH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CC83BD0)
#define AEGJLEFPFOH_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CC83E30)
#define AEGJLEFPFOH_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CC83750)

inline static constexpr unsigned int AEGJLEFPFOH_TypeDefinitionIndex = 13587;

	class AEGJLEFPFOH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "AEGJLEFPFOH")->GetStaticField(0x3E270);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "AEGJLEFPFOH")->GetStaticField(0x3E278);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>**)UnitySDK::FromName("", "AEGJLEFPFOH")->GetStaticField(0x3E280);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "AEGJLEFPFOH")->GetStaticField(0xEAA0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AEGJLEFPFOH")->GetStaticField(0xEAA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightFuncManageConfigRow* LMBKNCAIDLC(::RPG::GameCore::GridFightUnlockFunctionType a1)
		{
			return ((::RPG::GameCore::GridFightFuncManageConfigRow*(*)(::RPG::GameCore::GridFightUnlockFunctionType))((::PBYTE)hIl2Cpp + AEGJLEFPFOH_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEGJLEFPFOH_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AEGJLEFPFOH_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEGJLEFPFOH_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + AEGJLEFPFOH_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightFuncManageConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightFuncManageConfigRow*))((::PBYTE)hIl2Cpp + AEGJLEFPFOH_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

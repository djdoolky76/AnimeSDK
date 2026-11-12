#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionLevelShowRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPHKHPGFHLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E0C3E10)
#define HPHKHPGFHLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C43D0)
#define HPHKHPGFHLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E0C3F80)
#define HPHKHPGFHLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E0C38B0)
#define HPHKHPGFHLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E0C3B40)
#define HPHKHPGFHLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E0C4020)
#define HPHKHPGFHLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E0C4070)
#define HPHKHPGFHLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E0C3E50)
#define HPHKHPGFHLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E0C3AE0)
#define HPHKHPGFHLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E0C3C70)
#define HPHKHPGFHLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E0C3EE0)
#define HPHKHPGFHLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E0C3830)

inline static constexpr unsigned int HPHKHPGFHLJ_TypeDefinitionIndex = 13728;

	class HPHKHPGFHLJ : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x17FA0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x17FA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x17FB0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x5070);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x5071);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>*(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightDivisionLevelShowRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GridFightDivisionLevelShowRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightDivisionLevelShowRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightDivisionLevelShowRow*))((::PBYTE)hIl2Cpp + HPHKHPGFHLJ_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NJEHIGMDALL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1D215C70)
#define NJEHIGMDALL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2161F0)
#define NJEHIGMDALL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1D215DE0)
#define NJEHIGMDALL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1D215760)
#define NJEHIGMDALL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1D2159F0)
#define NJEHIGMDALL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1D215E80)
#define NJEHIGMDALL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1D215ED0)
#define NJEHIGMDALL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1D215CB0)
#define NJEHIGMDALL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1D215990)
#define NJEHIGMDALL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1D215B20)
#define NJEHIGMDALL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1D215D40)
#define NJEHIGMDALL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1D2156E0)

inline static constexpr unsigned int NJEHIGMDALL_TypeDefinitionIndex = 13474;

	class NJEHIGMDALL : public ::System::Object
	{
	public:
		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "NJEHIGMDALL")->GetStaticField(0x2EDE0);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "NJEHIGMDALL")->GetStaticField(0x2EDE8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*>**)UnitySDK::FromName("", "NJEHIGMDALL")->GetStaticField(0x2EDF0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "NJEHIGMDALL")->GetStaticField(0x9B90);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "NJEHIGMDALL")->GetStaticField(0x9B91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::GridFightLevelConfigRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + NJEHIGMDALL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJEHIGMDALL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NJEHIGMDALL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJEHIGMDALL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + NJEHIGMDALL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::GridFightLevelConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightLevelConfigRow*))((::PBYTE)hIl2Cpp + NJEHIGMDALL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

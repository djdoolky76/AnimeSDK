#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDivisionLevelShowRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HPHKHPGFHLJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CED20A0)
#define HPHKHPGFHLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED2660)
#define HPHKHPGFHLJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CED2210)
#define HPHKHPGFHLJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CED1B40)
#define HPHKHPGFHLJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CED1DD0)
#define HPHKHPGFHLJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CED22B0)
#define HPHKHPGFHLJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CED2300)
#define HPHKHPGFHLJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CED20E0)
#define HPHKHPGFHLJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CED1D70)
#define HPHKHPGFHLJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CED1F00)
#define HPHKHPGFHLJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CED2170)
#define HPHKHPGFHLJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CED1AC0)

	class HPHKHPGFHLJ : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x203C0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionLevelShowRow*>**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x203C8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x203D0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x75B0);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HPHKHPGFHLJ")->GetStaticField(0x75B1);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleWolfBroRow; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HIGEJPHBLLL_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1CEAECB0)
#define HIGEJPHBLLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF230)
#define HIGEJPHBLLL_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1CEAEE20)
#define HIGEJPHBLLL_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1CEAE760)
#define HIGEJPHBLLL_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1CEAE9F0)
#define HIGEJPHBLLL_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1CEAEEC0)
#define HIGEJPHBLLL_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1CEAEF10)
#define HIGEJPHBLLL_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1CEAECF0)
#define HIGEJPHBLLL_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1CEAE990)
#define HIGEJPHBLLL_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1CEAEB20)
#define HIGEJPHBLLL_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1CEAED80)
#define HIGEJPHBLLL_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1CEAE6E0)

	class HIGEJPHBLLL : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "HIGEJPHBLLL")->GetStaticField(0x1E0A0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>**)UnitySDK::FromName("", "HIGEJPHBLLL")->GetStaticField(0x1E0A8);
		}

		static ::System::Action** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action**)UnitySDK::FromName("", "HIGEJPHBLLL")->GetStaticField(0x1E0B0);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HIGEJPHBLLL")->GetStaticField(0x6D10);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "HIGEJPHBLLL")->GetStaticField(0x6D11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>*(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleWolfBroRow*>(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleWolfBroRow* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleWolfBroRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HIGEJPHBLLL_LMBKNCAIDLC_OFFSET))(a1);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGEJPHBLLL_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + HIGEJPHBLLL_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + HIGEJPHBLLL_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + HIGEJPHBLLL_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleWolfBroRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleWolfBroRow*))((::PBYTE)hIl2Cpp + HIGEJPHBLLL_KAAIFCHAOLA_OFFSET))(a1);
		}

	};

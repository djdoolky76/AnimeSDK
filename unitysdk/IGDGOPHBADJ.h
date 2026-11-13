#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IGDGOPHBADJ_ANPPJFBBJFP_OFFSET UNITYSDK_OFFSET(0x1E6C61B0)
#define IGDGOPHBADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C6DD0)
#define IGDGOPHBADJ_DDLFGAJGKAO_OFFSET UNITYSDK_OFFSET(0x1E6C6320)
#define IGDGOPHBADJ_FCMDLFKMBMH_OFFSET UNITYSDK_OFFSET(0x1E6C5BE0)
#define IGDGOPHBADJ_FPHGMAMDFHE_OFFSET UNITYSDK_OFFSET(0x1E6C5E70)
#define IGDGOPHBADJ_HFBAFEEPOLN_OFFSET UNITYSDK_OFFSET(0x1E6C6D40)
#define IGDGOPHBADJ_HIHCFCDFMPF_OFFSET UNITYSDK_OFFSET(0x1E6C6880)
#define IGDGOPHBADJ_ICLCFODNNAE_OFFSET UNITYSDK_OFFSET(0x1E6C63C0)
#define IGDGOPHBADJ_KAAIFCHAOLA_OFFSET UNITYSDK_OFFSET(0x1E6C6410)
#define IGDGOPHBADJ_KACCGMCPAFN_OFFSET UNITYSDK_OFFSET(0x1E6C61F0)
#define IGDGOPHBADJ_LGELIIPIDEC_OFFSET UNITYSDK_OFFSET(0x1E6C5E10)
#define IGDGOPHBADJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x1E6C5FA0)
#define IGDGOPHBADJ_PJOPCJMOHJG_OFFSET UNITYSDK_OFFSET(0x1E6C6790)
#define IGDGOPHBADJ_PKPJFCDOFML_OFFSET UNITYSDK_OFFSET(0x1E6C6280)
#define IGDGOPHBADJ_POIJCHCCDMH_OFFSET UNITYSDK_OFFSET(0x1E6C5B60)

inline static constexpr unsigned int IGDGOPHBADJ_TypeDefinitionIndex = 14234;

	class IGDGOPHBADJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>** StaticGet_EHNHPCGDOIO()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>**)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x1F310);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x1F318);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*>** StaticGet_MJPADFPPNNN()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*>**)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x1F320);
		}

		static ::System::Action_1<::FCOEMCEDLNL*>** StaticGet_MPCODIGIBGL()
		{
			return (::System::Action_1<::FCOEMCEDLNL*>**)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x1F328);
		}

		static ::System::Boolean* StaticGet_AHBLLGCADBB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x69A0);
		}

		static ::System::Boolean* StaticGet_LINNHMPNCJG()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x69A1);
		}

		static ::System::Byte* StaticGet_GDMLAIBCKIP()
		{
			return (::System::Byte*)UnitySDK::FromName("", "IGDGOPHBADJ")->GetStaticField(0x69A2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>* POIJCHCCDMH()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>*(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_POIJCHCCDMH_OFFSET))();
		}

		static ::System::Boolean LGELIIPIDEC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_LGELIIPIDEC_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*> FPHGMAMDFHE()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleOrigamiRow*>(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_FPHGMAMDFHE_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleOrigamiRow* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::MazePuzzleOrigamiRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_LMBKNCAIDLC_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean ANPPJFBBJFP()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_ANPPJFBBJFP_OFFSET))();
		}

		static ::System::Void FCMDLFKMBMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_FCMDLFKMBMH_OFFSET))();
		}

		static ::System::Void KACCGMCPAFN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_KACCGMCPAFN_OFFSET))();
		}

		static ::System::Void PKPJFCDOFML(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_PKPJFCDOFML_OFFSET))(a1);
		}

		static ::System::Void DDLFGAJGKAO(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_DDLFGAJGKAO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ICLCFODNNAE(::FCOEMCEDLNL* a1)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_ICLCFODNNAE_OFFSET))(a1);
		}

		static ::System::Void KAAIFCHAOLA(::RPG::GameCore::MazePuzzleOrigamiRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleOrigamiRow*))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_KAAIFCHAOLA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* PJOPCJMOHJG(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IGDGOPHBADJ_PJOPCJMOHJG_OFFSET))(a1);
		}

		static ::System::Void HFBAFEEPOLN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_HFBAFEEPOLN_OFFSET))();
		}

		static ::System::Void HIHCFCDFMPF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGDGOPHBADJ_HIHCFCDFMPF_OFFSET))();
		}

	};

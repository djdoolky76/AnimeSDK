#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuel/ChimeraDuelMasterShowType.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class HAJDFCHFBGN;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DKNFHBOHMAF_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xF884F00)
#define DKNFHBOHMAF_CCTOR_OFFSET UNITYSDK_OFFSET(0xF885120)
#define DKNFHBOHMAF_CTOR_OFFSET UNITYSDK_OFFSET(0xF884A50)
#define DKNFHBOHMAF_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF884A60)
#define DKNFHBOHMAF_LCCNFHFIGIM_OFFSET UNITYSDK_OFFSET(0xF884C50)
#define DKNFHBOHMAF_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0xF884F40)
#define DKNFHBOHMAF_TICK_OFFSET UNITYSDK_OFFSET(0xF884E90)

inline static constexpr unsigned int DKNFHBOHMAF_TypeDefinitionIndex = 77653;

	class DKNFHBOHMAF : public ::System::Object
	{
	public:
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x10
		::HAJDFCHFBGN* JDANNEMAPJK; // 0x18
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x20
		::KAKADGHNMFK* PFHKDKKPBMF; // 0x28
		::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType DNANDLAPIFP; // 0x30
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>** StaticGet_GDOCHLDOBPM()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::System::String*>**)UnitySDK::FromName("", "DKNFHBOHMAF")->GetStaticField(0x56C10);
		}

		::System::Void _ctor(::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType a1, ::KAKADGHNMFK* a2, ::HAJDFCHFBGN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelMasterShowType, ::KAKADGHNMFK*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + DKNFHBOHMAF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKNFHBOHMAF_CCTOR_OFFSET))();
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + DKNFHBOHMAF_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKNFHBOHMAF_TICK_OFFSET))(this, a1);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNFHBOHMAF_ACMKLFOMPFC_OFFSET))(this);
		}

		::System::Void LCCNFHFIGIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNFHBOHMAF_LCCNFHFIGIM_OFFSET))(this);
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKNFHBOHMAF_NFDHENMGIBA_OFFSET))();
		}

	};

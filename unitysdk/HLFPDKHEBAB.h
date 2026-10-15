#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class HAJDFCHFBGN;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
class OMFDCMJIAHG;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLFPDKHEBAB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x15D52910)
#define HLFPDKHEBAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D52950)
#define HLFPDKHEBAB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D52270)
#define HLFPDKHEBAB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D52670)
#define HLFPDKHEBAB_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0x15D52490)
#define HLFPDKHEBAB_TICK_OFFSET UNITYSDK_OFFSET(0x15D528A0)

inline static constexpr unsigned int HLFPDKHEBAB_TypeDefinitionIndex = 77660;

	class HLFPDKHEBAB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x10
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x18
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>** StaticGet_NBEKIBIEAOJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelStatusType, ::System::String*>**)UnitySDK::FromName("", "HLFPDKHEBAB")->GetStaticField(0x24AD0);
		}

		::System::Void _ctor(::KAKADGHNMFK* a1, ::RPG::GameCore::ChimeraDuelStatusType a2, ::OMFDCMJIAHG* a3, ::HAJDFCHFBGN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelStatusType, ::OMFDCMJIAHG*, ::HAJDFCHFBGN*))((::PBYTE)hIl2Cpp + HLFPDKHEBAB_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFPDKHEBAB_CCTOR_OFFSET))();
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLFPDKHEBAB_NFDHENMGIBA_OFFSET))();
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + HLFPDKHEBAB_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HLFPDKHEBAB_TICK_OFFSET))(this, a1);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFPDKHEBAB_ACMKLFOMPFC_OFFSET))(this);
		}

	};

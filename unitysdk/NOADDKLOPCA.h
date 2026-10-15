#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBuffType.h"
#include "unitysdk/System/Object.h"
class AFNDGNFOAKC;
class HBLDGJCDJPF;
class ICCLDNDNHPD;
class KAKADGHNMFK;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOADDKLOPCA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBCD89B0)
#define NOADDKLOPCA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD84F0)
#define NOADDKLOPCA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCD8770)
#define NOADDKLOPCA_TICK_OFFSET UNITYSDK_OFFSET(0xBCD8940)

inline static constexpr unsigned int NOADDKLOPCA_TypeDefinitionIndex = 77647;

	class NOADDKLOPCA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HBLDGJCDJPF*>* OJFECHILFHG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBuffType, ::System::String*>* IMGOJOKFAMK; // 0x18
		::AFNDGNFOAKC* HFOFIODMFGB; // 0x20
		::System::Void _ctor(::KAKADGHNMFK* a1, ::KAKADGHNMFK* a2, ::KAKADGHNMFK* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*, ::KAKADGHNMFK*, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + NOADDKLOPCA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + NOADDKLOPCA_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOADDKLOPCA_TICK_OFFSET))(this, a1);
		}

		::AFNDGNFOAKC* ACMKLFOMPFC()
		{
			return ((::AFNDGNFOAKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOADDKLOPCA_ACMKLFOMPFC_OFFSET))(this);
		}

	};

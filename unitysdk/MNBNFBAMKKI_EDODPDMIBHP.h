#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtModifierEvent.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JMLPEFKGCAH.h"
class BAJENICFMMH;
class KFELGAIGHAP;
class MNBNFBAMKKI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SequenceConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNBNFBAMKKI_EDODPDMIBHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB9E1BE0)
#define MNBNFBAMKKI_EDODPDMIBHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E23A0)
#define MNBNFBAMKKI_EDODPDMIBHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E1C00)
#define MNBNFBAMKKI_EDODPDMIBHP_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0xB9E23E0)
#define MNBNFBAMKKI_EDODPDMIBHP_GET_NEXT_OFFSET UNITYSDK_OFFSET(0xB9E2460)
#define MNBNFBAMKKI_EDODPDMIBHP_GET_PREV_OFFSET UNITYSDK_OFFSET(0xB9E2440)
#define MNBNFBAMKKI_EDODPDMIBHP_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB9E2480)
#define MNBNFBAMKKI_EDODPDMIBHP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB9E12C0)
#define MNBNFBAMKKI_EDODPDMIBHP_MFCKCOPELOH_OFFSET UNITYSDK_OFFSET(0xB9E23D0)
#define MNBNFBAMKKI_EDODPDMIBHP_OICONEEJHJK_OFFSET UNITYSDK_OFFSET(0xB9E2490)
#define MNBNFBAMKKI_EDODPDMIBHP_SET_NEXT_OFFSET UNITYSDK_OFFSET(0xB9E2470)
#define MNBNFBAMKKI_EDODPDMIBHP_SET_PREV_OFFSET UNITYSDK_OFFSET(0xB9E2450)

inline static constexpr unsigned int MNBNFBAMKKI_EDODPDMIBHP_TypeDefinitionIndex = 53781;

	class MNBNFBAMKKI_EDODPDMIBHP : public ::System::Object
	{
	public:
		::BAJENICFMMH* _Next_k__BackingField; // 0x10
		::BAJENICFMMH* _Prev_k__BackingField; // 0x18
		::MNBNFBAMKKI* NKLLHEGOJLA; // 0x20
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* PBNCOAFHEIJ; // 0x28
		::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* JKJPFJALGKO; // 0x30
		::System::Int32 BGOLHKLOFIN; // 0x38
		::RPG::GameCore::RtModifierEvent CANHNFEAIDC; // 0x3C
		::System::Int32 BOCOKNFLKID; // 0x40
		::System::Void _ctor(::MNBNFBAMKKI* a1, ::RPG::GameCore::SequenceConfig* a2, ::RPG::GameCore::RtModifierEvent a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*, ::RPG::GameCore::SequenceConfig*, ::RPG::GameCore::RtModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::MNBNFBAMKKI* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a2, ::RPG::GameCore::RtModifierEvent a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MNBNFBAMKKI*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*, ::RPG::GameCore::RtModifierEvent, ::System::Int32))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_DISPOSE_OFFSET))(this);
		}

		::MNBNFBAMKKI* MFCKCOPELOH()
		{
			return ((::MNBNFBAMKKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_MFCKCOPELOH_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_FIIIDGBIHNB_OFFSET))(this);
		}

		::BAJENICFMMH* get_Prev()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_SET_PREV_OFFSET))(this, a1);
		}

		::BAJENICFMMH* get_Next()
		{
			return ((::BAJENICFMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::BAJENICFMMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJENICFMMH*))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_SET_NEXT_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_GET_PRIORITY_OFFSET))(this);
		}

		::KFELGAIGHAP* OICONEEJHJK()
		{
			return ((::KFELGAIGHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_OICONEEJHJK_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::JMLPEFKGCAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLPEFKGCAH))((::PBYTE)hIl2Cpp + MNBNFBAMKKI_EDODPDMIBHP_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};

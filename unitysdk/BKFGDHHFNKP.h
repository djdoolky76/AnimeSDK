#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamType.h"
#include "unitysdk/System/Object.h"
class BLPCFOHJBJO;
class CCMJADNHDAG;
class ECIIEBFKNMJ;
class EPJAGIOHHCE;
class KEOAHACPAFG;
class LMJPODEEGKK;
class NBFCOGKMDGA;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define BKFGDHHFNKP_AFNBGKICCEK_OFFSET UNITYSDK_OFFSET(0xB7B3640)
#define BKFGDHHFNKP_BKOGALPBDFE_OFFSET UNITYSDK_OFFSET(0xB7B1250)
#define BKFGDHHFNKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B0B20)
#define BKFGDHHFNKP_DEIINLJEAGO_OFFSET UNITYSDK_OFFSET(0xB7B2330)
#define BKFGDHHFNKP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB7B0BB0)
#define BKFGDHHFNKP_FHCDAMPOGHP_OFFSET UNITYSDK_OFFSET(0xB7B1670)
#define BKFGDHHFNKP_JDPLADOKPAG_OFFSET UNITYSDK_OFFSET(0xB7B2880)
#define BKFGDHHFNKP_NFDHENMGIBA_OFFSET UNITYSDK_OFFSET(0xB7B26D0)
#define BKFGDHHFNKP_NNBOAIKAKPF_OFFSET UNITYSDK_OFFSET(0xB7B13A0)

inline static constexpr unsigned int BKFGDHHFNKP_TypeDefinitionIndex = 77608;

	class BKFGDHHFNKP : public ::System::Object
	{
	public:
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::EPJAGIOHHCE* KPDLIJIFDEO; // 0x20
		::EPJAGIOHHCE* PMLCOGADLLE; // 0x28
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_EXECUTE_OFFSET))(this);
		}

		static ::System::Void NFDHENMGIBA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKFGDHHFNKP_NFDHENMGIBA_OFFSET))();
		}

		::System::Boolean BKOGALPBDFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_BKOGALPBDFE_OFFSET))(this);
		}

		::System::Void FHCDAMPOGHP(::CCMJADNHDAG* a1, ::RPG::GameCore::ChimeraDuelTeamType a2, ::EPJAGIOHHCE* a3, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>* a4, ::NBFCOGKMDGA* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CCMJADNHDAG*, ::RPG::GameCore::ChimeraDuelTeamType, ::EPJAGIOHHCE*, ::System::Collections::Generic::Queue_1<::KEOAHACPAFG*>*, ::NBFCOGKMDGA*))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_FHCDAMPOGHP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JDPLADOKPAG(::NBFCOGKMDGA* a1, ::CCMJADNHDAG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NBFCOGKMDGA*, ::CCMJADNHDAG*))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_JDPLADOKPAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean NNBOAIKAKPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_NNBOAIKAKPF_OFFSET))(this);
		}

		::System::Boolean DEIINLJEAGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_DEIINLJEAGO_OFFSET))(this);
		}

		::BLPCFOHJBJO* AFNBGKICCEK()
		{
			return ((::BLPCFOHJBJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKFGDHHFNKP_AFNBGKICCEK_OFFSET))(this);
		}

	};

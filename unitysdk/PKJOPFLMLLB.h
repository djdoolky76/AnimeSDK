#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/SimulateInputType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class PLKAJKKLGOL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKJOPFLMLLB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBB7770)
#define PKJOPFLMLLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB79A0)
#define PKJOPFLMLLB_JMNEJAMCHBB_OFFSET UNITYSDK_OFFSET(0x1DBB78E0)
#define PKJOPFLMLLB_NJEMPMLBDDB_OFFSET UNITYSDK_OFFSET(0x1DBB7820)

inline static constexpr unsigned int PKJOPFLMLLB_TypeDefinitionIndex = 44011;

	class PKJOPFLMLLB : public ::System::Object
	{
	public:
		::PLKAJKKLGOL* CFCGOPHFJPF; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* PCHLMCCDMKG; // 0x18
		::System::Collections::Generic::List_1<::System::Single>* AFJMECMIMOO; // 0x20
		::System::UInt32 FENJGDJFGFL; // 0x28
		::System::Boolean MNMBAANKOGG; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 GLANPLEGMPG; // 0x30
		::System::UInt32 COFAKDPCNEB; // 0x34
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> HIKJECOPFMI; // 0x38
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> OCCIGEAJGHK; // 0x40
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> JEPOIFJFOFA; // 0x48
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FOKJOEKBEML; // 0x50
		::System::UInt32 PMOHKEDFGHP; // 0x58
		::System::UInt32 EFNNOMMFCOJ; // 0x5C
		::System::UInt32 HHCPCIBKMFJ; // 0x60
		::System::UInt32 CDGDPFNDPLK; // 0x64
		::RPG::Client::LittleGame::Match3::SimulateInputType PLEMHLIAKPF; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOPFLMLLB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJOPFLMLLB_CLEAR_OFFSET))(this);
		}

		::System::Void NJEMPMLBDDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKJOPFLMLLB_NJEMPMLBDDB_OFFSET))(this, a1);
		}

		::System::Void JMNEJAMCHBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKJOPFLMLLB_JMNEJAMCHBB_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactForbidReason.h"
#include "unitysdk/System/Object.h"
class GOCDHLDEGEJ;
class ILLGBAOOJNL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJAIOGHEIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1230)

inline static constexpr unsigned int LJAIOGHEIBA_TypeDefinitionIndex = 42913;

	class LJAIOGHEIBA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GOCDHLDEGEJ*>* GAILLLKAPBG; // 0x10
		::System::Collections::Generic::List_1<::ILLGBAOOJNL*>* KEHMPHPNKOJ; // 0x18
		::System::Single AHDJBLLKJHH; // 0x20
		::System::Int32 FPNAIENFKPC; // 0x24
		::RPG::Client::LittleGame::RoadRash::EImpactForbidReason HGGCKKKJGEA; // 0x28
		::System::Single FFMCDLHHJOJ; // 0x2C
		::System::Single ICBEAHNHEPE; // 0x30
		::System::Single GGBKKCNLAJC; // 0x34
		::System::Single OMCCJFEOHNM; // 0x38
		::System::Single AJLMPDEEALF; // 0x3C
		::System::Boolean KOBBEOHKHMP; // 0x40
		::System::Boolean HIPOBLKBCNJ; // 0x41
		::System::Boolean OCCJEJNJPBJ; // 0x42
		::System::Byte _padding0[0x1];
		::System::Single FMFLEFJALHG; // 0x44
		::System::Int32 DCCLODLELLG; // 0x48
		::System::Single JJGOEDKMFPH; // 0x4C
		::System::Single ICGGAKJGMKP; // 0x50
		::System::Single DLABOOMFBOG; // 0x54
		::System::Single HHCHHADNNLL; // 0x58
		::System::Single OPCFBHBHDKP; // 0x5C
		::System::Single JOBIDGDKIFA; // 0x60
		::System::Single KPFEKBDCGPB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAIOGHEIBA_CTOR_OFFSET))(this);
		}

	};

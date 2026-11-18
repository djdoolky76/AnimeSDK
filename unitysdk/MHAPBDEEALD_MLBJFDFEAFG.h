#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MHAPBDEEALD_PEENLLHIGNC;
class ONPKEJKAEOI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHAPBDEEALD_MLBJFDFEAFG_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x11F4A4D0)
#define MHAPBDEEALD_MLBJFDFEAFG_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x11F4A3F0)
#define MHAPBDEEALD_MLBJFDFEAFG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F4A3E0)

inline static constexpr unsigned int MHAPBDEEALD_MLBJFDFEAFG_TypeDefinitionIndex = 54900;

class MHAPBDEEALD_MLBJFDFEAFG : public ::System::Object
{
public:
	::ONPKEJKAEOI* IOLNIEOLEAF; // 0x10
	::System::String* AOPKIEIEPJC; // 0x18
	::MHAPBDEEALD_PEENLLHIGNC* LJBPECKCCEA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* MNDIBLLFAJI; // 0x28
	::System::Int32 FGHCGCMHLEN; // 0x30
	::System::Int32 FHEJELHALJE; // 0x34
	::System::Int32 DFKPOCJILEM; // 0x38
	::System::UInt32 DEFAKCIAKLG; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_MLBJFDFEAFG__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_MLBJFDFEAFG_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBDEEALD_MLBJFDFEAFG_AAHMACBDCPN_OFFSET))(this);
	}
};

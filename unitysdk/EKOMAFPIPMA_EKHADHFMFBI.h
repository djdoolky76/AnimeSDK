#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLNHLNMDHJ.h"
#include "unitysdk/System/Object.h"

class EKOMAFPIPMA_MKHNHHPDENB;
class FDOKNLPCNHO;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EKOMAFPIPMA_EKHADHFMFBI_CGJBEOPOIPC_OFFSET UNITYSDK_OFFSET(0x10F3C680)
#define EKOMAFPIPMA_EKHADHFMFBI_IEFGKGKDJKC_OFFSET UNITYSDK_OFFSET(0x10F3C630)
#define EKOMAFPIPMA_EKHADHFMFBI_IKPKFHHLINJ_OFFSET UNITYSDK_OFFSET(0x10F3C5B0)
#define EKOMAFPIPMA_EKHADHFMFBI_POBNPMIIKJF_OFFSET UNITYSDK_OFFSET(0x10F3C530)
#define EKOMAFPIPMA_EKHADHFMFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3C520)

inline static constexpr unsigned int EKOMAFPIPMA_EKHADHFMFBI_TypeDefinitionIndex = 62753;

class EKOMAFPIPMA_EKHADHFMFBI : public ::System::Object
{
public:
	::System::String* AGKDLEFPCEI; // 0x10
	::System::Action_1<::System::Boolean>* CPCOBKCDFIF; // 0x18
	::FDOKNLPCNHO* BPGPPMDMKEK; // 0x20
	::EKOMAFPIPMA_MKHNHHPDENB* KOIBHLHLMFC; // 0x28
	::JBLNHLNMDHJ EPBHBCMCMOK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_EKHADHFMFBI__CTOR_OFFSET))(this);
	}

	::System::Void POBNPMIIKJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_EKHADHFMFBI_POBNPMIIKJF_OFFSET))(this);
	}

	::System::Void IKPKFHHLINJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_EKHADHFMFBI_IKPKFHHLINJ_OFFSET))(this);
	}

	::System::Void IEFGKGKDJKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_EKHADHFMFBI_IEFGKGKDJKC_OFFSET))(this);
	}

	::System::Void CGJBEOPOIPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOMAFPIPMA_EKHADHFMFBI_CGJBEOPOIPC_OFFSET))(this);
	}
};

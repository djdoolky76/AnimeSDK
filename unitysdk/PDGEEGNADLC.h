#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Color.h"

#define PDGEEGNADLC__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA6B00)

inline static constexpr unsigned int PDGEEGNADLC_TypeDefinitionIndex = 63404;

class PDGEEGNADLC : public ::IOONMNPCCNF
{
public:
	::System::Single COGEOKCHKOJ; // 0x18
	::System::Single DHDCCKKKMMN; // 0x1C
	::System::Single POLKJIAHAJM; // 0x20
	::System::Single EONHMGJNLNL; // 0x24
	::System::Single BGBCIKGLFNJ; // 0x28
	::System::Single LLCBNEEHICG; // 0x2C
	::UnityEngine::Rendering::Universal::HQBloomMode MNJMGGMDOFP; // 0x30
	::System::Single EABLADHHCFN; // 0x34
	::System::Single NIFFDHLNMBJ; // 0x38
	::System::Single BFFAPFLEDPH; // 0x3C
	::System::Single HBLNNJOIDMD; // 0x40
	::System::Single KNHNMEJCKFC; // 0x44
	::System::Single BPMHFPBINED; // 0x48
	::System::Single LAHHIMEBFAB; // 0x4C
	::System::Single ALPELOAOFOE; // 0x50
	::System::Single EAHCLMFOGOA; // 0x54
	::System::Single PCHHBKFPGOM; // 0x58
	::System::Single BIHDCBFANPJ; // 0x5C
	::System::Single FIOHLIGAIIC; // 0x60
	::System::Single IPPDBGHNJHB; // 0x64
	::UnityEngine::Color IEKBFDAANEM; // 0x68
	::System::Boolean NOPJKNEFACN; // 0x78
	::System::Boolean LPJOPDCMNKL; // 0x79
	::System::Byte _padding0[0x2];
	::System::Single EJLJOIBGDAF; // 0x7C
	::System::Single BOKJBELCFAE; // 0x80
	::System::Single NFOBDECMMEP; // 0x84
	::UnityEngine::Rendering::Universal::BloomResolution POGDKDPMJCG; // 0x88
	::System::Single OMIMGEOLNHB; // 0x8C
	::System::Single DLDGKJHLGDI; // 0x90
	::UnityEngine::Rendering::Universal::PP_Quality BLKHAIFAEDC; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDGEEGNADLC__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"
#include "unitysdk/MIKOMFIBMBN.h"

namespace System { class EventArgs; }
namespace System { class String; }

#define JBOBONKJIKI_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x197F9E30)
#define JBOBONKJIKI_FHNCNHCPEHE_OFFSET UNITYSDK_OFFSET(0x197FA330)
#define JBOBONKJIKI_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x197FA3C0)
#define JBOBONKJIKI_LLDFBBFJPCE_OFFSET UNITYSDK_OFFSET(0x197FA450)
#define JBOBONKJIKI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x197F9BB0)
#define JBOBONKJIKI__CTOR_OFFSET UNITYSDK_OFFSET(0x197FA2F0)

inline static constexpr unsigned int JBOBONKJIKI_TypeDefinitionIndex = 72313;

class JBOBONKJIKI : public ::BBKFNNHAKBP
{
public:
	::System::String* GPIEJDJFPLI; // 0x38
	::System::String* AEODOHPGGFP; // 0x40
	::MIKOMFIBMBN CHMCNNAAIMB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBONKJIKI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBONKJIKI_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBONKJIKI_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void FHNCNHCPEHE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JBOBONKJIKI_FHNCNHCPEHE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBONKJIKI_KHAEIOINMBG_OFFSET))(this);
	}

	::System::Void LLDFBBFJPCE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JBOBONKJIKI_LLDFBBFJPCE_OFFSET))(this, KOIBHLHLMFC);
	}
};

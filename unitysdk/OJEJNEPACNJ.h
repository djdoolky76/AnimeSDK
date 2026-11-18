#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHCHJCAIPPF.h"

namespace MoleMole { class UIBabeltowerTrickAvatarRowWidgetController; }
namespace System { class String; }

#define OJEJNEPACNJ_ALDDONDCCIB_OFFSET UNITYSDK_OFFSET(0xFB90F90)
#define OJEJNEPACNJ_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0xFB91020)
#define OJEJNEPACNJ_EPFKHDJPDDN_OFFSET UNITYSDK_OFFSET(0xFB91010)
#define OJEJNEPACNJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFB90F50)

inline static constexpr unsigned int OJEJNEPACNJ_TypeDefinitionIndex = 79677;

class OJEJNEPACNJ
{
public:
	::KHCHJCAIPPF OJHILFOMBED; // 0x28
	::System::Int32 IPIAGCPNDBB; // 0x3C
	::System::Int32 OKGEKIAGBJA; // 0x40

	::System::Void _ctor(::System::String* PDACHPLBKIE, ::System::Int32 OKGEKIAGBJA, ::System::Int32 IPIAGCPNDBB, ::KHCHJCAIPPF OJHILFOMBED)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::KHCHJCAIPPF))((::PBYTE)hIl2Cpp + OJEJNEPACNJ__CTOR_OFFSET))(this, PDACHPLBKIE, OKGEKIAGBJA, IPIAGCPNDBB, OJHILFOMBED);
	}

	::System::Void ALDDONDCCIB(::MoleMole::UIBabeltowerTrickAvatarRowWidgetController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*))((::PBYTE)hIl2Cpp + OJEJNEPACNJ_ALDDONDCCIB_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Void EPFKHDJPDDN(::MoleMole::UIBabeltowerTrickAvatarRowWidgetController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBabeltowerTrickAvatarRowWidgetController*))((::PBYTE)hIl2Cpp + OJEJNEPACNJ_EPFKHDJPDDN_OFFSET))(this, MIALFKCCCPI);
	}

	static ::OJEJNEPACNJ* COKNIICCODC(::System::Int32 IPIAGCPNDBB, ::KHCHJCAIPPF OJHILFOMBED)
	{
		return ((::OJEJNEPACNJ*(*)(::System::Int32, ::KHCHJCAIPPF))((::PBYTE)hIl2Cpp + OJEJNEPACNJ_COKNIICCODC_OFFSET))(IPIAGCPNDBB, OJHILFOMBED);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }

#define DGLNBEGLIJE_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x15A452E0)
#define DGLNBEGLIJE_FKLJPGLPDGN_OFFSET UNITYSDK_OFFSET(0x15A45350)
#define DGLNBEGLIJE_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x15A44E00)
#define DGLNBEGLIJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15A45340)

inline static constexpr unsigned int DGLNBEGLIJE_TypeDefinitionIndex = 90419;

class DGLNBEGLIJE : public ::System::Object
{
public:
	::System::String* KJMANOBEAKJ; // 0x10
	::System::Int32 IOPANHLMIPB; // 0x18
	::System::Int32 FFKKHIFOINA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLNBEGLIJE__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + DGLNBEGLIJE_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + DGLNBEGLIJE_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::Void FKLJPGLPDGN(::System::Int32 JPGFCAIKDKI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGLNBEGLIJE_FKLJPGLPDGN_OFFSET))(this, JPGFCAIKDKI);
	}
};

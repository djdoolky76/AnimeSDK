#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBDKCHECNEH.h"
#include "unitysdk/IFMDJFPDEIC.h"
#include "unitysdk/MKCDCEGJKLO.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMMBAMMANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0B20)

inline static constexpr unsigned int GMMBAMMANEL_TypeDefinitionIndex = 53882;

struct alignas(8) GMMBAMMANEL
{
	::System::Collections::Generic::List_1<::EBDKCHECNEH>* ELLNOKKMHIM; // 0x10
	::System::Collections::Generic::List_1<::IFMDJFPDEIC>* NJPNBMKDHLB; // 0x18
	::System::String* FNBPLGFBHKO; // 0x20
	::System::Int32 GDEKPBJKMAC; // 0x28
	::System::Int32 OEODNCAOMBK; // 0x2C
	::System::Boolean EJPHKIFDPNF; // 0x30
	::System::Boolean GKMKDKKNIAL; // 0x31
	::System::Boolean HDPLJPBDDJP; // 0x32
	::System::Boolean HIJOMEEGIJJ; // 0x33
	::System::Byte _padding0[0x4];
	::MKCDCEGJKLO CLBJHBJHJHK; // 0x38
	::System::UInt32 IPEKCNEAHFO; // 0x40
	::System::Single NEIDGODMHHP; // 0x44
	::System::Int32 AFKLGJDKJIN; // 0x48
	::System::Int32 PNJDJJNMEPJ; // 0x4C

	::System::Void _ctor(::MKCDCEGJKLO CLBJHBJHJHK, ::System::String* FNBPLGFBHKO, ::System::Boolean HDPLJPBDDJP, ::System::Int32 PNJDJJNMEPJ, ::System::Int32 OEODNCAOMBK, ::System::Int32 GDEKPBJKMAC, ::System::UInt32 IPEKCNEAHFO, ::System::Boolean HIJOMEEGIJJ, ::System::Collections::Generic::List_1<::EBDKCHECNEH>* ELLNOKKMHIM, ::System::Boolean CKJDNABOGJN, ::System::Boolean COBPJPHIIJK, ::System::Int32 OJBNKIBIGGD, ::System::Single DJJCJANNLJF, ::System::Collections::Generic::List_1<::IFMDJFPDEIC>* NJPNBMKDHLB)
	{
		return ((::System::Void(*)(::PVOID, ::MKCDCEGJKLO, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::EBDKCHECNEH>*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::IFMDJFPDEIC>*))((::PBYTE)hIl2Cpp + GMMBAMMANEL__CTOR_OFFSET))(this, CLBJHBJHJHK, FNBPLGFBHKO, HDPLJPBDDJP, PNJDJJNMEPJ, OEODNCAOMBK, GDEKPBJKMAC, IPEKCNEAHFO, HIJOMEEGIJJ, ELLNOKKMHIM, CKJDNABOGJN, COBPJPHIIJK, OJBNKIBIGGD, DJJCJANNLJF, NJPNBMKDHLB);
	}
};

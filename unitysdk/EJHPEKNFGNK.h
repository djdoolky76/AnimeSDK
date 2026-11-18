#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEDAJHGGECK;
class IPHCMHKIFNO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJHPEKNFGNK_FELHHFNJIOB_OFFSET UNITYSDK_OFFSET(0x11CAAEB0)
#define EJHPEKNFGNK_PFECNCCLEDF_OFFSET UNITYSDK_OFFSET(0x11CAB5B0)
#define EJHPEKNFGNK__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAAEA0)

inline static constexpr unsigned int EJHPEKNFGNK_TypeDefinitionIndex = 83129;

class EJHPEKNFGNK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::IEDAJHGGECK*>*>* BOMGNKHDNBJ; // 0x10
	::IPHCMHKIFNO* MKOMFJIBKMK; // 0x18

	::System::Void _ctor(::IPHCMHKIFNO* MKOMFJIBKMK)
	{
		return ((::System::Void(*)(::PVOID, ::IPHCMHKIFNO*))((::PBYTE)hIl2Cpp + EJHPEKNFGNK__CTOR_OFFSET))(this, MKOMFJIBKMK);
	}

	::System::Void FELHHFNJIOB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHPEKNFGNK_FELHHFNJIOB_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::IEDAJHGGECK*>*>* PFECNCCLEDF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::IEDAJHGGECK*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHPEKNFGNK_PFECNCCLEDF_OFFSET))(this);
	}
};

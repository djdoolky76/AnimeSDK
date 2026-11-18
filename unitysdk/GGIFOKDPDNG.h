#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MBDDPHPODAN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T1, typename T2> class ABIDMLIHJCI_2;

#define GGIFOKDPDNG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x13DD54A0)
#define GGIFOKDPDNG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13DD53A0)
#define GGIFOKDPDNG_EDNGFCPLJEK_OFFSET UNITYSDK_OFFSET(0x13DD5280)
#define GGIFOKDPDNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13DD5290)
#define GGIFOKDPDNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x13DD5210)
#define GGIFOKDPDNG_FBJNIPMOBFB_OFFSET UNITYSDK_OFFSET(0x13DD5530)
#define GGIFOKDPDNG_FHPAJEPICBI_OFFSET UNITYSDK_OFFSET(0x13DD5520)
#define GGIFOKDPDNG_HEKCCGHODBM_OFFSET UNITYSDK_OFFSET(0x13DD5780)
#define GGIFOKDPDNG_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x13DD5840)
#define GGIFOKDPDNG_JMHPEKFJGOI_OFFSET UNITYSDK_OFFSET(0x13DD55A0)
#define GGIFOKDPDNG_OGDAIOOJDPK_OFFSET UNITYSDK_OFFSET(0x13DD4180)
#define GGIFOKDPDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD3F50)

inline static constexpr unsigned int GGIFOKDPDNG_TypeDefinitionIndex = 67146;

class GGIFOKDPDNG : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle JLAJKKDBBLB; // 0x10
	::ABIDMLIHJCI_2<::System::Int32, ::System::Int32>* HPAODPKOIMM; // 0x20
	::System::Boolean IKBICHIABHC; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 NFACFCMFNEC; // 0x2C
	::MBDDPHPODAN OPECKDNKIDK; // 0x30

	::System::Void _ctor(::System::Int32 LJMPPBEMEPP, ::System::Int32 CCPKKOLNPFF, ::System::Int32 LJNDNELOIPA, ::System::Int32 DDFCBOBHEDI, ::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI, ::System::Int32 BBBFHGJLBKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32))((::PBYTE)hIl2Cpp + GGIFOKDPDNG__CTOR_OFFSET))(this, LJMPPBEMEPP, CCPKKOLNPFF, LJNDNELOIPA, DDFCBOBHEDI, AMNIHACKELI, BBBFHGJLBKM);
	}

	::System::Boolean Equals(::GGIFOKDPDNG* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGIFOKDPDNG*))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_DISPOSE_OFFSET))(this);
	}

	::System::Int32 CompareTo(::GGIFOKDPDNG* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::GGIFOKDPDNG*))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Int32 EDNGFCPLJEK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_EDNGFCPLJEK_OFFSET))(this);
	}

	::System::Void OGDAIOOJDPK(::MBDDPHPODAN FPBEPINAPII, ::System::Boolean ICLICLOGOCJ)
	{
		return ((::System::Void(*)(::PVOID, ::MBDDPHPODAN, ::System::Boolean))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_OGDAIOOJDPK_OFFSET))(this, FPBEPINAPII, ICLICLOGOCJ);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* FHPAJEPICBI()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_FHPAJEPICBI_OFFSET))(this);
	}

	::System::Boolean FBJNIPMOBFB(::GGIFOKDPDNG* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GGIFOKDPDNG*))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_FBJNIPMOBFB_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* JMHPEKFJGOI()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_JMHPEKFJGOI_OFFSET))(this);
	}

	::System::Boolean HEKCCGHODBM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_HEKCCGHODBM_OFFSET))(this);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGIFOKDPDNG_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};

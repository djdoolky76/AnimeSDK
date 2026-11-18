#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CABLBKNPKIO_CKFNFCEPHBI_OFFSET UNITYSDK_OFFSET(0x1685E690)
#define CABLBKNPKIO_DBEMGEKEAAO_OFFSET UNITYSDK_OFFSET(0x1685E6F0)
#define CABLBKNPKIO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1685E630)
#define CABLBKNPKIO_HDKAECAOGCI_OFFSET UNITYSDK_OFFSET(0x1685E640)
#define CABLBKNPKIO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1685E5A0)
#define CABLBKNPKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1685E4F0)

inline static constexpr unsigned int CABLBKNPKIO_TypeDefinitionIndex = 88237;

class CABLBKNPKIO : public ::System::Object
{
public:
	// static const ::System::Int32 JMJGBPMHOEM = -0x1; // 0x0
	::System::Collections::Generic::List_1<::CABLBKNPKIO*>* GLCOCNJJLKK; // 0x10
	::System::Int32 DIKDFANAEJN; // 0x18

	::System::Void _ctor(::System::Int32 INFACOGDIIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CABLBKNPKIO__CTOR_OFFSET))(this, INFACOGDIIC);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLBKNPKIO__CTOR_1_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLBKNPKIO_FINALIZE_OFFSET))(this);
	}

	::System::Int32 HDKAECAOGCI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLBKNPKIO_HDKAECAOGCI_OFFSET))(this);
	}

	::System::Boolean CKFNFCEPHBI(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CABLBKNPKIO_CKFNFCEPHBI_OFFSET))(this, ABHBKFJKINO);
	}

	::CABLBKNPKIO* DBEMGEKEAAO(::CABLBKNPKIO* HHIJHDFHPOI)
	{
		return ((::CABLBKNPKIO*(*)(::PVOID, ::CABLBKNPKIO*))((::PBYTE)hIl2Cpp + CABLBKNPKIO_DBEMGEKEAAO_OFFSET))(this, HHIJHDFHPOI);
	}
};

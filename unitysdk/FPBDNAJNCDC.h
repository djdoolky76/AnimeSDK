#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BIAGAMOMOHO;
class CMIMAMMMOKA;
class DLDGOPHECJB;
class ENAEFMHBIID;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPBDNAJNCDC_CFDCHDOOKLF_OFFSET UNITYSDK_OFFSET(0x15E7B8F0)
#define FPBDNAJNCDC_EDDBGENPPAB_OFFSET UNITYSDK_OFFSET(0x15E7B960)
#define FPBDNAJNCDC_PFNGLLAKGPC_OFFSET UNITYSDK_OFFSET(0x15E7B230)
#define FPBDNAJNCDC_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x15E7B1D0)
#define FPBDNAJNCDC__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7B8E0)

inline static constexpr unsigned int FPBDNAJNCDC_TypeDefinitionIndex = 71029;

class FPBDNAJNCDC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBDNAJNCDC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PKOGNPKCHHE(::ENAEFMHBIID* AAOCANGHBDG)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*))((::PBYTE)hIl2Cpp + FPBDNAJNCDC_PKOGNPKCHHE_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Collections::Generic::List_1<::CMIMAMMMOKA*>* PFNGLLAKGPC(::ENAEFMHBIID* AAOCANGHBDG, ::DLDGOPHECJB* AMEFDLEMJEL)
	{
		return ((::System::Collections::Generic::List_1<::CMIMAMMMOKA*>*(*)(::PVOID, ::ENAEFMHBIID*, ::DLDGOPHECJB*))((::PBYTE)hIl2Cpp + FPBDNAJNCDC_PFNGLLAKGPC_OFFSET))(this, AAOCANGHBDG, AMEFDLEMJEL);
	}

	::System::Boolean CFDCHDOOKLF(::BIAGAMOMOHO* BPGCPDLINPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::BIAGAMOMOHO*))((::PBYTE)hIl2Cpp + FPBDNAJNCDC_CFDCHDOOKLF_OFFSET))(this, BPGCPDLINPK);
	}

	::BIAGAMOMOHO* EDDBGENPPAB(::DLDGOPHECJB* AMEFDLEMJEL, ::System::UInt32 PNGHHCBOEGL)
	{
		return ((::BIAGAMOMOHO*(*)(::PVOID, ::DLDGOPHECJB*, ::System::UInt32))((::PBYTE)hIl2Cpp + FPBDNAJNCDC_EDDBGENPPAB_OFFSET))(this, AMEFDLEMJEL, PNGHHCBOEGL);
	}
};

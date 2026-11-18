#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMFFICIBPCC.h"
#include "unitysdk/System/Object.h"

class BEFJNIEKKDB;
class DCKPICPFOFD;
class GPKIDAPNOOB;
class JDDHAHBFBMI;
class OECEOEBMMOD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCNAKEDGLIO_BNMCPBPAFMJ_OFFSET UNITYSDK_OFFSET(0x13CA9100)
#define JCNAKEDGLIO_IKMKNLMHAEM_OFFSET UNITYSDK_OFFSET(0x13CA9010)
#define JCNAKEDGLIO_KCACAOAJIKI_OFFSET UNITYSDK_OFFSET(0x13CA8D20)
#define JCNAKEDGLIO_MKPLGHMNJOO_OFFSET UNITYSDK_OFFSET(0x13CA8F50)
#define JCNAKEDGLIO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA8C30)

inline static constexpr unsigned int JCNAKEDGLIO_TypeDefinitionIndex = 63500;

class JCNAKEDGLIO : public ::System::Object
{
public:
	::BEFJNIEKKDB* FLLPFKDJCMG; // 0x10
	::System::Collections::Generic::Dictionary_2<::CMFFICIBPCC, ::OECEOEBMMOD*>* CNAEJMINHMI; // 0x18
	::System::Collections::Generic::List_1<::GPKIDAPNOOB*>* JMMLIAEELBE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNAKEDGLIO__CTOR_OFFSET))(this);
	}

	::System::Void KCACAOAJIKI(::DCKPICPFOFD* GLAOEHCGCFO, ::CMFFICIBPCC FLMJOFMLFBM)
	{
		return ((::System::Void(*)(::PVOID, ::DCKPICPFOFD*, ::CMFFICIBPCC))((::PBYTE)hIl2Cpp + JCNAKEDGLIO_KCACAOAJIKI_OFFSET))(this, GLAOEHCGCFO, FLMJOFMLFBM);
	}

	::System::Void MKPLGHMNJOO(::JDDHAHBFBMI* LJBPECKCCEA, ::System::Boolean CACMHFNCPNM)
	{
		return ((::System::Void(*)(::PVOID, ::JDDHAHBFBMI*, ::System::Boolean))((::PBYTE)hIl2Cpp + JCNAKEDGLIO_MKPLGHMNJOO_OFFSET))(this, LJBPECKCCEA, CACMHFNCPNM);
	}

	::System::Void IKMKNLMHAEM(::System::Collections::Generic::List_1<::GPKIDAPNOOB*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GPKIDAPNOOB*>*))((::PBYTE)hIl2Cpp + JCNAKEDGLIO_IKMKNLMHAEM_OFFSET))(this, DJLOKMMLFJC);
	}

	::OECEOEBMMOD* BNMCPBPAFMJ(::CMFFICIBPCC FLMJOFMLFBM)
	{
		return ((::OECEOEBMMOD*(*)(::PVOID, ::CMFFICIBPCC))((::PBYTE)hIl2Cpp + JCNAKEDGLIO_BNMCPBPAFMJ_OFFSET))(this, FLMJOFMLFBM);
	}
};

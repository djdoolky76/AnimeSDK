#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHHMEPILLHL.h"
#include "unitysdk/PKHKEEKIODC_FHPOBLJBLPI.h"
#include "unitysdk/System/Object.h"
class DILNLDDKOCN;
class KNNDMDMHDHO;
class MKJBLEPELNC;
class PKHKEEKIODC;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOPGLPPMOMI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B3C790)
#define GOPGLPPMOMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3C710)
#define GOPGLPPMOMI_JDJDCFLAKGP_OFFSET UNITYSDK_OFFSET(0x15B3C900)

inline static constexpr unsigned int GOPGLPPMOMI_TypeDefinitionIndex = 67115;

	class GOPGLPPMOMI : public ::System::Object
	{
	public:
		::MKJBLEPELNC* NBJGPJHKEFC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::KNNDMDMHDHO*>* EBADMNICGMM; // 0x18
		::System::Void _ctor(::MKJBLEPELNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKJBLEPELNC*))((::PBYTE)hIl2Cpp + GOPGLPPMOMI_CTOR_OFFSET))(this, a1);
		}

		::DILNLDDKOCN* BPLPBPMEODA(::NHHMEPILLHL a1, ::PKHKEEKIODC* a2)
		{
			return ((::DILNLDDKOCN*(*)(::PVOID, ::NHHMEPILLHL, ::PKHKEEKIODC*))((::PBYTE)hIl2Cpp + GOPGLPPMOMI_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

		::System::Void JDJDCFLAKGP(::PKHKEEKIODC_FHPOBLJBLPI a1, ::KNNDMDMHDHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PKHKEEKIODC_FHPOBLJBLPI, ::KNNDMDMHDHO*))((::PBYTE)hIl2Cpp + GOPGLPPMOMI_JDJDCFLAKGP_OFFSET))(this, a1, a2);
		}

	};

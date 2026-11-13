#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBFGHNLMEDI;
class OLOHEGBPLFM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OLOHEGBPLFM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x178B5550)
#define OLOHEGBPLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x178B5600)
#define OLOHEGBPLFM_GKPDBFAGNJC_OFFSET UNITYSDK_OFFSET(0x178B5680)
#define OLOHEGBPLFM_ONNLAJCPKDF_OFFSET UNITYSDK_OFFSET(0x178B5800)
#define OLOHEGBPLFM_PGJHNANABHH_OFFSET UNITYSDK_OFFSET(0x178B5750)

inline static constexpr unsigned int OLOHEGBPLFM_TypeDefinitionIndex = 78804;

	class OLOHEGBPLFM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBFGHNLMEDI*>* FPOHLKJAODJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOHEGBPLFM_CTOR_OFFSET))(this);
		}

		static ::OLOHEGBPLFM* BPLPBPMEODA()
		{
			return ((::OLOHEGBPLFM*(*)())((::PBYTE)hIl2Cpp + OLOHEGBPLFM_BPLPBPMEODA_OFFSET))();
		}

		::JBFGHNLMEDI* GKPDBFAGNJC(::System::UInt32 a1)
		{
			return ((::JBFGHNLMEDI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOHEGBPLFM_GKPDBFAGNJC_OFFSET))(this, a1);
		}

		::JBFGHNLMEDI* PGJHNANABHH(::System::UInt32 a1)
		{
			return ((::JBFGHNLMEDI*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLOHEGBPLFM_PGJHNANABHH_OFFSET))(this, a1);
		}

		::System::Void ONNLAJCPKDF(::JBFGHNLMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBFGHNLMEDI*))((::PBYTE)hIl2Cpp + OLOHEGBPLFM_ONNLAJCPKDF_OFFSET))(this, a1);
		}

	};

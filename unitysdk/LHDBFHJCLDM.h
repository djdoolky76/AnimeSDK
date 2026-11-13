#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class ICollector_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LHDBFHJCLDM_AACFKKOIDCA_OFFSET UNITYSDK_OFFSET(0x1BCBB390)
#define LHDBFHJCLDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBAD90)
#define LHDBFHJCLDM_DKAONHHPOHN_OFFSET UNITYSDK_OFFSET(0x1BCBB7C0)
#define LHDBFHJCLDM_EOIAKGPLOBC_OFFSET UNITYSDK_OFFSET(0x1BCBAF70)
#define LHDBFHJCLDM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BCBAF20)
#define LHDBFHJCLDM_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1BCBB870)

inline static constexpr unsigned int LHDBFHJCLDM_TypeDefinitionIndex = 79992;

	class LHDBFHJCLDM : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* JDLBNFPEEDC; // 0x18
		::Entitas::ICollector_1<::LPHINGPIEAJ*>* EPEFDBOONGC; // 0x20
		::Entitas::ICollector_1<::LPHINGPIEAJ*>* LKDAFJGKGAG; // 0x28
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_EXECUTE_OFFSET))(this);
		}

		::System::Void EOIAKGPLOBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_EOIAKGPLOBC_OFFSET))(this);
		}

		::System::Void AACFKKOIDCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_AACFKKOIDCA_OFFSET))(this);
		}

		::System::Boolean DKAONHHPOHN(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_DKAONHHPOHN_OFFSET))(this, a1);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHDBFHJCLDM_TEARDOWN_OFFSET))(this);
		}

	};

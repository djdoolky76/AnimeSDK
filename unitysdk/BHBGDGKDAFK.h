#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AADPENKKEFE.h"
#include "unitysdk/BKCKJOIILED.h"
#include "unitysdk/LGLOOIHHHBL.h"
#include "unitysdk/System/ValueType.h"

class AMFAHGEFDFJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BHBGDGKDAFK_FAFECJFHLJC_OFFSET UNITYSDK_OFFSET(0x7CEB20)
#define BHBGDGKDAFK_ICHEEOEIAOB_OFFSET UNITYSDK_OFFSET(0x7CEB50)
#define BHBGDGKDAFK_NOEGBEDLCDA_OFFSET UNITYSDK_OFFSET(0x7CEB30)
#define BHBGDGKDAFK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x7CEB60)

inline static constexpr unsigned int BHBGDGKDAFK_TypeDefinitionIndex = 79757;

struct alignas(8) BHBGDGKDAFK
{
	::Il2CppArray<::System::Collections::Generic::List_1<::BKCKJOIILED>*>* MJHHONBEPEB; // 0x10
	::System::Collections::Generic::List_1<::AADPENKKEFE>* EEKBCEKJOIG; // 0x18

	::System::Collections::Generic::List_1<::BKCKJOIILED>* FAFECJFHLJC(::LGLOOIHHHBL OBNIAHNMHPF)
	{
		return ((::System::Collections::Generic::List_1<::BKCKJOIILED>*(*)(::PVOID, ::LGLOOIHHHBL))((::PBYTE)hIl2Cpp + BHBGDGKDAFK_FAFECJFHLJC_OFFSET))(this, OBNIAHNMHPF);
	}

	::AADPENKKEFE NOEGBEDLCDA(::AMFAHGEFDFJ* IGJNCNGHMDJ)
	{
		return ((::AADPENKKEFE(*)(::PVOID, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + BHBGDGKDAFK_NOEGBEDLCDA_OFFSET))(this, IGJNCNGHMDJ);
	}

	::System::Collections::Generic::List_1<::AADPENKKEFE>* ICHEEOEIAOB()
	{
		return ((::System::Collections::Generic::List_1<::AADPENKKEFE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBGDGKDAFK_ICHEEOEIAOB_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHBGDGKDAFK_NPOLNFDBOOD_OFFSET))(this);
	}
};

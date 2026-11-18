#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHFGBKLOPOH.h"
#include "unitysdk/System/Object.h"

class CEDHMCAELMM;
class HGAJKHIMKJP;
class NFPIABDLEKP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NILDMBKLJML_CDGEPJFADAP_OFFSET UNITYSDK_OFFSET(0xE75EE40)
#define NILDMBKLJML_DOFINPMPCKM_OFFSET UNITYSDK_OFFSET(0xE75EBB0)
#define NILDMBKLJML_HMGHAANLHNL_OFFSET UNITYSDK_OFFSET(0xE75EB40)
#define NILDMBKLJML__CTOR_OFFSET UNITYSDK_OFFSET(0xE75EB30)

inline static constexpr unsigned int NILDMBKLJML_TypeDefinitionIndex = 87441;

class NILDMBKLJML : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* PMHJBOFDPEJ; // 0x10
	::NFPIABDLEKP* JIBHGDHEIMI; // 0x18
	::CEDHMCAELMM* OEDEIANBGHL; // 0x20
	::IHFGBKLOPOH OBNIAHNMHPF; // 0x28

	::System::Void _ctor(::IHFGBKLOPOH OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::IHFGBKLOPOH))((::PBYTE)hIl2Cpp + NILDMBKLJML__CTOR_OFFSET))(this, OBNIAHNMHPF);
	}

	::System::Void HMGHAANLHNL(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NILDMBKLJML_HMGHAANLHNL_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void DOFINPMPCKM(::System::Collections::Generic::List_1<::System::UInt32>* AKLLPHFMJGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + NILDMBKLJML_DOFINPMPCKM_OFFSET))(this, AKLLPHFMJGN);
	}

	::System::Void CDGEPJFADAP(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NILDMBKLJML_CDGEPJFADAP_OFFSET))(this, MGMDLMBEDJF);
	}
};

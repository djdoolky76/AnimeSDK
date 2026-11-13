#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJABKDCINKK;
class KLGICPNPKIC;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BJABKDCINKK_FFGNECGLFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x208A5DB0)
#define BJABKDCINKK_FFGNECGLFKH_OHCAPGGOAGE_OFFSET UNITYSDK_OFFSET(0x208A5DC0)

inline static constexpr unsigned int BJABKDCINKK_FFGNECGLFKH_TypeDefinitionIndex = 42599;

	class BJABKDCINKK_FFGNECGLFKH : public ::System::Object
	{
	public:
		::BJABKDCINKK* EFIAILAKHBM; // 0x10
		::System::Void _ctor(::BJABKDCINKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJABKDCINKK*))((::PBYTE)hIl2Cpp + BJABKDCINKK_FFGNECGLFKH_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KLGICPNPKIC*>* OHCAPGGOAGE()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KLGICPNPKIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJABKDCINKK_FFGNECGLFKH_OHCAPGGOAGE_OFFSET))(this);
		}

	};

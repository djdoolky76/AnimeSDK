#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGJHAIDADBA.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Nullable_1.h"
class MOAAMGJICCD;
class OFBJPFPNFBP;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define OEHCEHBLPON_CFCIDJOPDCM_OFFSET UNITYSDK_OFFSET(0xBE259C0)
#define OEHCEHBLPON_CTOR_OFFSET UNITYSDK_OFFSET(0xBE26460)
#define OEHCEHBLPON_HFLKJGJOAIK_OFFSET UNITYSDK_OFFSET(0xBE261C0)
#define OEHCEHBLPON_KIHMEBLNKBI_OFFSET UNITYSDK_OFFSET(0xBE25AC0)

inline static constexpr unsigned int OEHCEHBLPON_TypeDefinitionIndex = 48913;

	class OEHCEHBLPON : public ::AGJHAIDADBA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHCEHBLPON_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>* CFCIDJOPDCM(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::System::Single a3, ::System::Single a4, ::OFBJPFPNFBP* a5)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Nullable_1<::System::Boolean>>*(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::System::Single, ::System::Single, ::OFBJPFPNFBP*))((::PBYTE)hIl2Cpp + OEHCEHBLPON_CFCIDJOPDCM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KIHMEBLNKBI(::MOAAMGJICCD* a1, ::OFBJPFPNFBP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MOAAMGJICCD*, ::OFBJPFPNFBP*))((::PBYTE)hIl2Cpp + OEHCEHBLPON_KIHMEBLNKBI_OFFSET))(this, a1, a2);
		}

		::System::Void HFLKJGJOAIK(::MOAAMGJICCD* a1, ::MOAAMGJICCD* a2, ::MOAAMGJICCD* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MOAAMGJICCD*, ::MOAAMGJICCD*, ::MOAAMGJICCD*))((::PBYTE)hIl2Cpp + OEHCEHBLPON_HFLKJGJOAIK_OFFSET))(this, a1, a2, a3);
		}

	};

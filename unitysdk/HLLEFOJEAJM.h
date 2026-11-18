#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class IANDOOLAALI_DKACGJABKED;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLLEFOJEAJM_DKLOEHIFJPA_OFFSET UNITYSDK_OFFSET(0x17A5C4F0)
#define HLLEFOJEAJM_MIIHEKIIBDO_OFFSET UNITYSDK_OFFSET(0x17A5C490)
#define HLLEFOJEAJM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5C570)
#define HLLEFOJEAJM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5C560)

inline static constexpr unsigned int HLLEFOJEAJM_TypeDefinitionIndex = 66078;

class HLLEFOJEAJM : public ::System::Object
{
public:
	static ::HLLEFOJEAJM** StaticGet_INEHOIDFMDC()
	{
		return (::HLLEFOJEAJM**)Il2CppClass::FromTypeDefinitionIndex(HLLEFOJEAJM_TypeDefinitionIndex)->GetStaticField(0x3A100);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLEFOJEAJM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLLEFOJEAJM__CCTOR_OFFSET))();
	}

	::System::Void MIIHEKIIBDO(::CFMGIKJLMBJ* NAPFALLANDL, ::System::Boolean NOIMECBKGJH, ::System::Boolean HNCIDNAILIN)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HLLEFOJEAJM_MIIHEKIIBDO_OFFSET))(this, NAPFALLANDL, NOIMECBKGJH, HNCIDNAILIN);
	}

	::System::Void DKLOEHIFJPA(::CFMGIKJLMBJ* NAPFALLANDL, ::IANDOOLAALI_DLAAJNDJPLO* FPNLKPJNCGK, ::IANDOOLAALI_NGKHGAPPFDA* NKGCDDCMBCF, ::System::Collections::Generic::List_1<::System::UInt16>* GPINKDFAPKE, ::IANDOOLAALI_DKACGJABKED* AKKMEAIJBBJ)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*, ::IANDOOLAALI_DLAAJNDJPLO*, ::IANDOOLAALI_NGKHGAPPFDA*, ::System::Collections::Generic::List_1<::System::UInt16>*, ::IANDOOLAALI_DKACGJABKED*))((::PBYTE)hIl2Cpp + HLLEFOJEAJM_DKLOEHIFJPA_OFFSET))(this, NAPFALLANDL, FPNLKPJNCGK, NKGCDDCMBCF, GPINKDFAPKE, AKKMEAIJBBJ);
	}
};

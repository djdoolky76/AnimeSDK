#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/JPNPHHIBPEK.h"
#include "unitysdk/System/Nullable_1.h"
class AkCallbackInfo;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCMKDOGOKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBD71070)
#define OCMKDOGOKPJ_EACDLOPNIOF_OFFSET UNITYSDK_OFFSET(0xBD71630)
#define OCMKDOGOKPJ_EPJFIHHDMAK_OFFSET UNITYSDK_OFFSET(0xBD71490)
#define OCMKDOGOKPJ_JLKCJDBCILK_OFFSET UNITYSDK_OFFSET(0xBD71170)
#define OCMKDOGOKPJ_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0xBD71550)
#define OCMKDOGOKPJ_NPOFEKBLAIH_OFFSET UNITYSDK_OFFSET(0xBD710F0)

inline static constexpr unsigned int OCMKDOGOKPJ_TypeDefinitionIndex = 72426;

	class OCMKDOGOKPJ : public ::JPNPHHIBPEK
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* HOCGAJDKPJF; // 0x20
		::System::Int32 NCDEGDCPCHN; // 0x28
		::System::Nullable_1<::System::UInt32> MFFPFLFAAGN; // 0x2C
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPOFEKBLAIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_NPOFEKBLAIH_OFFSET))(this);
		}

		::System::Void EPJFIHHDMAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_EPJFIHHDMAK_OFFSET))(this);
		}

		::System::Void KPAOCJEJCNA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_KPAOCJEJCNA_OFFSET))(this, a1);
		}

		::System::Boolean JLKCJDBCILK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_JLKCJDBCILK_OFFSET))(this);
		}

		::System::Void EACDLOPNIOF(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + OCMKDOGOKPJ_EACDLOPNIOF_OFFSET))(this, a1, a2, a3);
		}

	};

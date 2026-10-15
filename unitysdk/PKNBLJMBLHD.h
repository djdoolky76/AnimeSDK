#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOGIDPIEGG;
class DIBPAJHLFIF;
class MBGDHLKCOAB;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PKNBLJMBLHD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0170)
#define PKNBLJMBLHD_KBIOFNCCIAN_OFFSET UNITYSDK_OFFSET(0xC2DFE20)
#define PKNBLJMBLHD_LNBBIGFDAEH_OFFSET UNITYSDK_OFFSET(0xC2DFF10)
#define PKNBLJMBLHD_PCDBENKDKNI_OFFSET UNITYSDK_OFFSET(0xC2DFD10)

inline static constexpr unsigned int PKNBLJMBLHD_TypeDefinitionIndex = 54094;

	class PKNBLJMBLHD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* JBAAKGFJFIF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNBLJMBLHD_CTOR_OFFSET))(this);
		}

		::System::Void PCDBENKDKNI(::MBGDHLKCOAB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MBGDHLKCOAB*, ::System::Int32))((::PBYTE)hIl2Cpp + PKNBLJMBLHD_PCDBENKDKNI_OFFSET))(this, a1, a2);
		}

		::System::Void KBIOFNCCIAN(::MBGDHLKCOAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBGDHLKCOAB*))((::PBYTE)hIl2Cpp + PKNBLJMBLHD_KBIOFNCCIAN_OFFSET))(this, a1);
		}

		::DIBPAJHLFIF* LNBBIGFDAEH(::BDOGIDPIEGG* a1)
		{
			return ((::DIBPAJHLFIF*(*)(::PVOID, ::BDOGIDPIEGG*))((::PBYTE)hIl2Cpp + PKNBLJMBLHD_LNBBIGFDAEH_OFFSET))(this, a1);
		}

	};

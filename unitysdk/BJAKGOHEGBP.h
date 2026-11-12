#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIEBGAGBELM.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class FFDGKLEJGNI;
class LBJLBMOOJGM;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BJAKGOHEGBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF15F40)
#define BJAKGOHEGBP_GET_CONCRETE_OFFSET UNITYSDK_OFFSET(0x1FF15F30)
#define BJAKGOHEGBP_GET_CONTRACTS_OFFSET UNITYSDK_OFFSET(0x1FF15F20)

inline static constexpr unsigned int BJAKGOHEGBP_TypeDefinitionIndex = 45355;

	class BJAKGOHEGBP : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>* _Contracts_k__BackingField; // 0x10
		::FFDGKLEJGNI* BEOPHFOAECG; // 0x18
		::System::Object* AFCLHADDBKA; // 0x20
		::LBJLBMOOJGM* NKCLBBFDEEI; // 0x28
		::ECIAICDLAHO* _Concrete_k__BackingField; // 0x30
		::FIEBGAGBELM FNLHLLELBPA; // 0x38
		::System::Boolean LCNMMBEHLNH; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAKGOHEGBP_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>* get_Contracts()
		{
			return ((::System::Collections::Generic::HashSet_1<::FIEBGAGBELM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAKGOHEGBP_GET_CONTRACTS_OFFSET))(this);
		}

		::ECIAICDLAHO* get_Concrete()
		{
			return ((::ECIAICDLAHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJAKGOHEGBP_GET_CONCRETE_OFFSET))(this);
		}

	};

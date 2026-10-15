#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MLOAJFMEDHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74FAD0)
#define MLOAJFMEDHJ_IAKKCLCNCMG_OFFSET UNITYSDK_OFFSET(0x1C74F9D0)
#define MLOAJFMEDHJ_JMMACDMEANB_OFFSET UNITYSDK_OFFSET(0x1C74FA20)
#define MLOAJFMEDHJ_JNPMMLAOEAF_OFFSET UNITYSDK_OFFSET(0x1C74F980)
#define MLOAJFMEDHJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C74F880)

inline static constexpr unsigned int MLOAJFMEDHJ_TypeDefinitionIndex = 36204;

	class MLOAJFMEDHJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* CPOAIFJEAJF; // 0x10
		::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::System::String*>* EPAGKAIAOJK; // 0x18
		::System::Boolean GGHOFCHCMJC; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 DJNAIMHOHIH; // 0x24
		::System::Int32 KGCEIIJFCKE; // 0x28
		::System::Int32 MHLLBBDOLNG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAJFMEDHJ_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAJFMEDHJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Int32 JNPMMLAOEAF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAJFMEDHJ_JNPMMLAOEAF_OFFSET))(this);
		}

		::System::Int32 IAKKCLCNCMG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAJFMEDHJ_IAKKCLCNCMG_OFFSET))(this);
		}

		::System::Int32 JMMACDMEANB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAJFMEDHJ_JMMACDMEANB_OFFSET))(this);
		}

	};

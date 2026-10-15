#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGOMNMKCDJ.h"
#include "unitysdk/System/Object.h"
class PIOGCEBHNBF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPBKGEKGNCD_CTOR_OFFSET UNITYSDK_OFFSET(0xB5AFA80)
#define KPBKGEKGNCD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB5AF9B0)
#define KPBKGEKGNCD_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xB5AFA30)

inline static constexpr unsigned int KPBKGEKGNCD_TypeDefinitionIndex = 62015;

	class KPBKGEKGNCD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PIOGCEBHNBF*>* GFNEMGNAENC; // 0x10
		::IJGOMNMKCDJ ELIPCIIJPKA; // 0x18
		::System::UInt32 JNHDMJOOGML; // 0x1C
		::System::UInt32 KKFPOCBJAHE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBKGEKGNCD_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBKGEKGNCD_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPBKGEKGNCD_LDAMHBBILAD_OFFSET))(this);
		}

	};

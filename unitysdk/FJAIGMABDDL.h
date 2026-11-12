#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DOOKIBGLODI.h"
#include "unitysdk/NABBMLGAIBK.h"
class HLJNBBHKKMI;
class JMHHBMNIJJB;
class MJAOHLLPLGK;

#define FJAIGMABDDL_CTOR_OFFSET UNITYSDK_OFFSET(0x166D7330)
#define FJAIGMABDDL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x166D73B0)
#define FJAIGMABDDL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166D7350)
#define FJAIGMABDDL_NDJFNPLLPGP_OFFSET UNITYSDK_OFFSET(0x166D7BB0)

inline static constexpr unsigned int FJAIGMABDDL_TypeDefinitionIndex = 79998;

	class FJAIGMABDDL : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::JMHHBMNIJJB* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + FJAIGMABDDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAIGMABDDL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJAIGMABDDL_EXECUTE_OFFSET))(this);
		}

		::System::Boolean NDJFNPLLPGP(::System::Int32 a1, ::NABBMLGAIBK a2, ::DOOKIBGLODI a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NABBMLGAIBK, ::DOOKIBGLODI))((::PBYTE)hIl2Cpp + FJAIGMABDDL_NDJFNPLLPGP_OFFSET))(this, a1, a2, a3);
		}

	};

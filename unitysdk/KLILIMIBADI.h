#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;
namespace System { class Object; }

#define KLILIMIBADI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD762B0)
#define KLILIMIBADI_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xBD75D90)

inline static constexpr unsigned int KLILIMIBADI_TypeDefinitionIndex = 54842;

	class KLILIMIBADI : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_DAEHJGBBOFI()
		{
			return (::System::Object**)UnitySDK::FromName("", "KLILIMIBADI")->GetStaticField(0x555E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLILIMIBADI_CCTOR_OFFSET))();
		}

		static ::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + KLILIMIBADI_ILOHHJDPDBE_OFFSET))(a1, a2, a3);
		}

	};

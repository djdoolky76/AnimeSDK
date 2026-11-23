#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3E15A8B6F823619.h"

class AF4931024AEF2673;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BCBC8F40D6AC2E2F_B6AD17F1C11ECB23_OFFSET UNITYSDK_OFFSET(0x1973000)
#define BCBC8F40D6AC2E2F_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1972F90)
#define BCBC8F40D6AC2E2F__CTOR_OFFSET UNITYSDK_OFFSET(0x19731E0)

inline static constexpr unsigned int BCBC8F40D6AC2E2F_TypeDefinitionIndex = 1635;

class BCBC8F40D6AC2E2F : public ::E3E15A8B6F823619
{
public:
	::System::String* B5126617A7D67B61; // 0xE8
	::System::Action_1<::System::String*>* FCCD2716B1B4CDF5; // 0xF0

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBC8F40D6AC2E2F_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void B6AD17F1C11ECB23(::System::String* B18A97CD05922539, ::AF4931024AEF2673* BDEAEBA1088AEE0A, ::System::Action_1<::System::String*>* FABBF4F55603A392, ::System::Single EDAC2B78F3CF1AA9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::AF4931024AEF2673*, ::System::Action_1<::System::String*>*, ::System::Single))((::PBYTE)hIl2Cpp + BCBC8F40D6AC2E2F_B6AD17F1C11ECB23_OFFSET))(this, B18A97CD05922539, BDEAEBA1088AEE0A, FABBF4F55603A392, EDAC2B78F3CF1AA9);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBC8F40D6AC2E2F__CTOR_OFFSET))(this);
	}
};

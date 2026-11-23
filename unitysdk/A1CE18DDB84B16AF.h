#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E78B436C7FACCBD8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define A1CE18DDB84B16AF_AFE676A5D5DB277A_OFFSET UNITYSDK_OFFSET(0x1FE1FE0)
#define A1CE18DDB84B16AF_E6862C0B2186CDE3_OFFSET UNITYSDK_OFFSET(0x1FE2080)
#define A1CE18DDB84B16AF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1CE18DDB84B16AF_TypeDefinitionIndex = 8111;

class A1CE18DDB84B16AF : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* FF54C01634675950; // 0x10
	::System::String* BD0FA30902FB9499; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1CE18DDB84B16AF__CTOR_OFFSET))(this);
	}

	::System::Void E6862C0B2186CDE3(::System::Int32 EF0372F575019583, ::E78B436C7FACCBD8* E5D37B359C1A68AE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::E78B436C7FACCBD8*))((::PBYTE)hIl2Cpp + A1CE18DDB84B16AF_E6862C0B2186CDE3_OFFSET))(this, EF0372F575019583, E5D37B359C1A68AE);
	}

	::System::Void AFE676A5D5DB277A(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* A7C40B50508AAE3F, ::System::String* B9FBA0CE76DB58CD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + A1CE18DDB84B16AF_AFE676A5D5DB277A_OFFSET))(this, A7C40B50508AAE3F, B9FBA0CE76DB58CD);
	}
};

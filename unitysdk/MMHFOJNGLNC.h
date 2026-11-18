#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class CancellationTokenSource; }

inline static constexpr unsigned int MMHFOJNGLNC_TypeDefinitionIndex = 75672;

class MMHFOJNGLNC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::CancellationTokenSource*>** StaticGet_ECGALEPGFLG()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Threading::CancellationTokenSource*>**)Il2CppClass::FromTypeDefinitionIndex(MMHFOJNGLNC_TypeDefinitionIndex)->GetStaticField(0x42A00);
	}
};

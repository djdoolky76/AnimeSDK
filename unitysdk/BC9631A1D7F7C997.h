#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BC9631A1D7F7C997__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BC9631A1D7F7C997_TypeDefinitionIndex = 1687;

class BC9631A1D7F7C997 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* E527D935E6945471; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* F7911EE0F85FBE8E; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AC3F7AC0B313C6CB; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* AAB70F54AEC1079A; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC9631A1D7F7C997__CTOR_OFFSET))(this);
	}
};

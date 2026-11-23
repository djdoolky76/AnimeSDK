#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6B362BABDBDAD88.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define BF9D840C1E88CED1_BD9CD726F874B523_OFFSET UNITYSDK_OFFSET(0x1D43F60)
#define BF9D840C1E88CED1_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x1D440B0)
#define BF9D840C1E88CED1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BF9D840C1E88CED1_TypeDefinitionIndex = 10053;

class BF9D840C1E88CED1 : public ::A6B362BABDBDAD88
{
public:
	::System::UInt32 E21B3114ADEEE8A1; // 0x18
	::System::UInt32 AF9E9CA34E4273BF; // 0x1C
	::System::UInt32 EF1592B9DC951C17; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* B534F7A87235D956; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF9D840C1E88CED1__CTOR_OFFSET))(this);
	}

	static ::BF9D840C1E88CED1* BD9CD726F874B523(::System::UInt32 BC184AAB30730354, ::System::UInt32 FF64C04A88C9FDD0, ::System::UInt32 EF1E5375FAE41571, ::System::Int32 E769011511E6C796, ::System::Collections::Generic::List_1<::System::UInt32>* B3A69474715C2632)
	{
		return ((::BF9D840C1E88CED1*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + BF9D840C1E88CED1_BD9CD726F874B523_OFFSET))(BC184AAB30730354, FF64C04A88C9FDD0, EF1E5375FAE41571, E769011511E6C796, B3A69474715C2632);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF9D840C1E88CED1_FCC7443573DD0222_OFFSET))(this);
	}
};

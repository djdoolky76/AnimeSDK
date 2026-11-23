#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B035A178295A1E2A__CTOR_OFFSET UNITYSDK_OFFSET(0x16572D0)

inline static constexpr unsigned int B035A178295A1E2A_TypeDefinitionIndex = 12;

class B035A178295A1E2A : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::E68AA4EB51923C98::A78FBDBE963A373C BB4FC9F572FD885F; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* F83D1FC2AD74E74A; // 0x20
	::System::Single FF04298E6197F414; // 0x28
	::System::Single FC14FCBDAFB70354; // 0x2C
	::System::Boolean B5C0F9B268222CEC; // 0x30
	::System::Boolean B30D4E237E80A17C; // 0x31
	::System::Byte _padding1[0x2];
	::UnityEngine::Vector3 B14F5F733E2AD130; // 0x34
	::System::Single A19C85B3A275B5AE; // 0x40
	::System::Single B108549C82338A5E; // 0x44
	::System::Boolean A986843316F018EE; // 0x48
	::System::Boolean F757048C04D59B58; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B035A178295A1E2A__CTOR_OFFSET))(this);
	}
};

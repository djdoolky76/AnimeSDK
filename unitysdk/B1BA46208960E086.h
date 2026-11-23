#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/E68AA4EB51923C98/ED32772994017EBF.h"
#include "unitysdk/E68AA4EB51923C98/F904A967EEE7C264.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B3687AB065DF94CB;
class EE3B01267E1A2BA7;
class F02BC2A9209C997F;
class F1EB04D13692C4C2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B1BA46208960E086_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267DCA0)
#define B1BA46208960E086__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B1BA46208960E086_TypeDefinitionIndex = 6426;

class B1BA46208960E086 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::ED32772994017EBF, ::System::UInt32>* FA7BC1F39B6E0006; // 0x10
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32>* A13EA24341495A40; // 0x18
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::F904A967EEE7C264, ::System::UInt32>* FF8AD3F0FA8F529B; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1EB04D13692C4C2*>* B76E36D0CB155CFF; // 0x28
	::System::UInt32 F34918C291072FA9; // 0x30
	::System::Single E21F4B89E268A66E; // 0x34
	::F02BC2A9209C997F* FC4F71AE34A92920; // 0x38
	::System::Single EFDBB580803464D1; // 0x40
	::System::Byte _padding0[0x4];
	::EE3B01267E1A2BA7* F1A58A2FEA889278; // 0x48
	::B3687AB065DF94CB* ED8E2AE92C969B5A; // 0x50
	::System::UInt32 B5B61EFDD96828F8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1BA46208960E086__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B1BA46208960E086*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B1BA46208960E086*&))((::PBYTE)hIl2Cpp + B1BA46208960E086_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};

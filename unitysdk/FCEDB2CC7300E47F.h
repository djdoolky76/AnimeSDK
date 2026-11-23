#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class B34ACB7F03D22E93;
class F302060E5B9BB704;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCEDB2CC7300E47F_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F729D0)
#define FCEDB2CC7300E47F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCEDB2CC7300E47F_TypeDefinitionIndex = 7841;

class FCEDB2CC7300E47F : public ::System::Object
{
public:
	::F302060E5B9BB704* BFA79707CC4E2AA8; // 0x10
	::System::UInt32 EC3E42FF95A3C3BF; // 0x18
	::System::UInt32 BCA1345B630504ED; // 0x1C
	::System::UInt32 A87B1D96E2C92FBA; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::B34ACB7F03D22E93*>* EE6A733130A54023; // 0x28

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FCEDB2CC7300E47F* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FCEDB2CC7300E47F*))((::PBYTE)hIl2Cpp + FCEDB2CC7300E47F_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEDB2CC7300E47F__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class B9E16644D3057522;
class EC7D7730416A9C36;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A48077FB5DFDDB13_B169718032818278_OFFSET UNITYSDK_OFFSET(0x241A510)
#define A48077FB5DFDDB13_E35E5AC2CD90AC08_OFFSET UNITYSDK_OFFSET(0x2419D00)
#define A48077FB5DFDDB13_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2419DE0)
#define A48077FB5DFDDB13_FF6370E6B5913AA8_OFFSET UNITYSDK_OFFSET(0x241A480)
#define A48077FB5DFDDB13__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A48077FB5DFDDB13_TypeDefinitionIndex = 4159;

class A48077FB5DFDDB13 : public ::System::Object
{
public:
	::System::String* BB46744281D33C50; // 0x10
	::System::Collections::Generic::List_1<::B9E16644D3057522*>* E9B0D51B89857587; // 0x18
	::EC7D7730416A9C36* F317FFEADDA30F3D; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::Int32>* BD9F201AA148A294; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* AD90D0FA0055CB93; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* AC24B9CCB8E56B8D; // 0x38
	::System::Collections::Generic::List_1<::System::UInt64>* ABBE79573C3E17C7; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* A66150251840A19E; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* FE094B574774D0CD; // 0x50
	::System::Collections::Generic::List_1<::System::Int32>* E07A4673994D4821; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A48077FB5DFDDB13__CTOR_OFFSET))(this);
	}

	::System::String* E35E5AC2CD90AC08(::System::Int32 B614CA0FE39C6FB5)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A48077FB5DFDDB13_E35E5AC2CD90AC08_OFFSET))(this, B614CA0FE39C6FB5);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A48077FB5DFDDB13*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A48077FB5DFDDB13*&))((::PBYTE)hIl2Cpp + A48077FB5DFDDB13_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Int32 FF6370E6B5913AA8(::System::Int32 ABC08283A6F9E988)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A48077FB5DFDDB13_FF6370E6B5913AA8_OFFSET))(this, ABC08283A6F9E988);
	}

	::System::Int32 B169718032818278(::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A48077FB5DFDDB13_B169718032818278_OFFSET))(this, B48C66E5FB2449C6);
	}
};

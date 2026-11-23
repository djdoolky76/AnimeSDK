#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A6E622D86E71410F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class B74497FA49565A1A;
class BB5BA72A183B116D;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E8DA42B1BC5FEC48_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2205920)
#define E8DA42B1BC5FEC48__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8DA42B1BC5FEC48_TypeDefinitionIndex = 9036;

class E8DA42B1BC5FEC48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B74497FA49565A1A*>* A565896BC3ADB188; // 0x10
	::E68AA4EB51923C98::A6E622D86E71410F AD10F637FE657757; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::BB5BA72A183B116D*>* FA50FE7F6EDF52F8; // 0x20
	::System::String* E5D3FB221F3C9479; // 0x28

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E8DA42B1BC5FEC48* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E8DA42B1BC5FEC48*))((::PBYTE)hIl2Cpp + E8DA42B1BC5FEC48_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8DA42B1BC5FEC48__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AE193B57F61D42AA;
class AF5D84614C70F52A;
namespace ABC::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FC74644F6C293255_A28F6667EA04FFA4_OFFSET UNITYSDK_OFFSET(0x1FE00B0)
#define FC74644F6C293255_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1FE0C10)
#define FC74644F6C293255_E8468B8D010A8149_OFFSET UNITYSDK_OFFSET(0x1FE02A0)
#define FC74644F6C293255_F63544F55037D7E6_1_OFFSET UNITYSDK_OFFSET(0x1FE06B0)
#define FC74644F6C293255_F63544F55037D7E6_OFFSET UNITYSDK_OFFSET(0x1FE0980)
#define FC74644F6C293255_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x1FE0480)
#define FC74644F6C293255__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC74644F6C293255_TypeDefinitionIndex = 8104;

class FC74644F6C293255 : public ::System::Object
{
public:
	::System::UInt32 EA7CFF2710F5BB56; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 A35E61455FB5F910; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FC74644F6C293255* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FC74644F6C293255*))((::PBYTE)hIl2Cpp + FC74644F6C293255_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::Collections::Generic::List_1<::AF5D84614C70F52A*>* E8468B8D010A8149(::System::Collections::Generic::List_1<::FC74644F6C293255*>* BFFE88B644F301D7)
	{
		return ((::System::Collections::Generic::List_1<::AF5D84614C70F52A*>*(*)(::System::Collections::Generic::List_1<::FC74644F6C293255*>*))((::PBYTE)hIl2Cpp + FC74644F6C293255_E8468B8D010A8149_OFFSET))(BFFE88B644F301D7);
	}

	static ::System::Void F63544F55037D7E6(::System::Collections::Generic::List_1<::AE193B57F61D42AA*>* AE2265F27E0339F0, ::System::Collections::Generic::List_1<::FC74644F6C293255*>* F9CD629A6BDA40FF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::AE193B57F61D42AA*>*, ::System::Collections::Generic::List_1<::FC74644F6C293255*>*))((::PBYTE)hIl2Cpp + FC74644F6C293255_F63544F55037D7E6_OFFSET))(AE2265F27E0339F0, F9CD629A6BDA40FF);
	}

	static ::System::Void F63544F55037D7E6_1(::System::Collections::Generic::List_1<::AE193B57F61D42AA*>* AE2265F27E0339F0, ::ABC::Collections::Generic::SortedDictionary_2<::System::UInt32, ::AE193B57F61D42AA*>* F9CD629A6BDA40FF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::AE193B57F61D42AA*>*, ::ABC::Collections::Generic::SortedDictionary_2<::System::UInt32, ::AE193B57F61D42AA*>*))((::PBYTE)hIl2Cpp + FC74644F6C293255_F63544F55037D7E6_1_OFFSET))(AE2265F27E0339F0, F9CD629A6BDA40FF);
	}

	static ::System::Collections::Generic::List_1<::AE193B57F61D42AA*>* A28F6667EA04FFA4(::System::Collections::Generic::List_1<::FC74644F6C293255*>* BFFE88B644F301D7)
	{
		return ((::System::Collections::Generic::List_1<::AE193B57F61D42AA*>*(*)(::System::Collections::Generic::List_1<::FC74644F6C293255*>*))((::PBYTE)hIl2Cpp + FC74644F6C293255_A28F6667EA04FFA4_OFFSET))(BFFE88B644F301D7);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC74644F6C293255__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FC74644F6C293255*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FC74644F6C293255*&))((::PBYTE)hIl2Cpp + FC74644F6C293255_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};

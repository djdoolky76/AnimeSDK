#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class E519989062D53DE5;
class F64343771F242C95;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BC32DEF5CD6A192E_A1B9A7F022E714DD_OFFSET UNITYSDK_OFFSET(0x3CA8890)
#define BC32DEF5CD6A192E_A4A1CC3BB05C6254_OFFSET UNITYSDK_OFFSET(0x3CA8730)
#define BC32DEF5CD6A192E_AA3B4ACFEE946123_OFFSET UNITYSDK_OFFSET(0x3CA8BD0)
#define BC32DEF5CD6A192E_E3C2B6895EE415D3_OFFSET UNITYSDK_OFFSET(0x3CA8960)
#define BC32DEF5CD6A192E_EEF746174CA11B46_OFFSET UNITYSDK_OFFSET(0x3CA8900)
#define BC32DEF5CD6A192E_F23B1641A85B7C81_OFFSET UNITYSDK_OFFSET(0x3CA8240)
#define BC32DEF5CD6A192E__CCTOR_OFFSET UNITYSDK_OFFSET(0x3CA9290)
#define BC32DEF5CD6A192E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3CA9340)
#define BC32DEF5CD6A192E__CTOR_OFFSET UNITYSDK_OFFSET(0x3CA9530)

inline static constexpr unsigned int BC32DEF5CD6A192E_TypeDefinitionIndex = 10456;

class BC32DEF5CD6A192E : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::F64343771F242C95*>*, ::F64343771F242C95*>** StaticGet_B646026CC39681B6()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::F64343771F242C95*>*, ::F64343771F242C95*>**)Il2CppClass::FromTypeDefinitionIndex(BC32DEF5CD6A192E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_1<::BC32DEF5CD6A192E*>** StaticGet_ABB7C8C3077460AA()
	{
		return (::System::Func_1<::BC32DEF5CD6A192E*>**)Il2CppClass::FromTypeDefinitionIndex(BC32DEF5CD6A192E_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::Il2CppArray<::System::Byte>* A918D5F3C40DDC6C; // 0x10
	::System::String* B35D038FB6EB1394; // 0x18
	::System::String* E40E4804C76C1165; // 0x20
	::System::Collections::Generic::List_1<::F64343771F242C95*>* F3276DF583452E9C; // 0x28

	::System::Void F23B1641A85B7C81(::System::String* B0244ED8A2A7D3BC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_F23B1641A85B7C81_OFFSET))(this, B0244ED8A2A7D3BC);
	}

	::System::Void EEF746174CA11B46(::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_EEF746174CA11B46_OFFSET))(this, E6CE7391633EEC68);
	}

	::System::Void A1B9A7F022E714DD(::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_A1B9A7F022E714DD_OFFSET))(this, E6CE7391633EEC68);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E__CTOR_OFFSET))(this);
	}

	::System::Void A4A1CC3BB05C6254(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_A4A1CC3BB05C6254_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	::System::String* AA3B4ACFEE946123()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_AA3B4ACFEE946123_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E__CCTOR_OFFSET))();
	}

	::System::Void _ctor_1(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
	{
		return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E__CTOR_1_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
	}

	static ::F64343771F242C95* E3C2B6895EE415D3(::System::Collections::Generic::IEnumerable_1<::F64343771F242C95*>* B0244ED8A2A7D3BC)
	{
		return ((::F64343771F242C95*(*)(::System::Collections::Generic::IEnumerable_1<::F64343771F242C95*>*))((::PBYTE)hIl2Cpp + BC32DEF5CD6A192E_E3C2B6895EE415D3_OFFSET))(B0244ED8A2A7D3BC);
	}
};

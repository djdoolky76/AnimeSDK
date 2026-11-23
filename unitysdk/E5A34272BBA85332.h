#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class A9719A4E2DD1280F;
class E0259435AA990773;
class E84A66B003CDDF44;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E5A34272BBA85332_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x2071690)
#define E5A34272BBA85332__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E5A34272BBA85332_TypeDefinitionIndex = 8488;

class E5A34272BBA85332 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::E0259435AA990773*>* BD0578DA37598134; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* F0C85D07E6FD2942; // 0x18
	::System::UInt32 FE2FB0D55556BFD9; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::E84A66B003CDDF44*>* A74D082233082819; // 0x28
	::System::UInt32 F48717168EFBC596; // 0x30
	::System::UInt32 AB665CBA4E9CE0E6; // 0x34
	::System::Collections::Generic::List_1<::A9719A4E2DD1280F*>* E8DEE7D79A232CB6; // 0x38
	::System::UInt32 A1657922CA3C201A; // 0x40
	::System::Boolean F0F38976659DA49F; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5A34272BBA85332__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::E5A34272BBA85332* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::E5A34272BBA85332*))((::PBYTE)hIl2Cpp + E5A34272BBA85332_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};

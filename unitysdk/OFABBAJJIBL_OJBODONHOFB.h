#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DDCCOJBNCJF;
class IKNGGHOCDBF;
class ONILINNBGNE;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_1_OFFSET UNITYSDK_OFFSET(0xF17F090)
#define OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_2_OFFSET UNITYSDK_OFFSET(0xF17F120)
#define OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_3_OFFSET UNITYSDK_OFFSET(0xF17F1B0)
#define OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0xF17EC80)
#define OFABBAJJIBL_OJBODONHOFB__CCTOR_OFFSET UNITYSDK_OFFSET(0xF17EBF0)
#define OFABBAJJIBL_OJBODONHOFB__CTOR_OFFSET UNITYSDK_OFFSET(0xF17EBE0)

inline static constexpr unsigned int OFABBAJJIBL_OJBODONHOFB_TypeDefinitionIndex = 48328;

class OFABBAJJIBL_OJBODONHOFB : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_EGENKJPKJEI()
	{
		return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(OFABBAJJIBL_OJBODONHOFB_TypeDefinitionIndex)->GetStaticField(0x477B0);
	}
	::IKNGGHOCDBF* ODALDIOFMPH; // 0x10
	::System::UInt32 PGGNGNHIBEB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::Object*>* CELHLLIAIKB(::System::Collections::Generic::IEnumerable_1<::DDCCOJBNCJF*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::System::Collections::Generic::IEnumerable_1<::DDCCOJBNCJF*>*))((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_OFFSET))(HLFFCMIFFIB);
	}

	static ::OFABBAJJIBL_OJBODONHOFB* CELHLLIAIKB_1(::DDCCOJBNCJF* GPICEHKMNND)
	{
		return ((::OFABBAJJIBL_OJBODONHOFB*(*)(::DDCCOJBNCJF*))((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_1_OFFSET))(GPICEHKMNND);
	}

	static ::OFABBAJJIBL_OJBODONHOFB* CELHLLIAIKB_2(::ONILINNBGNE* GPICEHKMNND)
	{
		return ((::OFABBAJJIBL_OJBODONHOFB*(*)(::ONILINNBGNE*))((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_2_OFFSET))(GPICEHKMNND);
	}

	static ::System::Collections::Generic::IEnumerable_1<::System::Object*>* CELHLLIAIKB_3(::System::Collections::Generic::IEnumerable_1<::ONILINNBGNE*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::System::Collections::Generic::IEnumerable_1<::ONILINNBGNE*>*))((::PBYTE)hIl2Cpp + OFABBAJJIBL_OJBODONHOFB_CELHLLIAIKB_3_OFFSET))(HLFFCMIFFIB);
	}
};

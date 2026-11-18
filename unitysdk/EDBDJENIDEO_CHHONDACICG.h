#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/ValueType.h"

class EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define EDBDJENIDEO_CHHONDACICG_CBLOPOOKELA_OFFSET UNITYSDK_OFFSET(0x15496E60)
#define EDBDJENIDEO_CHHONDACICG_JOEGCDOHAKC_OFFSET UNITYSDK_OFFSET(0x15496BB0)
#define EDBDJENIDEO_CHHONDACICG_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x75B0E0)
#define EDBDJENIDEO_CHHONDACICG__CCTOR_OFFSET UNITYSDK_OFFSET(0x15496A00)
#define EDBDJENIDEO_CHHONDACICG__CTOR_OFFSET UNITYSDK_OFFSET(0x75B0C0)

inline static constexpr unsigned int EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex = 90352;

struct alignas(4) EDBDJENIDEO_CHHONDACICG
{
	static ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>** StaticGet_KAOGGDEIJDD()
	{
		return (::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex)->GetStaticField(0x51DA0);
	}
	static ::System::String** StaticGet_MNKJCJNLPIM()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex)->GetStaticField(0x51DA8);
	}
	static ::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>** StaticGet_DHDGIGDOKGM()
	{
		return (::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex)->GetStaticField(0x51DB0);
	}
	static ::System::Text::StringBuilder** StaticGet_MHBNKDCBBKH()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex)->GetStaticField(0x51DB8);
	}
	static ::EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP** StaticGet_MODBLBAOMIM()
	{
		return (::EDBDJENIDEO_CHHONDACICG_PAJKPMHHNKP**)Il2CppClass::FromTypeDefinitionIndex(EDBDJENIDEO_CHHONDACICG_TypeDefinitionIndex)->GetStaticField(0x51DC0);
	}
	// static const ::System::Single GECJPEACFMH; // 0x0
	// static const ::System::Single NFHGBNDLPGO; // 0x0
	// static const ::System::Int32 CHCMGPJABJG = 0x5; // 0x0
	::System::Single INMHMLGFIIK; // 0x10
	::System::Single FAPNOGDPONK; // 0x14
	::System::Int32 CFHLEIBAPJL; // 0x18

	::System::Void _ctor(::System::Single CIIPCCLOHLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG__CTOR_OFFSET))(this, CIIPCCLOHLH);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG__CCTOR_OFFSET))();
	}

	static ::System::Boolean JOEGCDOHAKC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG_JOEGCDOHAKC_OFFSET))();
	}

	static ::System::String* CBLOPOOKELA()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG_CBLOPOOKELA_OFFSET))();
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDBDJENIDEO_CHHONDACICG_PLPONJAKNEB_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIOOPDMDJBC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1494E560)
#define HIOOPDMDJBC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1494DE10)
#define HIOOPDMDJBC_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x1494E5C0)
#define HIOOPDMDJBC_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x1494DE90)
#define HIOOPDMDJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1494EB40)

inline static constexpr unsigned int HIOOPDMDJBC_TypeDefinitionIndex = 75863;

class HIOOPDMDJBC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* EKOFFNIGCOO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* HGOBJIMNODD; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* MKGLDGPHONO; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* JPCDOAAEKMP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOOPDMDJBC__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + HIOOPDMDJBC_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOPDMDJBC_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOPDMDJBC_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + HIOOPDMDJBC_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}
};

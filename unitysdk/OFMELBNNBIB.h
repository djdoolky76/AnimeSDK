#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAGOFONBHON;
namespace System { class String; }

#define OFMELBNNBIB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3FBC0)
#define OFMELBNNBIB_GET_ID_OFFSET UNITYSDK_OFFSET(0xBE3FB90)
#define OFMELBNNBIB_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBE3FBA0)
#define OFMELBNNBIB_GET_MATERIALPATH_OFFSET UNITYSDK_OFFSET(0xBE3FBB0)

inline static constexpr unsigned int OFMELBNNBIB_TypeDefinitionIndex = 80125;

	class OFMELBNNBIB : public ::System::Object
	{
	public:
		::System::String* _MaterialPath_k__BackingField; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Void _ctor(::PAGOFONBHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAGOFONBHON*))((::PBYTE)hIl2Cpp + OFMELBNNBIB_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMELBNNBIB_GET_ID_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMELBNNBIB_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_MaterialPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFMELBNNBIB_GET_MATERIALPATH_OFFSET))(this);
		}

	};

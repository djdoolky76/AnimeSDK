#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonContract.h"
#include "unitysdk/Newtonsoft/Json/ReferenceLoopHandling.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace System { class Nullable; }
namespace System { class Type; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3E0200)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1C3E1140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1C3E0FD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C3E1150)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3E1170)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1C3E1190)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1C3E11B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET UNITYSDK_OFFSET(0x1C3E0FE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C3E1160)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C3E1180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x1C3E11A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x1C3E11C0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonContainerContract_TypeDefinitionIndex = 9691;

	class JsonContainerContract : public ::Newtonsoft::Json::Serialization::JsonContract
	{
	public:
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0x80
		::Newtonsoft::Json::Serialization::JsonContract* _finalItemContract; // 0x88
		::Newtonsoft::Json::Serialization::JsonContract* _itemContract; // 0x90
		::System::Nullable* _ItemIsReference_k__BackingField; // 0x98
		::System::Nullable* _ItemReferenceLoopHandling_k__BackingField; // 0x9C
		::System::Nullable* _ItemTypeNameHandling_k__BackingField; // 0xA4
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_ItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONTRACT_OFFSET))(this);
		}

		::System::Void set_ItemContract(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONTRACT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_FinalItemContract()
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_FINALITEMCONTRACT_OFFSET))(this);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMCONVERTER_OFFSET))(this);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMCONVERTER_OFFSET))(this, a1);
		}

		::System::Nullable* get_ItemIsReference()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMISREFERENCE_OFFSET))(this);
		}

		::System::Void set_ItemIsReference(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMISREFERENCE_OFFSET))(this, a1);
		}

		::System::Nullable* get_ItemReferenceLoopHandling()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemReferenceLoopHandling(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(this, a1);
		}

		::System::Nullable* get_ItemTypeNameHandling()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_GET_ITEMTYPENAMEHANDLING_OFFSET))(this);
		}

		::System::Void set_ItemTypeNameHandling(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONCONTAINERCONTRACT_SET_ITEMTYPENAMEHANDLING_OFFSET))(this, a1);
		}

	};
}

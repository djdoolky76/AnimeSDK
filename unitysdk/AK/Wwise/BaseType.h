#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEF0661810FEEC74.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define AK_WWISE_BASETYPE_COMBINEHASHCODES_OFFSET UNITYSDK_OFFSET(0x2912C60)
#define AK_WWISE_BASETYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2912CC0)
#define AK_WWISE_BASETYPE_GET_ID_OFFSET UNITYSDK_OFFSET(0x2912FD0)
#define AK_WWISE_BASETYPE_GET_INVALIDID_OFFSET UNITYSDK_OFFSET(0x168A070)
#define AK_WWISE_BASETYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2913030)
#define AK_WWISE_BASETYPE_ISVALID_OFFSET UNITYSDK_OFFSET(0x2912EB0)
#define AK_WWISE_BASETYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2912F20)
#define AK_WWISE_BASETYPE_VERIFY_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define AK_WWISE_BASETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace AK::Wwise
{
	inline static constexpr unsigned int BaseType_TypeDefinitionIndex = 21568;

	class BaseType : public ::System::Object
	{
	public:
		::System::Int32 idInternal; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* valueGuidInternal; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_TOSTRING_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_ID_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_ISVALID_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_NAME_OFFSET))(this);
		}

		static ::System::UInt32 get_InvalidId()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GET_INVALIDID_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Int32 CombineHashCodes(::Il2CppArray<::System::Int32>* B9FF08E4CEFC2B1C)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_COMBINEHASHCODES_OFFSET))(B9FF08E4CEFC2B1C);
		}

		::System::Void Verify(::FEF0661810FEEC74 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::FEF0661810FEEC74))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_VERIFY_OFFSET))(this, E82293C0814051A5);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_BASETYPE_GETHASHCODE_OFFSET))(this);
		}
	};
}

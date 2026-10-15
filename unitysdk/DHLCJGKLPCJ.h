#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class DHLCJGKLPCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHLCJGKLPCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B7070)
#define DHLCJGKLPCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7390)
#define DHLCJGKLPCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B6AE0)
#define DHLCJGKLPCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B6A70)
#define DHLCJGKLPCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6A60)
#define DHLCJGKLPCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B6D20)
#define DHLCJGKLPCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B6BA0)
#define DHLCJGKLPCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B6EA0)
#define DHLCJGKLPCJ_HGPHFKHLONN_OFFSET UNITYSDK_OFFSET(0x1E1B6B80)
#define DHLCJGKLPCJ_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x1E1B6B60)
#define DHLCJGKLPCJ_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x1E1B6B70)
#define DHLCJGKLPCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B6A20)
#define DHLCJGKLPCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B71D0)
#define DHLCJGKLPCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B7140)
#define DHLCJGKLPCJ_OLDFFGKEHDP_OFFSET UNITYSDK_OFFSET(0x1E1B6B90)
#define DHLCJGKLPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B6A50)
#define DHLCJGKLPCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B6F30)
#define DHLCJGKLPCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B6F90)

inline static constexpr unsigned int DHLCJGKLPCJ_TypeDefinitionIndex = 26316;

	class DHLCJGKLPCJ : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* LBGNLONMEKF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 HEKOAJFHMJJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DHLCJGKLPCJ")->GetStaticField(0x35310);
		}

		// static const ::System::Object ADFLIGDHDDM; // 0x0
		// static const ::System::Object FFCNOFNJMHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHLCJGKLPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLCJGKLPCJ*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHLCJGKLPCJ* Clone()
		{
			return ((::DHLCJGKLPCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* HGPHFKHLONN()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_HGPHFKHLONN_OFFSET))(this);
		}

		::System::Void OLDFFGKEHDP(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_OLDFFGKEHDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHLCJGKLPCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHLCJGKLPCJ*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHLCJGKLPCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHLCJGKLPCJ*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHLCJGKLPCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

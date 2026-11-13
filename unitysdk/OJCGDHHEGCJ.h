#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJLCPMDGIBO;
class OJCGDHHEGCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJCGDHHEGCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F69A730)
#define OJCGDHHEGCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69AA40)
#define OJCGDHHEGCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F69A020)
#define OJCGDHHEGCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F699FB0)
#define OJCGDHHEGCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F699FA0)
#define OJCGDHHEGCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F69A230)
#define OJCGDHHEGCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F69A0C0)
#define OJCGDHHEGCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F69A500)
#define OJCGDHHEGCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F699F60)
#define OJCGDHHEGCJ_KNPBODOIFHB_OFFSET UNITYSDK_OFFSET(0x1F69A0A0)
#define OJCGDHHEGCJ_LCDIAOBICDJ_OFFSET UNITYSDK_OFFSET(0x1F69A0B0)
#define OJCGDHHEGCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F69A870)
#define OJCGDHHEGCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F69A790)
#define OJCGDHHEGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F699F90)
#define OJCGDHHEGCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F69A640)
#define OJCGDHHEGCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F69A6A0)

inline static constexpr unsigned int OJCGDHHEGCJ_TypeDefinitionIndex = 26895;

	class OJCGDHHEGCJ : public ::System::Object
	{
	public:
		::CJLCPMDGIBO* AFCFKBEHMAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OJCGDHHEGCJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJCGDHHEGCJ*>**)UnitySDK::FromName("", "OJCGDHHEGCJ")->GetStaticField(0x1B330);
		}

		// static const ::System::Object DGKPJCLNGJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJCGDHHEGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJCGDHHEGCJ*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJCGDHHEGCJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJCGDHHEGCJ*>*(*)())((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJCGDHHEGCJ* Clone()
		{
			return ((::OJCGDHHEGCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_CLONE_OFFSET))(this);
		}

		::CJLCPMDGIBO* KNPBODOIFHB()
		{
			return ((::CJLCPMDGIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_KNPBODOIFHB_OFFSET))(this);
		}

		::System::Void LCDIAOBICDJ(::CJLCPMDGIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLCPMDGIBO*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_LCDIAOBICDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJCGDHHEGCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJCGDHHEGCJ*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJCGDHHEGCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJCGDHHEGCJ*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJCGDHHEGCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

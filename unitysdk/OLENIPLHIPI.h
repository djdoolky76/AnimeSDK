#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLENIPLHIPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLENIPLHIPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA5C90)
#define OLENIPLHIPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5E50)
#define OLENIPLHIPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA5870)
#define OLENIPLHIPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA5840)
#define OLENIPLHIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5830)
#define OLENIPLHIPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA59C0)
#define OLENIPLHIPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA58E0)
#define OLENIPLHIPI_FDFPOIGEHGB_OFFSET UNITYSDK_OFFSET(0x1DEA58D0)
#define OLENIPLHIPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA5B40)
#define OLENIPLHIPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA57F0)
#define OLENIPLHIPI_JKEONEEPIHH_OFFSET UNITYSDK_OFFSET(0x1DEA58C0)
#define OLENIPLHIPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA5CF0)
#define OLENIPLHIPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA5CC0)
#define OLENIPLHIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA5820)
#define OLENIPLHIPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA5B70)
#define OLENIPLHIPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA5BD0)

inline static constexpr unsigned int OLENIPLHIPI_TypeDefinitionIndex = 31832;

	class OLENIPLHIPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KJFDGOJFJLK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OLENIPLHIPI")->GetStaticField(0x236D0);
		}

		// static const ::System::Object GFOAADDNLKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLENIPLHIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLENIPLHIPI*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLENIPLHIPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OLENIPLHIPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLENIPLHIPI* Clone()
		{
			return ((::OLENIPLHIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_CLONE_OFFSET))(this);
		}

		::System::Boolean JKEONEEPIHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_JKEONEEPIHH_OFFSET))(this);
		}

		::System::Void FDFPOIGEHGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLENIPLHIPI_FDFPOIGEHGB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLENIPLHIPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLENIPLHIPI*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLENIPLHIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLENIPLHIPI*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLENIPLHIPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

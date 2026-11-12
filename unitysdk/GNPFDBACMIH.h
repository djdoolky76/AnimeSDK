#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNPFDBACMIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNPFDBACMIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7FA550)
#define GNPFDBACMIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA7B0)
#define GNPFDBACMIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7FA150)
#define GNPFDBACMIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FA0C0)
#define GNPFDBACMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA070)
#define GNPFDBACMIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7FA280)
#define GNPFDBACMIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7FA190)
#define GNPFDBACMIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7FA370)
#define GNPFDBACMIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7FA030)
#define GNPFDBACMIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7FA610)
#define GNPFDBACMIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7FA5C0)
#define GNPFDBACMIH_NIKHIBBPGBB_OFFSET UNITYSDK_OFFSET(0x1F7FA180)
#define GNPFDBACMIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7FA060)
#define GNPFDBACMIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7FA470)
#define GNPFDBACMIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7FA4D0)

inline static constexpr unsigned int GNPFDBACMIH_TypeDefinitionIndex = 34464;

	class GNPFDBACMIH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIFGCENECIH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GNPFDBACMIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNPFDBACMIH*>**)UnitySDK::FromName("", "GNPFDBACMIH")->GetStaticField(0x1B290);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CBBDHHFHMOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GNPFDBACMIH")->GetStaticField(0x1B298);
		}

		// static const ::System::Object DGCNPDDEBAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNPFDBACMIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPFDBACMIH*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNPFDBACMIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNPFDBACMIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNPFDBACMIH*>*(*)())((::PBYTE)hIl2Cpp + GNPFDBACMIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNPFDBACMIH* Clone()
		{
			return ((::GNPFDBACMIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NIKHIBBPGBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_NIKHIBBPGBB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNPFDBACMIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNPFDBACMIH*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPFDBACMIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNPFDBACMIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNPFDBACMIH*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNPFDBACMIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

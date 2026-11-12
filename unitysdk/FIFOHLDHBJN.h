#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIFOHLDHBJN;
class HNBOHDBLMBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FIFOHLDHBJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F69CD60)
#define FIFOHLDHBJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69D060)
#define FIFOHLDHBJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F69C8E0)
#define FIFOHLDHBJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F69C830)
#define FIFOHLDHBJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F69C7E0)
#define FIFOHLDHBJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F69CAC0)
#define FIFOHLDHBJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F69C940)
#define FIFOHLDHBJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F69CBE0)
#define FIFOHLDHBJN_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1F69C930)
#define FIFOHLDHBJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F69C770)
#define FIFOHLDHBJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F69CEA0)
#define FIFOHLDHBJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F69CE00)
#define FIFOHLDHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F69C7D0)
#define FIFOHLDHBJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F69CC50)
#define FIFOHLDHBJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F69CCB0)

inline static constexpr unsigned int FIFOHLDHBJN_TypeDefinitionIndex = 29310;

	class FIFOHLDHBJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* BDGHBBABABH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FIFOHLDHBJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FIFOHLDHBJN*>**)UnitySDK::FromName("", "FIFOHLDHBJN")->GetStaticField(0x44500);
		}

		static ::Google::Protobuf::FieldCodec_1<::HNBOHDBLMBE*>** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec_1<::HNBOHDBLMBE*>**)UnitySDK::FromName("", "FIFOHLDHBJN")->GetStaticField(0x44508);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FIFOHLDHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FIFOHLDHBJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FIFOHLDHBJN*>*(*)())((::PBYTE)hIl2Cpp + FIFOHLDHBJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FIFOHLDHBJN* Clone()
		{
			return ((::FIFOHLDHBJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FIFOHLDHBJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FIFOHLDHBJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FIFOHLDHBJN*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FIFOHLDHBJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

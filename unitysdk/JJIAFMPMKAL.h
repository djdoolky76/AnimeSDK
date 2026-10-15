#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJIAFMPMKAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJIAFMPMKAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E72F760)
#define JJIAFMPMKAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72FA40)
#define JJIAFMPMKAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72F260)
#define JJIAFMPMKAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72F220)
#define JJIAFMPMKAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72F210)
#define JJIAFMPMKAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72F440)
#define JJIAFMPMKAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72F340)
#define JJIAFMPMKAL_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E72F2D0)
#define JJIAFMPMKAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E72F540)
#define JJIAFMPMKAL_GGMIKOMOCHH_OFFSET UNITYSDK_OFFSET(0x1E72F330)
#define JJIAFMPMKAL_ILKKOBLFNGC_OFFSET UNITYSDK_OFFSET(0x1E72F320)
#define JJIAFMPMKAL_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E72F2C0)
#define JJIAFMPMKAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72F1D0)
#define JJIAFMPMKAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E72F890)
#define JJIAFMPMKAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E72F840)
#define JJIAFMPMKAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72F200)
#define JJIAFMPMKAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E72F610)
#define JJIAFMPMKAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E72F670)

inline static constexpr unsigned int JJIAFMPMKAL_TypeDefinitionIndex = 25451;

	class JJIAFMPMKAL : public ::System::Object
	{
	public:
		::System::String* HDAIPLJBGAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GDBAPEGGMIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JJIAFMPMKAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJIAFMPMKAL*>**)UnitySDK::FromName("", "JJIAFMPMKAL")->GetStaticField(0x3D4B0);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object NMFBCCOMGHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJIAFMPMKAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIAFMPMKAL*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJIAFMPMKAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJIAFMPMKAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJIAFMPMKAL*>*(*)())((::PBYTE)hIl2Cpp + JJIAFMPMKAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJIAFMPMKAL* Clone()
		{
			return ((::JJIAFMPMKAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_CLONE_OFFSET))(this);
		}

		::System::String* IOIFPHAMFDF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::UInt32 ILKKOBLFNGC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_ILKKOBLFNGC_OFFSET))(this);
		}

		::System::Void GGMIKOMOCHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_GGMIKOMOCHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJIAFMPMKAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJIAFMPMKAL*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJIAFMPMKAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJIAFMPMKAL*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJIAFMPMKAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

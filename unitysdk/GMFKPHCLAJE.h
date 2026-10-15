#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMFKPHCLAJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMFKPHCLAJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A44B0)
#define GMFKPHCLAJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A4710)
#define GMFKPHCLAJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A40B0)
#define GMFKPHCLAJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A4020)
#define GMFKPHCLAJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3FD0)
#define GMFKPHCLAJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A41E0)
#define GMFKPHCLAJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A40F0)
#define GMFKPHCLAJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A42D0)
#define GMFKPHCLAJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A3F90)
#define GMFKPHCLAJE_KOJFBAFKHJJ_OFFSET UNITYSDK_OFFSET(0x1E4A40E0)
#define GMFKPHCLAJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A4570)
#define GMFKPHCLAJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A4520)
#define GMFKPHCLAJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A3FC0)
#define GMFKPHCLAJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A43D0)
#define GMFKPHCLAJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A4430)

inline static constexpr unsigned int GMFKPHCLAJE_TypeDefinitionIndex = 30492;

	class GMFKPHCLAJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IELHCBKLKMA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>**)UnitySDK::FromName("", "GMFKPHCLAJE")->GetStaticField(0x1EA70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CGKPJLDLOPP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMFKPHCLAJE")->GetStaticField(0x1EA78);
		}

		// static const ::System::Object LKOPOGHAOKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMFKPHCLAJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMFKPHCLAJE*>*(*)())((::PBYTE)hIl2Cpp + GMFKPHCLAJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMFKPHCLAJE* Clone()
		{
			return ((::GMFKPHCLAJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KOJFBAFKHJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_KOJFBAFKHJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMFKPHCLAJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMFKPHCLAJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFKPHCLAJE*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMFKPHCLAJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

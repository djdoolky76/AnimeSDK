#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMPBDGJAFDF;
class IKHLECEJHPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMPBDGJAFDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2E8320)
#define EMPBDGJAFDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E86C0)
#define EMPBDGJAFDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2E7E80)
#define EMPBDGJAFDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2E7DF0)
#define EMPBDGJAFDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E7DB0)
#define EMPBDGJAFDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2E8030)
#define EMPBDGJAFDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2E7EE0)
#define EMPBDGJAFDF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2E7ED0)
#define EMPBDGJAFDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2E8150)
#define EMPBDGJAFDF_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1E2E7EB0)
#define EMPBDGJAFDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2E7D70)
#define EMPBDGJAFDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2E84F0)
#define EMPBDGJAFDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2E8450)
#define EMPBDGJAFDF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2E7EC0)
#define EMPBDGJAFDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2E7DA0)
#define EMPBDGJAFDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2E81C0)
#define EMPBDGJAFDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2E8220)

inline static constexpr unsigned int EMPBDGJAFDF_TypeDefinitionIndex = 30675;

	class EMPBDGJAFDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IKHLECEJHPO*>* EFHEPAJIOHG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EMPBDGJAFDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMPBDGJAFDF*>**)UnitySDK::FromName("", "EMPBDGJAFDF")->GetStaticField(0x54110);
		}

		static ::Google::Protobuf::FieldCodec_1<::IKHLECEJHPO*>** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::IKHLECEJHPO*>**)UnitySDK::FromName("", "EMPBDGJAFDF")->GetStaticField(0x54118);
		}

		// static const ::System::Object LDPIDBDJDLO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMPBDGJAFDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMPBDGJAFDF*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMPBDGJAFDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMPBDGJAFDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMPBDGJAFDF*>*(*)())((::PBYTE)hIl2Cpp + EMPBDGJAFDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMPBDGJAFDF* Clone()
		{
			return ((::EMPBDGJAFDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IKHLECEJHPO*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IKHLECEJHPO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_INJLCGGALGC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMPBDGJAFDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMPBDGJAFDF*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMPBDGJAFDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMPBDGJAFDF*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMPBDGJAFDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

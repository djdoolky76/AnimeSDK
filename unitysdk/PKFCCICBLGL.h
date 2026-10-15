#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKFCCICBLGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKFCCICBLGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF5C2F0)
#define PKFCCICBLGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF5C510)
#define PKFCCICBLGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF5BF40)
#define PKFCCICBLGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF5BF10)
#define PKFCCICBLGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF5BF00)
#define PKFCCICBLGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF5C070)
#define PKFCCICBLGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF5BFA0)
#define PKFCCICBLGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF5BF90)
#define PKFCCICBLGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF5C1E0)
#define PKFCCICBLGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF5BEC0)
#define PKFCCICBLGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF5C3B0)
#define PKFCCICBLGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF5C380)
#define PKFCCICBLGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF5BF80)
#define PKFCCICBLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF5BEF0)
#define PKFCCICBLGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF5C210)
#define PKFCCICBLGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF5C270)

inline static constexpr unsigned int PKFCCICBLGL_TypeDefinitionIndex = 28845;

	class PKFCCICBLGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PKFCCICBLGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKFCCICBLGL*>**)UnitySDK::FromName("", "PKFCCICBLGL")->GetStaticField(0x39450);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKFCCICBLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFCCICBLGL*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFCCICBLGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKFCCICBLGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKFCCICBLGL*>*(*)())((::PBYTE)hIl2Cpp + PKFCCICBLGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKFCCICBLGL* Clone()
		{
			return ((::PKFCCICBLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKFCCICBLGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKFCCICBLGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKFCCICBLGL*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFCCICBLGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKFCCICBLGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFCCICBLGL*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKFCCICBLGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIKCHNBAGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEIKCHNBAGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E195110)
#define DEIKCHNBAGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E195330)
#define DEIKCHNBAGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E194D60)
#define DEIKCHNBAGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E194D30)
#define DEIKCHNBAGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E194D20)
#define DEIKCHNBAGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E194E90)
#define DEIKCHNBAGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E194DC0)
#define DEIKCHNBAGL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E194DB0)
#define DEIKCHNBAGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E195000)
#define DEIKCHNBAGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E194CE0)
#define DEIKCHNBAGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1951D0)
#define DEIKCHNBAGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1951A0)
#define DEIKCHNBAGL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E194DA0)
#define DEIKCHNBAGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E194D10)
#define DEIKCHNBAGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E195030)
#define DEIKCHNBAGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E195090)

inline static constexpr unsigned int DEIKCHNBAGL_TypeDefinitionIndex = 26330;

	class DEIKCHNBAGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DEIKCHNBAGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEIKCHNBAGL*>**)UnitySDK::FromName("", "DEIKCHNBAGL")->GetStaticField(0x30F20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEIKCHNBAGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEIKCHNBAGL*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEIKCHNBAGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEIKCHNBAGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEIKCHNBAGL*>*(*)())((::PBYTE)hIl2Cpp + DEIKCHNBAGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEIKCHNBAGL* Clone()
		{
			return ((::DEIKCHNBAGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEIKCHNBAGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEIKCHNBAGL*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEIKCHNBAGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEIKCHNBAGL*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEIKCHNBAGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

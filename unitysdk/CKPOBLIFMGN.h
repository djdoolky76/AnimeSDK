#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKPOBLIFMGN;
class FMNKKAMOHEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKPOBLIFMGN_AAIIDJCKKAP_OFFSET UNITYSDK_OFFSET(0x1E0C4170)
#define CKPOBLIFMGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C47F0)
#define CKPOBLIFMGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4B00)
#define CKPOBLIFMGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C40E0)
#define CKPOBLIFMGN_CMPAOKJFDIO_OFFSET UNITYSDK_OFFSET(0x1E0C4160)
#define CKPOBLIFMGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C4070)
#define CKPOBLIFMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4060)
#define CKPOBLIFMGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C42F0)
#define CKPOBLIFMGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C4180)
#define CKPOBLIFMGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C45C0)
#define CKPOBLIFMGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C4020)
#define CKPOBLIFMGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0C4930)
#define CKPOBLIFMGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0C4850)
#define CKPOBLIFMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C4050)
#define CKPOBLIFMGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C4700)
#define CKPOBLIFMGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C4760)

inline static constexpr unsigned int CKPOBLIFMGN_TypeDefinitionIndex = 29639;

	class CKPOBLIFMGN : public ::System::Object
	{
	public:
		::FMNKKAMOHEE* INAGEMADPEB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>**)UnitySDK::FromName("", "CKPOBLIFMGN")->GetStaticField(0x19D20);
		}

		// static const ::System::Object DLKFJKFALDP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKPOBLIFMGN*>*(*)())((::PBYTE)hIl2Cpp + CKPOBLIFMGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKPOBLIFMGN* Clone()
		{
			return ((::CKPOBLIFMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CLONE_OFFSET))(this);
		}

		::FMNKKAMOHEE* CMPAOKJFDIO()
		{
			return ((::FMNKKAMOHEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CMPAOKJFDIO_OFFSET))(this);
		}

		::System::Void AAIIDJCKKAP(::FMNKKAMOHEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMNKKAMOHEE*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_AAIIDJCKKAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKPOBLIFMGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKPOBLIFMGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

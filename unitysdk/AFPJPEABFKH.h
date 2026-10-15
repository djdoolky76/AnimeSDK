#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFPJPEABFKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFPJPEABFKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F7970)
#define AFPJPEABFKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F7B90)
#define AFPJPEABFKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F7560)
#define AFPJPEABFKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F7530)
#define AFPJPEABFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F7520)
#define AFPJPEABFKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F76F0)
#define AFPJPEABFKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F75F0)
#define AFPJPEABFKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F7860)
#define AFPJPEABFKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F74B0)
#define AFPJPEABFKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F7A30)
#define AFPJPEABFKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F7A00)
#define AFPJPEABFKH_OCHGLPABHJI_OFFSET UNITYSDK_OFFSET(0x1E0F75D0)
#define AFPJPEABFKH_OEGGJMAJNCB_OFFSET UNITYSDK_OFFSET(0x1E0F75E0)
#define AFPJPEABFKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F7510)
#define AFPJPEABFKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F7890)
#define AFPJPEABFKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F78F0)

inline static constexpr unsigned int AFPJPEABFKH_TypeDefinitionIndex = 29584;

	class AFPJPEABFKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KECMHCOJCKI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AFPJPEABFKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFPJPEABFKH*>**)UnitySDK::FromName("", "AFPJPEABFKH")->GetStaticField(0x36580);
		}

		// static const ::System::Object JOFGMGPBGFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFPJPEABFKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFPJPEABFKH*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFPJPEABFKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFPJPEABFKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFPJPEABFKH*>*(*)())((::PBYTE)hIl2Cpp + AFPJPEABFKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFPJPEABFKH* Clone()
		{
			return ((::AFPJPEABFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCHGLPABHJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_OCHGLPABHJI_OFFSET))(this);
		}

		::System::Void OEGGJMAJNCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFPJPEABFKH_OEGGJMAJNCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFPJPEABFKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFPJPEABFKH*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPJPEABFKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFPJPEABFKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFPJPEABFKH*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFPJPEABFKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

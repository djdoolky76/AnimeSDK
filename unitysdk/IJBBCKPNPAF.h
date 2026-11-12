#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IJBBCKPNPAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IJBBCKPNPAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F995C20)
#define IJBBCKPNPAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F995E40)
#define IJBBCKPNPAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F995870)
#define IJBBCKPNPAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F995840)
#define IJBBCKPNPAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F995830)
#define IJBBCKPNPAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9959A0)
#define IJBBCKPNPAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9958D0)
#define IJBBCKPNPAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F9958C0)
#define IJBBCKPNPAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F995B10)
#define IJBBCKPNPAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9957F0)
#define IJBBCKPNPAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F995CE0)
#define IJBBCKPNPAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F995CB0)
#define IJBBCKPNPAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F9958B0)
#define IJBBCKPNPAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F995820)
#define IJBBCKPNPAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F995B40)
#define IJBBCKPNPAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F995BA0)

inline static constexpr unsigned int IJBBCKPNPAF_TypeDefinitionIndex = 28660;

	class IJBBCKPNPAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IJBBCKPNPAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IJBBCKPNPAF*>**)UnitySDK::FromName("", "IJBBCKPNPAF")->GetStaticField(0x4FC10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IJBBCKPNPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJBBCKPNPAF*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJBBCKPNPAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IJBBCKPNPAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IJBBCKPNPAF*>*(*)())((::PBYTE)hIl2Cpp + IJBBCKPNPAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IJBBCKPNPAF* Clone()
		{
			return ((::IJBBCKPNPAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IJBBCKPNPAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJBBCKPNPAF*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IJBBCKPNPAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJBBCKPNPAF*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IJBBCKPNPAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

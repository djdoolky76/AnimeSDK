#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAFLDKHDAF;
class HMAAICNBKCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJAFLDKHDAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3AA6A0)
#define CJAFLDKHDAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3AA970)
#define CJAFLDKHDAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3AA020)
#define CJAFLDKHDAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3A9F70)
#define CJAFLDKHDAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A9F60)
#define CJAFLDKHDAF_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1F3AA0F0)
#define CJAFLDKHDAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3AA270)
#define CJAFLDKHDAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3AA100)
#define CJAFLDKHDAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3AA540)
#define CJAFLDKHDAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3A9F20)
#define CJAFLDKHDAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3AA7C0)
#define CJAFLDKHDAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3AA700)
#define CJAFLDKHDAF_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1F3AA0E0)
#define CJAFLDKHDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3A9F50)
#define CJAFLDKHDAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3AA5B0)
#define CJAFLDKHDAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3AA610)

inline static constexpr unsigned int CJAFLDKHDAF_TypeDefinitionIndex = 33941;

	class CJAFLDKHDAF : public ::System::Object
	{
	public:
		::HMAAICNBKCI* DFKHBNCHKBI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJAFLDKHDAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJAFLDKHDAF*>**)UnitySDK::FromName("", "CJAFLDKHDAF")->GetStaticField(0x121A0);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJAFLDKHDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAFLDKHDAF*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJAFLDKHDAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJAFLDKHDAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJAFLDKHDAF*>*(*)())((::PBYTE)hIl2Cpp + CJAFLDKHDAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJAFLDKHDAF* Clone()
		{
			return ((::CJAFLDKHDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_CLONE_OFFSET))(this);
		}

		::HMAAICNBKCI* MNLDMBGAJIF()
		{
			return ((::HMAAICNBKCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::HMAAICNBKCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMAAICNBKCI*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJAFLDKHDAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJAFLDKHDAF*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJAFLDKHDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAFLDKHDAF*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJAFLDKHDAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

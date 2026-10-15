#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHFEGOFPHHC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHFEGOFPHHC_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E814CE0)
#define KHFEGOFPHHC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E815070)
#define KHFEGOFPHHC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E815290)
#define KHFEGOFPHHC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E814C60)
#define KHFEGOFPHHC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E814C30)
#define KHFEGOFPHHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E814C20)
#define KHFEGOFPHHC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E814DF0)
#define KHFEGOFPHHC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E814CF0)
#define KHFEGOFPHHC_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E814CD0)
#define KHFEGOFPHHC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E814F60)
#define KHFEGOFPHHC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E814BB0)
#define KHFEGOFPHHC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E815130)
#define KHFEGOFPHHC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E815100)
#define KHFEGOFPHHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E814C10)
#define KHFEGOFPHHC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E814F90)
#define KHFEGOFPHHC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E814FF0)

inline static constexpr unsigned int KHFEGOFPHHC_TypeDefinitionIndex = 28926;

	class KHFEGOFPHHC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHFEGOFPHHC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHFEGOFPHHC*>**)UnitySDK::FromName("", "KHFEGOFPHHC")->GetStaticField(0x15F80);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHFEGOFPHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHFEGOFPHHC*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHFEGOFPHHC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHFEGOFPHHC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHFEGOFPHHC*>*(*)())((::PBYTE)hIl2Cpp + KHFEGOFPHHC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHFEGOFPHHC* Clone()
		{
			return ((::KHFEGOFPHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHFEGOFPHHC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHFEGOFPHHC*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHFEGOFPHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHFEGOFPHHC*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHFEGOFPHHC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

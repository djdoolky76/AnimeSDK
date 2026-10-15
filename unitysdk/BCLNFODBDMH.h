#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCLNFODBDMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCLNFODBDMH_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8DCFB0)
#define BCLNFODBDMH_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8DCFC0)
#define BCLNFODBDMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8DD320)
#define BCLNFODBDMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8DD540)
#define BCLNFODBDMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8DCF70)
#define BCLNFODBDMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8DCF40)
#define BCLNFODBDMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCF30)
#define BCLNFODBDMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8DD0A0)
#define BCLNFODBDMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8DCFD0)
#define BCLNFODBDMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8DD210)
#define BCLNFODBDMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8DCEF0)
#define BCLNFODBDMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8DD3E0)
#define BCLNFODBDMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8DD3B0)
#define BCLNFODBDMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8DCF20)
#define BCLNFODBDMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8DD240)
#define BCLNFODBDMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8DD2A0)

inline static constexpr unsigned int BCLNFODBDMH_TypeDefinitionIndex = 26362;

	class BCLNFODBDMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BCLNFODBDMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCLNFODBDMH*>**)UnitySDK::FromName("", "BCLNFODBDMH")->GetStaticField(0x50920);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCLNFODBDMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLNFODBDMH*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCLNFODBDMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCLNFODBDMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCLNFODBDMH*>*(*)())((::PBYTE)hIl2Cpp + BCLNFODBDMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCLNFODBDMH* Clone()
		{
			return ((::BCLNFODBDMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCLNFODBDMH_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCLNFODBDMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLNFODBDMH*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLNFODBDMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCLNFODBDMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCLNFODBDMH*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCLNFODBDMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

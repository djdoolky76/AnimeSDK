#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPJIDIACCKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPJIDIACCKN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E8BDFA0)
#define KPJIDIACCKN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E8BDFB0)
#define KPJIDIACCKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BE400)
#define KPJIDIACCKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BE6E0)
#define KPJIDIACCKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BDF70)
#define KPJIDIACCKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BDEE0)
#define KPJIDIACCKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BDE90)
#define KPJIDIACCKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BE0D0)
#define KPJIDIACCKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BDFD0)
#define KPJIDIACCKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BE1C0)
#define KPJIDIACCKN_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E8BDFC0)
#define KPJIDIACCKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BDE50)
#define KPJIDIACCKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BE530)
#define KPJIDIACCKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BE4E0)
#define KPJIDIACCKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BDE80)
#define KPJIDIACCKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BE2C0)
#define KPJIDIACCKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BE320)

inline static constexpr unsigned int KPJIDIACCKN_TypeDefinitionIndex = 32204;

	class KPJIDIACCKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KPJIDIACCKN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPJIDIACCKN*>**)UnitySDK::FromName("", "KPJIDIACCKN")->GetStaticField(0x2D0A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KPJIDIACCKN")->GetStaticField(0x2D0A8);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPJIDIACCKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJIDIACCKN*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPJIDIACCKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPJIDIACCKN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPJIDIACCKN*>*(*)())((::PBYTE)hIl2Cpp + KPJIDIACCKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPJIDIACCKN* Clone()
		{
			return ((::KPJIDIACCKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPJIDIACCKN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPJIDIACCKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPJIDIACCKN*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJIDIACCKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPJIDIACCKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPJIDIACCKN*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPJIDIACCKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

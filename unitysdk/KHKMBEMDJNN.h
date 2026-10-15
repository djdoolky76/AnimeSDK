#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKMBEMDJNN;
class LBBGLAHFJKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHKMBEMDJNN_BMONMLMNFMD_OFFSET UNITYSDK_OFFSET(0x1E847FC0)
#define KHKMBEMDJNN_CAJKOABPDOM_OFFSET UNITYSDK_OFFSET(0x1E847FE0)
#define KHKMBEMDJNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E848440)
#define KHKMBEMDJNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8487C0)
#define KHKMBEMDJNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E847F90)
#define KHKMBEMDJNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E847ED0)
#define KHKMBEMDJNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E847E80)
#define KHKMBEMDJNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E848140)
#define KHKMBEMDJNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E847FF0)
#define KHKMBEMDJNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E848270)
#define KHKMBEMDJNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E847E40)
#define KHKMBEMDJNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8485F0)
#define KHKMBEMDJNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E848550)
#define KHKMBEMDJNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E847E70)
#define KHKMBEMDJNN_PFFNHNOMKDH_OFFSET UNITYSDK_OFFSET(0x1E847FD0)
#define KHKMBEMDJNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8482E0)
#define KHKMBEMDJNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E848340)

inline static constexpr unsigned int KHKMBEMDJNN_TypeDefinitionIndex = 34485;

	class KHKMBEMDJNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>* OLOMCFLIIGH; // 0x18
		::System::UInt32 HPPOIDPFFFJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::LBBGLAHFJKN*>** StaticGet_OGDIKLOPFBM()
		{
			return (::Google::Protobuf::FieldCodec_1<::LBBGLAHFJKN*>**)UnitySDK::FromName("", "KHKMBEMDJNN")->GetStaticField(0x17970);
		}

		static ::Google::Protobuf::MessageParser_1<::KHKMBEMDJNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHKMBEMDJNN*>**)UnitySDK::FromName("", "KHKMBEMDJNN")->GetStaticField(0x17978);
		}

		// static const ::System::Object BBAGEPAOEOG; // 0x0
		// static const ::System::Object FNLNMODIJEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHKMBEMDJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMBEMDJNN*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHKMBEMDJNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHKMBEMDJNN*>*(*)())((::PBYTE)hIl2Cpp + KHKMBEMDJNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHKMBEMDJNN* Clone()
		{
			return ((::KHKMBEMDJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BMONMLMNFMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_BMONMLMNFMD_OFFSET))(this);
		}

		::System::Void PFFNHNOMKDH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_PFFNHNOMKDH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>* CAJKOABPDOM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LBBGLAHFJKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CAJKOABPDOM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHKMBEMDJNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHKMBEMDJNN*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHKMBEMDJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHKMBEMDJNN*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHKMBEMDJNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

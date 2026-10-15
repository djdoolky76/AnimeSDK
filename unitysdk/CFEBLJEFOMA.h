#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEBLJEFOMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFEBLJEFOMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0722F0)
#define CFEBLJEFOMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E072550)
#define CFEBLJEFOMA_CDEEFCCAELG_OFFSET UNITYSDK_OFFSET(0x1E071F20)
#define CFEBLJEFOMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E071EF0)
#define CFEBLJEFOMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E071E60)
#define CFEBLJEFOMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E071E10)
#define CFEBLJEFOMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E072020)
#define CFEBLJEFOMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E071F30)
#define CFEBLJEFOMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E072110)
#define CFEBLJEFOMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E071DD0)
#define CFEBLJEFOMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0723B0)
#define CFEBLJEFOMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E072360)
#define CFEBLJEFOMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E071E00)
#define CFEBLJEFOMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E072210)
#define CFEBLJEFOMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E072270)

inline static constexpr unsigned int CFEBLJEFOMA_TypeDefinitionIndex = 30251;

	class CFEBLJEFOMA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FBNBKBMDHNM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PLGACLNFKHO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CFEBLJEFOMA")->GetStaticField(0x11980);
		}

		static ::Google::Protobuf::MessageParser_1<::CFEBLJEFOMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFEBLJEFOMA*>**)UnitySDK::FromName("", "CFEBLJEFOMA")->GetStaticField(0x11988);
		}

		// static const ::System::Object CHODMKMCLLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFEBLJEFOMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEBLJEFOMA*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFEBLJEFOMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFEBLJEFOMA*>*(*)())((::PBYTE)hIl2Cpp + CFEBLJEFOMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFEBLJEFOMA* Clone()
		{
			return ((::CFEBLJEFOMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CDEEFCCAELG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CDEEFCCAELG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFEBLJEFOMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFEBLJEFOMA*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFEBLJEFOMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEBLJEFOMA*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFEBLJEFOMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

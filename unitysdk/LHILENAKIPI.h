#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPGAHDIJJDL;
class LHILENAKIPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHILENAKIPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E961F10)
#define LHILENAKIPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E962210)
#define LHILENAKIPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E961AF0)
#define LHILENAKIPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E961A60)
#define LHILENAKIPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E961A20)
#define LHILENAKIPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E961C70)
#define LHILENAKIPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E961B30)
#define LHILENAKIPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E961D90)
#define LHILENAKIPI_IEKIIHIOHOJ_OFFSET UNITYSDK_OFFSET(0x1E961B20)
#define LHILENAKIPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9619E0)
#define LHILENAKIPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E962050)
#define LHILENAKIPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E961FB0)
#define LHILENAKIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E961A10)
#define LHILENAKIPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E961E00)
#define LHILENAKIPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E961E60)

inline static constexpr unsigned int LHILENAKIPI_TypeDefinitionIndex = 30174;

	class LHILENAKIPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DPGAHDIJJDL*>* LKGNPNGJEDF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::DPGAHDIJJDL*>** StaticGet_DAMFHKHIAIA()
		{
			return (::Google::Protobuf::FieldCodec_1<::DPGAHDIJJDL*>**)UnitySDK::FromName("", "LHILENAKIPI")->GetStaticField(0x410E0);
		}

		static ::Google::Protobuf::MessageParser_1<::LHILENAKIPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHILENAKIPI*>**)UnitySDK::FromName("", "LHILENAKIPI")->GetStaticField(0x410E8);
		}

		// static const ::System::Object HJNDLGIHHGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHILENAKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHILENAKIPI*))((::PBYTE)hIl2Cpp + LHILENAKIPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHILENAKIPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHILENAKIPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHILENAKIPI*>*(*)())((::PBYTE)hIl2Cpp + LHILENAKIPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHILENAKIPI* Clone()
		{
			return ((::LHILENAKIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DPGAHDIJJDL*>* IEKIIHIOHOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DPGAHDIJJDL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_IEKIIHIOHOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHILENAKIPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHILENAKIPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHILENAKIPI*))((::PBYTE)hIl2Cpp + LHILENAKIPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHILENAKIPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHILENAKIPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHILENAKIPI*))((::PBYTE)hIl2Cpp + LHILENAKIPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHILENAKIPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

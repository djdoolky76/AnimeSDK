#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCPEGPJGLD;
class DOLMCHMNEIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKCPEGPJGLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205954E0)
#define CKCPEGPJGLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20595880)
#define CKCPEGPJGLD_CLONE_OFFSET UNITYSDK_OFFSET(0x20595040)
#define CKCPEGPJGLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20594F80)
#define CKCPEGPJGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x20594F30)
#define CKCPEGPJGLD_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x20595080)
#define CKCPEGPJGLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205951F0)
#define CKCPEGPJGLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x205950A0)
#define CKCPEGPJGLD_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x20595090)
#define CKCPEGPJGLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20595310)
#define CKCPEGPJGLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20594EF0)
#define CKCPEGPJGLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205956B0)
#define CKCPEGPJGLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20595610)
#define CKCPEGPJGLD_OMJILCNDMOH_OFFSET UNITYSDK_OFFSET(0x20595070)
#define CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20594F20)
#define CKCPEGPJGLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20595380)
#define CKCPEGPJGLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x205953E0)

inline static constexpr unsigned int CKCPEGPJGLD_TypeDefinitionIndex = 33369;

	class CKCPEGPJGLD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DOLMCHMNEIL*>* BKOMHPBNKPD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>**)UnitySDK::FromName("", "CKCPEGPJGLD")->GetStaticField(0x126E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::DOLMCHMNEIL*>** StaticGet_CIBEFBPGOCA()
		{
			return (::Google::Protobuf::FieldCodec_1<::DOLMCHMNEIL*>**)UnitySDK::FromName("", "CKCPEGPJGLD")->GetStaticField(0x126E8);
		}

		// static const ::System::Object AGGCHJFEBPC; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>*(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKCPEGPJGLD* Clone()
		{
			return ((::CKCPEGPJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DOLMCHMNEIL*>* OMJILCNDMOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DOLMCHMNEIL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_OMJILCNDMOH_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

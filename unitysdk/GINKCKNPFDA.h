#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GINKCKNPFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GINKCKNPFDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E475380)
#define GINKCKNPFDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E475610)
#define GINKCKNPFDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E474E60)
#define GINKCKNPFDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E474D70)
#define GINKCKNPFDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E474CE0)
#define GINKCKNPFDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E474F00)
#define GINKCKNPFDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E474ED0)
#define GINKCKNPFDA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E474EA0)
#define GINKCKNPFDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E475020)
#define GINKCKNPFDA_GMHAALGLKIE_OFFSET UNITYSDK_OFFSET(0x1E474EB0)
#define GINKCKNPFDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E474CA0)
#define GINKCKNPFDA_KPIBANJHJJG_OFFSET UNITYSDK_OFFSET(0x1E474EC0)
#define GINKCKNPFDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E475500)
#define GINKCKNPFDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E475490)
#define GINKCKNPFDA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E474E90)
#define GINKCKNPFDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E474CD0)
#define GINKCKNPFDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4751F0)
#define GINKCKNPFDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E475250)

inline static constexpr unsigned int GINKCKNPFDA_TypeDefinitionIndex = 33836;

	class GINKCKNPFDA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LDMKGALNAGM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FPJNIHPKFIO; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KIAGHIGIAAE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GINKCKNPFDA")->GetStaticField(0x197E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEDIGKPBKLK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GINKCKNPFDA")->GetStaticField(0x197E8);
		}

		static ::Google::Protobuf::MessageParser_1<::GINKCKNPFDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GINKCKNPFDA*>**)UnitySDK::FromName("", "GINKCKNPFDA")->GetStaticField(0x197F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CNLJENDLKNB; // 0x0
		// static const ::System::Object IKLGKLKAEMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GINKCKNPFDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GINKCKNPFDA*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GINKCKNPFDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GINKCKNPFDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GINKCKNPFDA*>*(*)())((::PBYTE)hIl2Cpp + GINKCKNPFDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GINKCKNPFDA* Clone()
		{
			return ((::GINKCKNPFDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GINKCKNPFDA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GMHAALGLKIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_GMHAALGLKIE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KPIBANJHJJG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_KPIBANJHJJG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GINKCKNPFDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GINKCKNPFDA*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GINKCKNPFDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GINKCKNPFDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GINKCKNPFDA*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GINKCKNPFDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGMCMAKMJDK;
class OFGJFLCBBJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFGJFLCBBJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE17660)
#define OFGJFLCBBJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE179E0)
#define OFGJFLCBBJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE17150)
#define OFGJFLCBBJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE170C0)
#define OFGJFLCBBJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE17080)
#define OFGJFLCBBJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE17360)
#define OFGJFLCBBJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE171D0)
#define OFGJFLCBBJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE17490)
#define OFGJFLCBBJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE17010)
#define OFGJFLCBBJP_KACJKJJDAKD_OFFSET UNITYSDK_OFFSET(0x1DE171C0)
#define OFGJFLCBBJP_KNJPGIDLCNO_OFFSET UNITYSDK_OFFSET(0x1DE171B0)
#define OFGJFLCBBJP_MBFBBFFNMOC_OFFSET UNITYSDK_OFFSET(0x1DE171A0)
#define OFGJFLCBBJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE17810)
#define OFGJFLCBBJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE17770)
#define OFGJFLCBBJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE17070)
#define OFGJFLCBBJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE17500)
#define OFGJFLCBBJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE17560)

inline static constexpr unsigned int OFGJFLCBBJP_TypeDefinitionIndex = 27329;

	class OFGJFLCBBJP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* IJBPFEJMAOB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JLDGCEDOAHN; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::CGMCMAKMJDK*>** StaticGet_EKGIINENDAM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CGMCMAKMJDK*>**)UnitySDK::FromName("", "OFGJFLCBBJP")->GetStaticField(0x167D0);
		}

		static ::Google::Protobuf::MessageParser_1<::OFGJFLCBBJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OFGJFLCBBJP*>**)UnitySDK::FromName("", "OFGJFLCBBJP")->GetStaticField(0x167D8);
		}

		// static const ::System::Object JFOCPIOEMDC; // 0x0
		// static const ::System::Object DLAAOCPMHEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFGJFLCBBJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGJFLCBBJP*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFGJFLCBBJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OFGJFLCBBJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OFGJFLCBBJP*>*(*)())((::PBYTE)hIl2Cpp + OFGJFLCBBJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFGJFLCBBJP* Clone()
		{
			return ((::OFGJFLCBBJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBFBBFFNMOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_MBFBBFFNMOC_OFFSET))(this);
		}

		::System::Void KNJPGIDLCNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_KNJPGIDLCNO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>* KACJKJJDAKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CGMCMAKMJDK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_KACJKJJDAKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFGJFLCBBJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFGJFLCBBJP*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFGJFLCBBJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFGJFLCBBJP*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFGJFLCBBJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

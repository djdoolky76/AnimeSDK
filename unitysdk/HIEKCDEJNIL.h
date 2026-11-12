#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIEKCDEJNIL;
class PNEGDOHOLDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIEKCDEJNIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F88D1F0)
#define HIEKCDEJNIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88D580)
#define HIEKCDEJNIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F88CD40)
#define HIEKCDEJNIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F88CCB0)
#define HIEKCDEJNIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88CC70)
#define HIEKCDEJNIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F88CEF0)
#define HIEKCDEJNIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F88CDA0)
#define HIEKCDEJNIL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F88CD90)
#define HIEKCDEJNIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F88D010)
#define HIEKCDEJNIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F88CC30)
#define HIEKCDEJNIL_JKNCPBGLPGE_OFFSET UNITYSDK_OFFSET(0x1F88CD70)
#define HIEKCDEJNIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F88D3C0)
#define HIEKCDEJNIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F88D320)
#define HIEKCDEJNIL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F88CD80)
#define HIEKCDEJNIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F88CC60)
#define HIEKCDEJNIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F88D080)
#define HIEKCDEJNIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F88D0E0)

inline static constexpr unsigned int HIEKCDEJNIL_TypeDefinitionIndex = 32208;

	class HIEKCDEJNIL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PNEGDOHOLDN*>* OIKOIKPJGAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HIEKCDEJNIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIEKCDEJNIL*>**)UnitySDK::FromName("", "HIEKCDEJNIL")->GetStaticField(0x30E30);
		}

		static ::Google::Protobuf::FieldCodec_1<::PNEGDOHOLDN*>** StaticGet_GLFJEOPAJME()
		{
			return (::Google::Protobuf::FieldCodec_1<::PNEGDOHOLDN*>**)UnitySDK::FromName("", "HIEKCDEJNIL")->GetStaticField(0x30E38);
		}

		// static const ::System::Object JIPNFJDEGEC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIEKCDEJNIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEKCDEJNIL*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIEKCDEJNIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIEKCDEJNIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIEKCDEJNIL*>*(*)())((::PBYTE)hIl2Cpp + HIEKCDEJNIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIEKCDEJNIL* Clone()
		{
			return ((::HIEKCDEJNIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PNEGDOHOLDN*>* JKNCPBGLPGE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PNEGDOHOLDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_JKNCPBGLPGE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIEKCDEJNIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEKCDEJNIL*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIEKCDEJNIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIEKCDEJNIL*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIEKCDEJNIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LICMNPOKCMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LICMNPOKCMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96B6D0)
#define LICMNPOKCMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96B910)
#define LICMNPOKCMB_CJEMIBHIAFA_OFFSET UNITYSDK_OFFSET(0x1E96B220)
#define LICMNPOKCMB_CLMHHFDHNBJ_OFFSET UNITYSDK_OFFSET(0x1E96B240)
#define LICMNPOKCMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96B1E0)
#define LICMNPOKCMB_COMIFJEKJGO_OFFSET UNITYSDK_OFFSET(0x1E96B210)
#define LICMNPOKCMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96B140)
#define LICMNPOKCMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96B0F0)
#define LICMNPOKCMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96B2F0)
#define LICMNPOKCMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96B260)
#define LICMNPOKCMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96B400)
#define LICMNPOKCMB_GIHJKPBNKEP_OFFSET UNITYSDK_OFFSET(0x1E96B230)
#define LICMNPOKCMB_JIMHOBGKOAJ_OFFSET UNITYSDK_OFFSET(0x1E96B250)
#define LICMNPOKCMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96B0B0)
#define LICMNPOKCMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96B820)
#define LICMNPOKCMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96B7C0)
#define LICMNPOKCMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96B0E0)
#define LICMNPOKCMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96B500)
#define LICMNPOKCMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96B560)

inline static constexpr unsigned int LICMNPOKCMB_TypeDefinitionIndex = 31394;

	class LICMNPOKCMB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JLCEBANGOGI; // 0x18
		::System::UInt32 EKCHCJMBPFB; // 0x20
		::System::Boolean LPNEHPBAMPI; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPECBGKNPGH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LICMNPOKCMB")->GetStaticField(0x44B30);
		}

		static ::Google::Protobuf::MessageParser_1<::LICMNPOKCMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LICMNPOKCMB*>**)UnitySDK::FromName("", "LICMNPOKCMB")->GetStaticField(0x44B38);
		}

		// static const ::System::Object BIEDPMPJFBN; // 0x0
		// static const ::System::Object GIEKFJNOOHK; // 0x0
		// static const ::System::Object EPMOLGOAKCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LICMNPOKCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LICMNPOKCMB*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LICMNPOKCMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LICMNPOKCMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LICMNPOKCMB*>*(*)())((::PBYTE)hIl2Cpp + LICMNPOKCMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LICMNPOKCMB* Clone()
		{
			return ((::LICMNPOKCMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* COMIFJEKJGO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_COMIFJEKJGO_OFFSET))(this);
		}

		::System::Boolean CJEMIBHIAFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CJEMIBHIAFA_OFFSET))(this);
		}

		::System::Void GIHJKPBNKEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LICMNPOKCMB_GIHJKPBNKEP_OFFSET))(this, a1);
		}

		::System::UInt32 CLMHHFDHNBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CLMHHFDHNBJ_OFFSET))(this);
		}

		::System::Void JIMHOBGKOAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LICMNPOKCMB_JIMHOBGKOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LICMNPOKCMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LICMNPOKCMB*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LICMNPOKCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LICMNPOKCMB*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LICMNPOKCMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

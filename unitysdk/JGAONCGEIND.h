#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAONCGEIND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGAONCGEIND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E736700)
#define JGAONCGEIND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E736960)
#define JGAONCGEIND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E736300)
#define JGAONCGEIND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E736270)
#define JGAONCGEIND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E736220)
#define JGAONCGEIND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E736430)
#define JGAONCGEIND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E736340)
#define JGAONCGEIND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E736520)
#define JGAONCGEIND_HAGCBMKKGJE_OFFSET UNITYSDK_OFFSET(0x1E736330)
#define JGAONCGEIND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7361E0)
#define JGAONCGEIND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7367C0)
#define JGAONCGEIND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E736770)
#define JGAONCGEIND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E736210)
#define JGAONCGEIND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E736620)
#define JGAONCGEIND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E736680)

inline static constexpr unsigned int JGAONCGEIND_TypeDefinitionIndex = 32362;

	class JGAONCGEIND : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHNIEACFJFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGAONCGEIND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGAONCGEIND*>**)UnitySDK::FromName("", "JGAONCGEIND")->GetStaticField(0x60640);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LBEBIPBKKAK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JGAONCGEIND")->GetStaticField(0x60648);
		}

		// static const ::System::Object MDCDGIGBNFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGAONCGEIND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAONCGEIND*))((::PBYTE)hIl2Cpp + JGAONCGEIND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAONCGEIND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGAONCGEIND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGAONCGEIND*>*(*)())((::PBYTE)hIl2Cpp + JGAONCGEIND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGAONCGEIND* Clone()
		{
			return ((::JGAONCGEIND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HAGCBMKKGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_HAGCBMKKGJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGAONCGEIND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGAONCGEIND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAONCGEIND*))((::PBYTE)hIl2Cpp + JGAONCGEIND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGAONCGEIND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAONCGEIND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGAONCGEIND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAONCGEIND*))((::PBYTE)hIl2Cpp + JGAONCGEIND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGAONCGEIND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

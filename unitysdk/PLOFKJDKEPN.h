#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JHACFFJIPHK;
class PCONBOGEDFD;
class PLOFKJDKEPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLOFKJDKEPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA4F70)
#define PLOFKJDKEPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA5340)
#define PLOFKJDKEPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFA48E0)
#define PLOFKJDKEPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFA47C0)
#define PLOFKJDKEPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA4770)
#define PLOFKJDKEPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFA4B90)
#define PLOFKJDKEPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFA4960)
#define PLOFKJDKEPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFA4D60)
#define PLOFKJDKEPN_HAGCBMKKGJE_OFFSET UNITYSDK_OFFSET(0x1DFA4930)
#define PLOFKJDKEPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFA4700)
#define PLOFKJDKEPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA5160)
#define PLOFKJDKEPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA5050)
#define PLOFKJDKEPN_NKMOCNDJCDK_OFFSET UNITYSDK_OFFSET(0x1DFA4940)
#define PLOFKJDKEPN_PBFOBJMFJGN_OFFSET UNITYSDK_OFFSET(0x1DFA4950)
#define PLOFKJDKEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFA4760)
#define PLOFKJDKEPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFA4DF0)
#define PLOFKJDKEPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA4E50)

inline static constexpr unsigned int PLOFKJDKEPN_TypeDefinitionIndex = 31769;

	class PLOFKJDKEPN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JHACFFJIPHK*>* DHNIEACFJFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::PCONBOGEDFD* PNOPCAMBBDI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_LBEBIPBKKAK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PLOFKJDKEPN")->GetStaticField(0x4C320);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PLOFKJDKEPN")->GetStaticField(0x4C328);
		}

		// static const ::System::Object MDCDGIGBNFD; // 0x0
		// static const ::System::Object IPEJELEHDPO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLOFKJDKEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLOFKJDKEPN*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLOFKJDKEPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PLOFKJDKEPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLOFKJDKEPN* Clone()
		{
			return ((::PLOFKJDKEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JHACFFJIPHK*>* HAGCBMKKGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JHACFFJIPHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_HAGCBMKKGJE_OFFSET))(this);
		}

		::PCONBOGEDFD* NKMOCNDJCDK()
		{
			return ((::PCONBOGEDFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_NKMOCNDJCDK_OFFSET))(this);
		}

		::System::Void PBFOBJMFJGN(::PCONBOGEDFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCONBOGEDFD*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_PBFOBJMFJGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLOFKJDKEPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLOFKJDKEPN*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLOFKJDKEPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLOFKJDKEPN*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLOFKJDKEPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

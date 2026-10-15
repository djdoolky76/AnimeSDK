#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIMNHEENPP;
class BCCONKJHDJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALIMNHEENPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E50E380)
#define ALIMNHEENPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50E820)
#define ALIMNHEENPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E50DE30)
#define ALIMNHEENPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E50DD70)
#define ALIMNHEENPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50DD20)
#define ALIMNHEENPP_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1E50DE60)
#define ALIMNHEENPP_EGLHILJHOIK_OFFSET UNITYSDK_OFFSET(0x1E50DE80)
#define ALIMNHEENPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E50E010)
#define ALIMNHEENPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E50DEB0)
#define ALIMNHEENPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E50E140)
#define ALIMNHEENPP_IJBGHKABIFJ_OFFSET UNITYSDK_OFFSET(0x1E50DE90)
#define ALIMNHEENPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E50DCE0)
#define ALIMNHEENPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E50E5C0)
#define ALIMNHEENPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E50E510)
#define ALIMNHEENPP_NJDANNIEFBP_OFFSET UNITYSDK_OFFSET(0x1E50DEA0)
#define ALIMNHEENPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E50DD10)
#define ALIMNHEENPP_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1E50DE70)
#define ALIMNHEENPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E50E1B0)
#define ALIMNHEENPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E50E210)

	class ALIMNHEENPP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* ICDEKMHKOPI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LPPKENBDKMI; // 0x20
		::System::UInt32 NNLJKKAEICI; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_DADAKEPPNJP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ALIMNHEENPP")->GetStaticField(0x39000);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ALIMNHEENPP")->GetStaticField(0x39008);
		}

		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object ALMJNAAHNGD; // 0x0
		// static const ::System::Object JNJOCAPOIIE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALIMNHEENPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ALIMNHEENPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALIMNHEENPP* Clone()
		{
			return ((::ALIMNHEENPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALIMNHEENPP_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>* EGLHILJHOIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCCONKJHDJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EGLHILJHOIK_OFFSET))(this);
		}

		::System::UInt32 IJBGHKABIFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_IJBGHKABIFJ_OFFSET))(this);
		}

		::System::Void NJDANNIEFBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALIMNHEENPP_NJDANNIEFBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALIMNHEENPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIMNHEENPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALIMNHEENPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIMNHEENPP*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALIMNHEENPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

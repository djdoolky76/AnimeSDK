#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFGEMCJLGPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFGEMCJLGPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4699A0)
#define GFGEMCJLGPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E469C60)
#define GFGEMCJLGPP_CEPAAIBOKNL_OFFSET UNITYSDK_OFFSET(0x1E469540)
#define GFGEMCJLGPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E469510)
#define GFGEMCJLGPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E469480)
#define GFGEMCJLGPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E469430)
#define GFGEMCJLGPP_DEKJBNNGOLI_OFFSET UNITYSDK_OFFSET(0x1E469580)
#define GFGEMCJLGPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E469610)
#define GFGEMCJLGPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E469590)
#define GFGEMCJLGPP_GDELACEOOBH_OFFSET UNITYSDK_OFFSET(0x1E469570)
#define GFGEMCJLGPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E469710)
#define GFGEMCJLGPP_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E469560)
#define GFGEMCJLGPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4693F0)
#define GFGEMCJLGPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E469B70)
#define GFGEMCJLGPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E469B10)
#define GFGEMCJLGPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E469420)
#define GFGEMCJLGPP_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E469550)
#define GFGEMCJLGPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E469810)
#define GFGEMCJLGPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E469870)

inline static constexpr unsigned int GFGEMCJLGPP_TypeDefinitionIndex = 30841;

	class GFGEMCJLGPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKCGNJININI; // 0x18
		::System::UInt32 PJLEJLBFGGC; // 0x20
		::System::UInt32 LAPNIOGIGPL; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_LLMCJDLDDNJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GFGEMCJLGPP")->GetStaticField(0x13AB0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFGEMCJLGPP")->GetStaticField(0x13AB8);
		}

		// static const ::System::Object JHFGAOJKCIP; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object BIAGFGJNPEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFGEMCJLGPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGEMCJLGPP*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFGEMCJLGPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFGEMCJLGPP* Clone()
		{
			return ((::GFGEMCJLGPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CEPAAIBOKNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CEPAAIBOKNL_OFFSET))(this);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::UInt32 GDELACEOOBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_GDELACEOOBH_OFFSET))(this);
		}

		::System::Void DEKJBNNGOLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_DEKJBNNGOLI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFGEMCJLGPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFGEMCJLGPP*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFGEMCJLGPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFGEMCJLGPP*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFGEMCJLGPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

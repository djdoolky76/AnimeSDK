#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAFIJAFIPN;
class LFLENBDPNJN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFLENBDPNJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E944690)
#define LFLENBDPNJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E944A10)
#define LFLENBDPNJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E944180)
#define LFLENBDPNJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9440C0)
#define LFLENBDPNJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944070)
#define LFLENBDPNJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E944390)
#define LFLENBDPNJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E944200)
#define LFLENBDPNJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9444C0)
#define LFLENBDPNJN_HOHILGPDAOO_OFFSET UNITYSDK_OFFSET(0x1E9441D0)
#define LFLENBDPNJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E944000)
#define LFLENBDPNJN_JOOLFNIHPAI_OFFSET UNITYSDK_OFFSET(0x1E9441F0)
#define LFLENBDPNJN_KJODNMDKBHD_OFFSET UNITYSDK_OFFSET(0x1E9441E0)
#define LFLENBDPNJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E944840)
#define LFLENBDPNJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9447A0)
#define LFLENBDPNJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E944060)
#define LFLENBDPNJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E944530)
#define LFLENBDPNJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E944590)

inline static constexpr unsigned int LFLENBDPNJN_TypeDefinitionIndex = 25641;

	class LFLENBDPNJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CJAFIJAFIPN*>* LFCEKLMLLCB; // 0x18
		::System::UInt32 HLODGEJKHLD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LFLENBDPNJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFLENBDPNJN*>**)UnitySDK::FromName("", "LFLENBDPNJN")->GetStaticField(0x3BF00);
		}

		static ::Google::Protobuf::FieldCodec_1<::CJAFIJAFIPN*>** StaticGet_AJLJGHMKBAN()
		{
			return (::Google::Protobuf::FieldCodec_1<::CJAFIJAFIPN*>**)UnitySDK::FromName("", "LFLENBDPNJN")->GetStaticField(0x3BF08);
		}

		// static const ::System::Object BBAPOFBGBIP; // 0x0
		// static const ::System::Object GDAGMBLGFMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFLENBDPNJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFLENBDPNJN*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLENBDPNJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFLENBDPNJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFLENBDPNJN*>*(*)())((::PBYTE)hIl2Cpp + LFLENBDPNJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFLENBDPNJN* Clone()
		{
			return ((::LFLENBDPNJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HOHILGPDAOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_HOHILGPDAOO_OFFSET))(this);
		}

		::System::Void KJODNMDKBHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFLENBDPNJN_KJODNMDKBHD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CJAFIJAFIPN*>* JOOLFNIHPAI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CJAFIJAFIPN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_JOOLFNIHPAI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFLENBDPNJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFLENBDPNJN*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLENBDPNJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFLENBDPNJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFLENBDPNJN*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFLENBDPNJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

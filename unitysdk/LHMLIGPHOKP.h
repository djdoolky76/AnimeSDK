#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHMLIGPHOKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHMLIGPHOKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93A1D0)
#define LHMLIGPHOKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93A490)
#define LHMLIGPHOKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E939D50)
#define LHMLIGPHOKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E939CC0)
#define LHMLIGPHOKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E939C70)
#define LHMLIGPHOKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E939ED0)
#define LHMLIGPHOKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E939DB0)
#define LHMLIGPHOKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E939FC0)
#define LHMLIGPHOKP_IHHGLAIBGIK_OFFSET UNITYSDK_OFFSET(0x1E939DA0)
#define LHMLIGPHOKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E939C00)
#define LHMLIGPHOKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93A2C0)
#define LHMLIGPHOKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93A270)
#define LHMLIGPHOKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E939C60)
#define LHMLIGPHOKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93A0C0)
#define LHMLIGPHOKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93A120)

inline static constexpr unsigned int LHMLIGPHOKP_TypeDefinitionIndex = 29268;

	class LHMLIGPHOKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OHKPMKPDJPF; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_PFCGFMFKNHP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LHMLIGPHOKP")->GetStaticField(0x37A70);
		}

		static ::Google::Protobuf::MessageParser_1<::LHMLIGPHOKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHMLIGPHOKP*>**)UnitySDK::FromName("", "LHMLIGPHOKP")->GetStaticField(0x37A78);
		}

		// static const ::System::Object BINNAAACDDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHMLIGPHOKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHMLIGPHOKP*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMLIGPHOKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHMLIGPHOKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHMLIGPHOKP*>*(*)())((::PBYTE)hIl2Cpp + LHMLIGPHOKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHMLIGPHOKP* Clone()
		{
			return ((::LHMLIGPHOKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHHGLAIBGIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_IHHGLAIBGIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHMLIGPHOKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHMLIGPHOKP*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHMLIGPHOKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHMLIGPHOKP*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHMLIGPHOKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

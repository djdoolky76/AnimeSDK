#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAKJMHLEJMD;
class HEGGPIEGBIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAKJMHLEJMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC40CB0)
#define GAKJMHLEJMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC40FB0)
#define GAKJMHLEJMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC40830)
#define GAKJMHLEJMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC40780)
#define GAKJMHLEJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC40730)
#define GAKJMHLEJMD_EKNPOODCEFP_OFFSET UNITYSDK_OFFSET(0x1FC40880)
#define GAKJMHLEJMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC40A10)
#define GAKJMHLEJMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC40890)
#define GAKJMHLEJMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC40B30)
#define GAKJMHLEJMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC406C0)
#define GAKJMHLEJMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC40DF0)
#define GAKJMHLEJMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC40D50)
#define GAKJMHLEJMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC40720)
#define GAKJMHLEJMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC40BA0)
#define GAKJMHLEJMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC40C00)

inline static constexpr unsigned int GAKJMHLEJMD_TypeDefinitionIndex = 36012;

	class GAKJMHLEJMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HEGGPIEGBIN*>* AKHGAALJPMD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GAKJMHLEJMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAKJMHLEJMD*>**)UnitySDK::FromName("", "GAKJMHLEJMD")->GetStaticField(0x55F20);
		}

		static ::Google::Protobuf::FieldCodec_1<::HEGGPIEGBIN*>** StaticGet_LNCNAPMLHLD()
		{
			return (::Google::Protobuf::FieldCodec_1<::HEGGPIEGBIN*>**)UnitySDK::FromName("", "GAKJMHLEJMD")->GetStaticField(0x55F28);
		}

		// static const ::System::Object GJFCCMPFCBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAKJMHLEJMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAKJMHLEJMD*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAKJMHLEJMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAKJMHLEJMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAKJMHLEJMD*>*(*)())((::PBYTE)hIl2Cpp + GAKJMHLEJMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAKJMHLEJMD* Clone()
		{
			return ((::GAKJMHLEJMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HEGGPIEGBIN*>* EKNPOODCEFP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HEGGPIEGBIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_EKNPOODCEFP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAKJMHLEJMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAKJMHLEJMD*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAKJMHLEJMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAKJMHLEJMD*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAKJMHLEJMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

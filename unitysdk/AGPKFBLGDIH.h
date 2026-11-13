#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPKFBLGDIH;
class PLMAMHBLJKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGPKFBLGDIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204F7930)
#define AGPKFBLGDIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F7CB0)
#define AGPKFBLGDIH_CLONE_OFFSET UNITYSDK_OFFSET(0x204F7410)
#define AGPKFBLGDIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204F7350)
#define AGPKFBLGDIH_CTOR_OFFSET UNITYSDK_OFFSET(0x204F7300)
#define AGPKFBLGDIH_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x204F7470)
#define AGPKFBLGDIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204F7620)
#define AGPKFBLGDIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x204F7490)
#define AGPKFBLGDIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204F7750)
#define AGPKFBLGDIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204F7290)
#define AGPKFBLGDIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204F7AE0)
#define AGPKFBLGDIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204F7A40)
#define AGPKFBLGDIH_MHMHGOCGJAH_OFFSET UNITYSDK_OFFSET(0x204F7480)
#define AGPKFBLGDIH_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x204F7460)
#define AGPKFBLGDIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204F72F0)
#define AGPKFBLGDIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204F77C0)
#define AGPKFBLGDIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x204F7820)

inline static constexpr unsigned int AGPKFBLGDIH_TypeDefinitionIndex = 28867;

	class AGPKFBLGDIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::PLMAMHBLJKP*>* JOCPHHCIKLL; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::PLMAMHBLJKP*>** StaticGet_JJIAFFLLHDC()
		{
			return (::Google::Protobuf::FieldCodec_1<::PLMAMHBLJKP*>**)UnitySDK::FromName("", "AGPKFBLGDIH")->GetStaticField(0x30C00);
		}

		static ::Google::Protobuf::MessageParser_1<::AGPKFBLGDIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGPKFBLGDIH*>**)UnitySDK::FromName("", "AGPKFBLGDIH")->GetStaticField(0x30C08);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object PNGKLFLGNIB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGPKFBLGDIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGPKFBLGDIH*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPKFBLGDIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGPKFBLGDIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGPKFBLGDIH*>*(*)())((::PBYTE)hIl2Cpp + AGPKFBLGDIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGPKFBLGDIH* Clone()
		{
			return ((::AGPKFBLGDIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PLMAMHBLJKP*>* MHMHGOCGJAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PLMAMHBLJKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_MHMHGOCGJAH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGPKFBLGDIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGPKFBLGDIH*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGPKFBLGDIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGPKFBLGDIH*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGPKFBLGDIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

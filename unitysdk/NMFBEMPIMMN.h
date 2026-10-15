#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIDFCGLODFB;
class NMFBEMPIMMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMFBEMPIMMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB47130)
#define NMFBEMPIMMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB473F0)
#define NMFBEMPIMMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB46AD0)
#define NMFBEMPIMMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB46A30)
#define NMFBEMPIMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB46A20)
#define NMFBEMPIMMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB46D10)
#define NMFBEMPIMMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB46BA0)
#define NMFBEMPIMMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB46FE0)
#define NMFBEMPIMMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB469E0)
#define NMFBEMPIMMN_JPFMMCENEMG_OFFSET UNITYSDK_OFFSET(0x1EB46B90)
#define NMFBEMPIMMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB47260)
#define NMFBEMPIMMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB47190)
#define NMFBEMPIMMN_MLBPDLMPMEB_OFFSET UNITYSDK_OFFSET(0x1EB46B80)
#define NMFBEMPIMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB46A10)
#define NMFBEMPIMMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB47040)
#define NMFBEMPIMMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB470A0)

inline static constexpr unsigned int NMFBEMPIMMN_TypeDefinitionIndex = 31049;

	class NMFBEMPIMMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EIDFCGLODFB* IMIDIAOHJLP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NMFBEMPIMMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMFBEMPIMMN*>**)UnitySDK::FromName("", "NMFBEMPIMMN")->GetStaticField(0x6A820);
		}

		// static const ::System::Object AMIKJNCAMPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMFBEMPIMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMFBEMPIMMN*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMFBEMPIMMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMFBEMPIMMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMFBEMPIMMN*>*(*)())((::PBYTE)hIl2Cpp + NMFBEMPIMMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMFBEMPIMMN* Clone()
		{
			return ((::NMFBEMPIMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_CLONE_OFFSET))(this);
		}

		::EIDFCGLODFB* MLBPDLMPMEB()
		{
			return ((::EIDFCGLODFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_MLBPDLMPMEB_OFFSET))(this);
		}

		::System::Void JPFMMCENEMG(::EIDFCGLODFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDFCGLODFB*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_JPFMMCENEMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMFBEMPIMMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMFBEMPIMMN*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMFBEMPIMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMFBEMPIMMN*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMFBEMPIMMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

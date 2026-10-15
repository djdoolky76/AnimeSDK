#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJLPGBIAADJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJLPGBIAADJ_AJDEMHDBJBN_OFFSET UNITYSDK_OFFSET(0x1E760A80)
#define JJLPGBIAADJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E760DF0)
#define JJLPGBIAADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E761010)
#define JJLPGBIAADJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E760A40)
#define JJLPGBIAADJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E760A10)
#define JJLPGBIAADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E760A00)
#define JJLPGBIAADJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E760B70)
#define JJLPGBIAADJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E760AA0)
#define JJLPGBIAADJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E760CE0)
#define JJLPGBIAADJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7609C0)
#define JJLPGBIAADJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E760EB0)
#define JJLPGBIAADJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E760E80)
#define JJLPGBIAADJ_OHJJJLLFGDC_OFFSET UNITYSDK_OFFSET(0x1E760A90)
#define JJLPGBIAADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7609F0)
#define JJLPGBIAADJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E760D10)
#define JJLPGBIAADJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E760D70)

inline static constexpr unsigned int JJLPGBIAADJ_TypeDefinitionIndex = 27130;

	class JJLPGBIAADJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HHBJCDAPKNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JJLPGBIAADJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJLPGBIAADJ*>**)UnitySDK::FromName("", "JJLPGBIAADJ")->GetStaticField(0x65310);
		}

		// static const ::System::Object LFBHAOBBKLA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJLPGBIAADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLPGBIAADJ*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJLPGBIAADJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJLPGBIAADJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJLPGBIAADJ*>*(*)())((::PBYTE)hIl2Cpp + JJLPGBIAADJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJLPGBIAADJ* Clone()
		{
			return ((::JJLPGBIAADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 AJDEMHDBJBN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_AJDEMHDBJBN_OFFSET))(this);
		}

		::System::Void OHJJJLLFGDC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_OHJJJLLFGDC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJLPGBIAADJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJLPGBIAADJ*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJLPGBIAADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJLPGBIAADJ*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJLPGBIAADJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

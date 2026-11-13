#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHPJCKDEDI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLHPJCKDEDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4AEC20)
#define PLHPJCKDEDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4AECC0)
#define PLHPJCKDEDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4AE910)
#define PLHPJCKDEDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4AE8E0)
#define PLHPJCKDEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4AE8D0)
#define PLHPJCKDEDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4AEA20)
#define PLHPJCKDEDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4AE950)
#define PLHPJCKDEDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4AEB80)
#define PLHPJCKDEDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F4AE890)
#define PLHPJCKDEDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4AEC70)
#define PLHPJCKDEDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4AEC40)
#define PLHPJCKDEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4AE8C0)
#define PLHPJCKDEDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4AEBB0)
#define PLHPJCKDEDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4AEC10)

inline static constexpr unsigned int PLHPJCKDEDI_TypeDefinitionIndex = 29334;

	class PLHPJCKDEDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PLHPJCKDEDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLHPJCKDEDI*>**)UnitySDK::FromName("", "PLHPJCKDEDI")->GetStaticField(0x44BC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLHPJCKDEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHPJCKDEDI*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHPJCKDEDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLHPJCKDEDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLHPJCKDEDI*>*(*)())((::PBYTE)hIl2Cpp + PLHPJCKDEDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLHPJCKDEDI* Clone()
		{
			return ((::PLHPJCKDEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLHPJCKDEDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLHPJCKDEDI*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLHPJCKDEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHPJCKDEDI*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLHPJCKDEDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

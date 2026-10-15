#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class HGCKEBEHCMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGCKEBEHCMJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E575080)
#define HGCKEBEHCMJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E575090)
#define HGCKEBEHCMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E575410)
#define HGCKEBEHCMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E575670)
#define HGCKEBEHCMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E575040)
#define HGCKEBEHCMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E575010)
#define HGCKEBEHCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E575000)
#define HGCKEBEHCMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E575170)
#define HGCKEBEHCMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5750A0)
#define HGCKEBEHCMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5752E0)
#define HGCKEBEHCMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E574FC0)
#define HGCKEBEHCMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E575510)
#define HGCKEBEHCMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5754E0)
#define HGCKEBEHCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E574FF0)
#define HGCKEBEHCMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E575310)
#define HGCKEBEHCMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E575370)

inline static constexpr unsigned int HGCKEBEHCMJ_TypeDefinitionIndex = 26396;

	class HGCKEBEHCMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HNOHHOEPFHC LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HGCKEBEHCMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGCKEBEHCMJ*>**)UnitySDK::FromName("", "HGCKEBEHCMJ")->GetStaticField(0x36990);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGCKEBEHCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCKEBEHCMJ*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGCKEBEHCMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGCKEBEHCMJ*>*(*)())((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGCKEBEHCMJ* Clone()
		{
			return ((::HGCKEBEHCMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_CLONE_OFFSET))(this);
		}

		::HNOHHOEPFHC AENLBGLIBJL()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGCKEBEHCMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCKEBEHCMJ*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGCKEBEHCMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCKEBEHCMJ*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGCKEBEHCMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

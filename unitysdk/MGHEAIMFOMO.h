#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGHEAIMFOMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGHEAIMFOMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA259B0)
#define MGHEAIMFOMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA25A50)
#define MGHEAIMFOMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA256A0)
#define MGHEAIMFOMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA25670)
#define MGHEAIMFOMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA25660)
#define MGHEAIMFOMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA257B0)
#define MGHEAIMFOMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA256E0)
#define MGHEAIMFOMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA25910)
#define MGHEAIMFOMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA25620)
#define MGHEAIMFOMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA25A00)
#define MGHEAIMFOMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA259D0)
#define MGHEAIMFOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA25650)
#define MGHEAIMFOMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA25940)
#define MGHEAIMFOMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA259A0)

inline static constexpr unsigned int MGHEAIMFOMO_TypeDefinitionIndex = 31237;

	class MGHEAIMFOMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MGHEAIMFOMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGHEAIMFOMO*>**)UnitySDK::FromName("", "MGHEAIMFOMO")->GetStaticField(0x4E280);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGHEAIMFOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHEAIMFOMO*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGHEAIMFOMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGHEAIMFOMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGHEAIMFOMO*>*(*)())((::PBYTE)hIl2Cpp + MGHEAIMFOMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGHEAIMFOMO* Clone()
		{
			return ((::MGHEAIMFOMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGHEAIMFOMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGHEAIMFOMO*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGHEAIMFOMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGHEAIMFOMO*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGHEAIMFOMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

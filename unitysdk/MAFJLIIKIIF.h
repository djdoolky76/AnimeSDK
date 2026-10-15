#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLMNGOJKEIN;
class MAFJLIIKIIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAFJLIIKIIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9D8AF0)
#define MAFJLIIKIIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8D90)
#define MAFJLIIKIIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9D8430)
#define MAFJLIIKIIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9D83A0)
#define MAFJLIIKIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8390)
#define MAFJLIIKIIF_DIFOBCOPCBD_OFFSET UNITYSDK_OFFSET(0x1E9D8520)
#define MAFJLIIKIIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9D86D0)
#define MAFJLIIKIIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9D8530)
#define MAFJLIIKIIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9D89A0)
#define MAFJLIIKIIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9D8320)
#define MAFJLIIKIIF_KBFKBBAPMLE_OFFSET UNITYSDK_OFFSET(0x1E9D8510)
#define MAFJLIIKIIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9D8C00)
#define MAFJLIIKIIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9D8B50)
#define MAFJLIIKIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9D8380)
#define MAFJLIIKIIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9D8A00)
#define MAFJLIIKIIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9D8A60)

inline static constexpr unsigned int MAFJLIIKIIF_TypeDefinitionIndex = 28349;

	class MAFJLIIKIIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KLMNGOJKEIN* IOEKNPEFNEP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MAFJLIIKIIF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MAFJLIIKIIF*>**)UnitySDK::FromName("", "MAFJLIIKIIF")->GetStaticField(0x429C0);
		}

		// static const ::System::Object NONCFABFKHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAFJLIIKIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAFJLIIKIIF*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAFJLIIKIIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MAFJLIIKIIF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MAFJLIIKIIF*>*(*)())((::PBYTE)hIl2Cpp + MAFJLIIKIIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAFJLIIKIIF* Clone()
		{
			return ((::MAFJLIIKIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_CLONE_OFFSET))(this);
		}

		::KLMNGOJKEIN* KBFKBBAPMLE()
		{
			return ((::KLMNGOJKEIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_KBFKBBAPMLE_OFFSET))(this);
		}

		::System::Void DIFOBCOPCBD(::KLMNGOJKEIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLMNGOJKEIN*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_DIFOBCOPCBD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAFJLIIKIIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAFJLIIKIIF*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAFJLIIKIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAFJLIIKIIF*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAFJLIIKIIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

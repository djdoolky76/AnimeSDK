#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCDIFIIDPIA;
class KFGILGDFEKE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCDIFIIDPIA_ANEKEHDLLJD_OFFSET UNITYSDK_OFFSET(0x1E8D9550)
#define BCDIFIIDPIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D9980)
#define BCDIFIIDPIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D9C80)
#define BCDIFIIDPIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D9500)
#define BCDIFIIDPIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D9450)
#define BCDIFIIDPIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D9400)
#define BCDIFIIDPIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D96E0)
#define BCDIFIIDPIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D9560)
#define BCDIFIIDPIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D9800)
#define BCDIFIIDPIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D9390)
#define BCDIFIIDPIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D9AC0)
#define BCDIFIIDPIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D9A20)
#define BCDIFIIDPIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D93F0)
#define BCDIFIIDPIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D9870)
#define BCDIFIIDPIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D98D0)

inline static constexpr unsigned int BCDIFIIDPIA_TypeDefinitionIndex = 31006;

	class BCDIFIIDPIA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KFGILGDFEKE*>* JOMMOLDAAOJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BCDIFIIDPIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCDIFIIDPIA*>**)UnitySDK::FromName("", "BCDIFIIDPIA")->GetStaticField(0x50440);
		}

		static ::Google::Protobuf::FieldCodec_1<::KFGILGDFEKE*>** StaticGet_OIMKCEAGEIA()
		{
			return (::Google::Protobuf::FieldCodec_1<::KFGILGDFEKE*>**)UnitySDK::FromName("", "BCDIFIIDPIA")->GetStaticField(0x50448);
		}

		// static const ::System::Object JMKCFCODGHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCDIFIIDPIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCDIFIIDPIA*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCDIFIIDPIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCDIFIIDPIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCDIFIIDPIA*>*(*)())((::PBYTE)hIl2Cpp + BCDIFIIDPIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCDIFIIDPIA* Clone()
		{
			return ((::BCDIFIIDPIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KFGILGDFEKE*>* ANEKEHDLLJD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KFGILGDFEKE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_ANEKEHDLLJD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCDIFIIDPIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCDIFIIDPIA*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCDIFIIDPIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCDIFIIDPIA*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCDIFIIDPIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

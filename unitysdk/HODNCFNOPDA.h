#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGNHGIBCPG;
class HODNCFNOPDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HODNCFNOPDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2003BEE0)
#define HODNCFNOPDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x2003C270)
#define HODNCFNOPDA_CLONE_OFFSET UNITYSDK_OFFSET(0x2003BA40)
#define HODNCFNOPDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2003B9B0)
#define HODNCFNOPDA_CTOR_OFFSET UNITYSDK_OFFSET(0x2003B970)
#define HODNCFNOPDA_DFKJLKHBCLK_OFFSET UNITYSDK_OFFSET(0x2003BA90)
#define HODNCFNOPDA_DGAGMHOCIHP_OFFSET UNITYSDK_OFFSET(0x2003BA80)
#define HODNCFNOPDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2003BBF0)
#define HODNCFNOPDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x2003BAA0)
#define HODNCFNOPDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2003BD10)
#define HODNCFNOPDA_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x2003BA70)
#define HODNCFNOPDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2003B930)
#define HODNCFNOPDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2003C0B0)
#define HODNCFNOPDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2003C010)
#define HODNCFNOPDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2003B960)
#define HODNCFNOPDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2003BD80)
#define HODNCFNOPDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x2003BDE0)

inline static constexpr unsigned int HODNCFNOPDA_TypeDefinitionIndex = 28430;

	class HODNCFNOPDA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DAGNHGIBCPG*>* EFHEPAJIOHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GHHBJPNDOIK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HODNCFNOPDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HODNCFNOPDA*>**)UnitySDK::FromName("", "HODNCFNOPDA")->GetStaticField(0x3DA60);
		}

		static ::Google::Protobuf::FieldCodec_1<::DAGNHGIBCPG*>** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec_1<::DAGNHGIBCPG*>**)UnitySDK::FromName("", "HODNCFNOPDA")->GetStaticField(0x3DA68);
		}

		// static const ::System::Object LDPIDBDJDLO; // 0x0
		// static const ::System::Object EMKCGPBAPHK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HODNCFNOPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HODNCFNOPDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HODNCFNOPDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HODNCFNOPDA*>*(*)())((::PBYTE)hIl2Cpp + HODNCFNOPDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HODNCFNOPDA* Clone()
		{
			return ((::HODNCFNOPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DAGNHGIBCPG*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DAGNHGIBCPG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_INJLCGGALGC_OFFSET))(this);
		}

		::System::UInt32 DGAGMHOCIHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_DGAGMHOCIHP_OFFSET))(this);
		}

		::System::Void DFKJLKHBCLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HODNCFNOPDA_DFKJLKHBCLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HODNCFNOPDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HODNCFNOPDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HODNCFNOPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HODNCFNOPDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

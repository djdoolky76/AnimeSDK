#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LILHIEALFOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LILHIEALFOC_BIPOBFFNGFE_OFFSET UNITYSDK_OFFSET(0x1E944980)
#define LILHIEALFOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E944D50)
#define LILHIEALFOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E944F10)
#define LILHIEALFOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E944930)
#define LILHIEALFOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E944900)
#define LILHIEALFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9448F0)
#define LILHIEALFOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E944A80)
#define LILHIEALFOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9449A0)
#define LILHIEALFOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E944C00)
#define LILHIEALFOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9448B0)
#define LILHIEALFOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E944DB0)
#define LILHIEALFOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E944D80)
#define LILHIEALFOC_OKGJLPJJCMP_OFFSET UNITYSDK_OFFSET(0x1E944990)
#define LILHIEALFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9448E0)
#define LILHIEALFOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E944C30)
#define LILHIEALFOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E944C90)

inline static constexpr unsigned int LILHIEALFOC_TypeDefinitionIndex = 26182;

	class LILHIEALFOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KACLGPIGFCL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LILHIEALFOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LILHIEALFOC*>**)UnitySDK::FromName("", "LILHIEALFOC")->GetStaticField(0x382B0);
		}

		// static const ::System::Object BNILBFFFMBO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LILHIEALFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LILHIEALFOC*))((::PBYTE)hIl2Cpp + LILHIEALFOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LILHIEALFOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LILHIEALFOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LILHIEALFOC*>*(*)())((::PBYTE)hIl2Cpp + LILHIEALFOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LILHIEALFOC* Clone()
		{
			return ((::LILHIEALFOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_CLONE_OFFSET))(this);
		}

		::System::Boolean BIPOBFFNGFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_BIPOBFFNGFE_OFFSET))(this);
		}

		::System::Void OKGJLPJJCMP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LILHIEALFOC_OKGJLPJJCMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LILHIEALFOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LILHIEALFOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LILHIEALFOC*))((::PBYTE)hIl2Cpp + LILHIEALFOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LILHIEALFOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LILHIEALFOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LILHIEALFOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LILHIEALFOC*))((::PBYTE)hIl2Cpp + LILHIEALFOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LILHIEALFOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

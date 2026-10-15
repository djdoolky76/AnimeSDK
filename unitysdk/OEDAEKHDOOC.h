#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCCAABPFBLF;
class OEDAEKHDOOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEDAEKHDOOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF77C0)
#define OEDAEKHDOOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF7AD0)
#define OEDAEKHDOOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF7050)
#define OEDAEKHDOOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF6F70)
#define OEDAEKHDOOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6F60)
#define OEDAEKHDOOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF72D0)
#define OEDAEKHDOOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF7160)
#define OEDAEKHDOOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF75A0)
#define OEDAEKHDOOC_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1DDF7140)
#define OEDAEKHDOOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF6F20)
#define OEDAEKHDOOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF7900)
#define OEDAEKHDOOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF7820)
#define OEDAEKHDOOC_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1DDF7150)
#define OEDAEKHDOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF6F50)
#define OEDAEKHDOOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF76D0)
#define OEDAEKHDOOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF7730)

inline static constexpr unsigned int OEDAEKHDOOC_TypeDefinitionIndex = 26103;

	class OEDAEKHDOOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::OCCAABPFBLF* MNJNMPKLFAI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEDAEKHDOOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEDAEKHDOOC*>**)UnitySDK::FromName("", "OEDAEKHDOOC")->GetStaticField(0x12F30);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEDAEKHDOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDAEKHDOOC*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDAEKHDOOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEDAEKHDOOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEDAEKHDOOC*>*(*)())((::PBYTE)hIl2Cpp + OEDAEKHDOOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEDAEKHDOOC* Clone()
		{
			return ((::OEDAEKHDOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_CLONE_OFFSET))(this);
		}

		::OCCAABPFBLF* JIFPIGBJFEH()
		{
			return ((::OCCAABPFBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::OCCAABPFBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCCAABPFBLF*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEDAEKHDOOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEDAEKHDOOC*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEDAEKHDOOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEDAEKHDOOC*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEDAEKHDOOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

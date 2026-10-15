#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGLCGNCLHLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGLCGNCLHLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4E070)
#define BGLCGNCLHLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA4E290)
#define BGLCGNCLHLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA4DC60)
#define BGLCGNCLHLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA4DC30)
#define BGLCGNCLHLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DC20)
#define BGLCGNCLHLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA4DDF0)
#define BGLCGNCLHLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA4DCF0)
#define BGLCGNCLHLJ_FCHEMONJFGI_OFFSET UNITYSDK_OFFSET(0x1EA4DCD0)
#define BGLCGNCLHLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA4DF60)
#define BGLCGNCLHLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA4DBB0)
#define BGLCGNCLHLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4E130)
#define BGLCGNCLHLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4E100)
#define BGLCGNCLHLJ_NBLLLFIFBLL_OFFSET UNITYSDK_OFFSET(0x1EA4DCE0)
#define BGLCGNCLHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA4DC10)
#define BGLCGNCLHLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4DF90)
#define BGLCGNCLHLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4DFF0)

inline static constexpr unsigned int BGLCGNCLHLJ_TypeDefinitionIndex = 25537;

	class BGLCGNCLHLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGGMKOBGPDA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BGLCGNCLHLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGLCGNCLHLJ*>**)UnitySDK::FromName("", "BGLCGNCLHLJ")->GetStaticField(0x1E3B0);
		}

		// static const ::System::Object NLAHKDAONBF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGLCGNCLHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLCGNCLHLJ*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGLCGNCLHLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGLCGNCLHLJ*>*(*)())((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGLCGNCLHLJ* Clone()
		{
			return ((::BGLCGNCLHLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FCHEMONJFGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_FCHEMONJFGI_OFFSET))(this);
		}

		::System::Void NBLLLFIFBLL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_NBLLLFIFBLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGLCGNCLHLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGLCGNCLHLJ*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGLCGNCLHLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLCGNCLHLJ*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGLCGNCLHLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

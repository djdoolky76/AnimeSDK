#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJIHIMKICLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJIHIMKICLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47B310)
#define GJIHIMKICLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47B530)
#define GJIHIMKICLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47AF00)
#define GJIHIMKICLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47AED0)
#define GJIHIMKICLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47AEC0)
#define GJIHIMKICLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47B090)
#define GJIHIMKICLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47AF90)
#define GJIHIMKICLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47B200)
#define GJIHIMKICLG_ILENOEKGDAM_OFFSET UNITYSDK_OFFSET(0x1E47AF80)
#define GJIHIMKICLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47AE50)
#define GJIHIMKICLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47B3D0)
#define GJIHIMKICLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47B3A0)
#define GJIHIMKICLG_OAAPHHFLPIH_OFFSET UNITYSDK_OFFSET(0x1E47AF70)
#define GJIHIMKICLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47AEB0)
#define GJIHIMKICLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47B230)
#define GJIHIMKICLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47B290)

inline static constexpr unsigned int GJIHIMKICLG_TypeDefinitionIndex = 33109;

	class GJIHIMKICLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPPKHBLOFLK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GJIHIMKICLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GJIHIMKICLG*>**)UnitySDK::FromName("", "GJIHIMKICLG")->GetStaticField(0x19FD0);
		}

		// static const ::System::Object GPOBIPDLLFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJIHIMKICLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJIHIMKICLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GJIHIMKICLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GJIHIMKICLG*>*(*)())((::PBYTE)hIl2Cpp + GJIHIMKICLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJIHIMKICLG* Clone()
		{
			return ((::GJIHIMKICLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAAPHHFLPIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_OAAPHHFLPIH_OFFSET))(this);
		}

		::System::Void ILENOEKGDAM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJIHIMKICLG_ILENOEKGDAM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJIHIMKICLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJIHIMKICLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJIHIMKICLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJIHIMKICLG*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJIHIMKICLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

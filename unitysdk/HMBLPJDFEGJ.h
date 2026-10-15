#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMBLPJDFEGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMBLPJDFEGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59DCF0)
#define HMBLPJDFEGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59E020)
#define HMBLPJDFEGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59D930)
#define HMBLPJDFEGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59D8F0)
#define HMBLPJDFEGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D8E0)
#define HMBLPJDFEGJ_EOPPMOPFFOD_OFFSET UNITYSDK_OFFSET(0x1E59D980)
#define HMBLPJDFEGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59DAA0)
#define HMBLPJDFEGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59D9C0)
#define HMBLPJDFEGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59DB70)
#define HMBLPJDFEGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59D8A0)
#define HMBLPJDFEGJ_KDDNJEAILAA_OFFSET UNITYSDK_OFFSET(0x1E59D9A0)
#define HMBLPJDFEGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59DEA0)
#define HMBLPJDFEGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59DE60)
#define HMBLPJDFEGJ_MHHBJCFFKHK_OFFSET UNITYSDK_OFFSET(0x1E59D990)
#define HMBLPJDFEGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59D8D0)
#define HMBLPJDFEGJ_PLMLBJPKFFF_OFFSET UNITYSDK_OFFSET(0x1E59D9B0)
#define HMBLPJDFEGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59DBB0)
#define HMBLPJDFEGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59DC10)

inline static constexpr unsigned int HMBLPJDFEGJ_TypeDefinitionIndex = 25859;

	class HMBLPJDFEGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OKMKGIJCCJC; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 LLJMHDAHAAB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HMBLPJDFEGJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMBLPJDFEGJ*>**)UnitySDK::FromName("", "HMBLPJDFEGJ")->GetStaticField(0x39700);
		}

		// static const ::System::Object NHKEBLOFFEN; // 0x0
		// static const ::System::Object KKGPFBOBILK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMBLPJDFEGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBLPJDFEGJ*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMBLPJDFEGJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMBLPJDFEGJ*>*(*)())((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMBLPJDFEGJ* Clone()
		{
			return ((::HMBLPJDFEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOPPMOPFFOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_EOPPMOPFFOD_OFFSET))(this);
		}

		::System::Void MHHBJCFFKHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_MHHBJCFFKHK_OFFSET))(this, a1);
		}

		::System::Int64 KDDNJEAILAA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_KDDNJEAILAA_OFFSET))(this);
		}

		::System::Void PLMLBJPKFFF(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_PLMLBJPKFFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMBLPJDFEGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMBLPJDFEGJ*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMBLPJDFEGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBLPJDFEGJ*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMBLPJDFEGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

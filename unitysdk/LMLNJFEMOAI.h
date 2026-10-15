#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMLNJFEMOAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMLNJFEMOAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A9E40)
#define LMLNJFEMOAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AA110)
#define LMLNJFEMOAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A9A40)
#define LMLNJFEMOAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A9A10)
#define LMLNJFEMOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A9A00)
#define LMLNJFEMOAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A9C00)
#define LMLNJFEMOAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A9AF0)
#define LMLNJFEMOAI_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E9A9AB0)
#define LMLNJFEMOAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A9CD0)
#define LMLNJFEMOAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A9990)
#define LMLNJFEMOAI_KACHGJNOBCO_OFFSET UNITYSDK_OFFSET(0x1E9A9AE0)
#define LMLNJFEMOAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A9F90)
#define LMLNJFEMOAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A9F50)
#define LMLNJFEMOAI_OFGOLAEELNP_OFFSET UNITYSDK_OFFSET(0x1E9A9AD0)
#define LMLNJFEMOAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A99F0)
#define LMLNJFEMOAI_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E9A9AC0)
#define LMLNJFEMOAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A9D00)
#define LMLNJFEMOAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A9D60)

inline static constexpr unsigned int LMLNJFEMOAI_TypeDefinitionIndex = 25758;

	class LMLNJFEMOAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GGOLOPJCHOK; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LMLNJFEMOAI")->GetStaticField(0x37200);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object OHMMOKDEBBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMLNJFEMOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLNJFEMOAI*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMLNJFEMOAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LMLNJFEMOAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMLNJFEMOAI* Clone()
		{
			return ((::LMLNJFEMOAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 OFGOLAEELNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_OFGOLAEELNP_OFFSET))(this);
		}

		::System::Void KACHGJNOBCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_KACHGJNOBCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMLNJFEMOAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMLNJFEMOAI*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMLNJFEMOAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMLNJFEMOAI*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMLNJFEMOAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

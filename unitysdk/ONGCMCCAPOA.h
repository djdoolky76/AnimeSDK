#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMEFGANLKI;
class ONGCMCCAPOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONGCMCCAPOA_BDIFFCNIFMI_OFFSET UNITYSDK_OFFSET(0x1DEC4770)
#define ONGCMCCAPOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC4C20)
#define ONGCMCCAPOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4F30)
#define ONGCMCCAPOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC46B0)
#define ONGCMCCAPOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC4630)
#define ONGCMCCAPOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4620)
#define ONGCMCCAPOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC4900)
#define ONGCMCCAPOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC4780)
#define ONGCMCCAPOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC4A80)
#define ONGCMCCAPOA_HJGFIHPAOIG_OFFSET UNITYSDK_OFFSET(0x1DEC4750)
#define ONGCMCCAPOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC45E0)
#define ONGCMCCAPOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC4DA0)
#define ONGCMCCAPOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC4CF0)
#define ONGCMCCAPOA_NDFBHGEDGCM_OFFSET UNITYSDK_OFFSET(0x1DEC4740)
#define ONGCMCCAPOA_OEJMOAOPLNH_OFFSET UNITYSDK_OFFSET(0x1DEC4760)
#define ONGCMCCAPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC4610)
#define ONGCMCCAPOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC4AE0)
#define ONGCMCCAPOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC4B40)

inline static constexpr unsigned int ONGCMCCAPOA_TypeDefinitionIndex = 34517;

	class ONGCMCCAPOA : public ::System::Object
	{
	public:
		::KDMEFGANLKI* BPEOJOAPDBA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCKFKAHLFMC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONGCMCCAPOA")->GetStaticField(0x2C210);
		}

		// static const ::System::Object FIFMLCIJFEI; // 0x0
		// static const ::System::Object DNNLCNCOJAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONGCMCCAPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONGCMCCAPOA*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONGCMCCAPOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONGCMCCAPOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONGCMCCAPOA* Clone()
		{
			return ((::ONGCMCCAPOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_CLONE_OFFSET))(this);
		}

		::KDMEFGANLKI* NDFBHGEDGCM()
		{
			return ((::KDMEFGANLKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_NDFBHGEDGCM_OFFSET))(this);
		}

		::System::Void HJGFIHPAOIG(::KDMEFGANLKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMEFGANLKI*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_HJGFIHPAOIG_OFFSET))(this, a1);
		}

		::System::UInt32 OEJMOAOPLNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_OEJMOAOPLNH_OFFSET))(this);
		}

		::System::Void BDIFFCNIFMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_BDIFFCNIFMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONGCMCCAPOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONGCMCCAPOA*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONGCMCCAPOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONGCMCCAPOA*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONGCMCCAPOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

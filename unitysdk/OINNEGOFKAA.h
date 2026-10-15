#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OINNEGOFKAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OINNEGOFKAA_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DE7A700)
#define OINNEGOFKAA_BKPMKACPAKB_OFFSET UNITYSDK_OFFSET(0x1DE7A790)
#define OINNEGOFKAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE7AB10)
#define OINNEGOFKAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7AEB0)
#define OINNEGOFKAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE7A680)
#define OINNEGOFKAA_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DE7A740)
#define OINNEGOFKAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE7A640)
#define OINNEGOFKAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7A630)
#define OINNEGOFKAA_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DE7A710)
#define OINNEGOFKAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE7A830)
#define OINNEGOFKAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE7A7A0)
#define OINNEGOFKAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE7A880)
#define OINNEGOFKAA_GLCNDPKHHAK_OFFSET UNITYSDK_OFFSET(0x1DE7A770)
#define OINNEGOFKAA_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1DE7A730)
#define OINNEGOFKAA_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x1DE7A780)
#define OINNEGOFKAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7A5C0)
#define OINNEGOFKAA_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1DE7A720)
#define OINNEGOFKAA_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DE7A750)
#define OINNEGOFKAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE7AE00)
#define OINNEGOFKAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE7ADA0)
#define OINNEGOFKAA_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x1DE7A760)
#define OINNEGOFKAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7A620)
#define OINNEGOFKAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE7A8C0)
#define OINNEGOFKAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE7A920)

inline static constexpr unsigned int OINNEGOFKAA_TypeDefinitionIndex = 25175;

	class OINNEGOFKAA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CLBJDBPOOEK; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		::System::UInt32 NPFBAFODCBI; // 0x20
		::System::UInt32 IMJCALAFOMD; // 0x24
		::System::UInt32 NAJINDCEHMM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OINNEGOFKAA")->GetStaticField(0x1E340);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object DJAHPPOHHCF; // 0x0
		// static const ::System::Object CJIHHBEOLPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OINNEGOFKAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINNEGOFKAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OINNEGOFKAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OINNEGOFKAA* Clone()
		{
			return ((::OINNEGOFKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OINNEGOFKAA_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OINNEGOFKAA_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OINNEGOFKAA_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::Void GLCNDPKHHAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OINNEGOFKAA_GLCNDPKHHAK_OFFSET))(this, a1);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_JHHECJIODKO_OFFSET))(this);
		}

		::System::Void BKPMKACPAKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OINNEGOFKAA_BKPMKACPAKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OINNEGOFKAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OINNEGOFKAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OINNEGOFKAA*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OINNEGOFKAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

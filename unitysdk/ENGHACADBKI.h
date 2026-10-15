#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFPHNJOBNOE.h"
#include "unitysdk/System/Object.h"
class ENGHACADBKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENGHACADBKI_BNLBHLJKCDH_OFFSET UNITYSDK_OFFSET(0x1E2ED9D0)
#define ENGHACADBKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2EDD70)
#define ENGHACADBKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EE140)
#define ENGHACADBKI_CICBCJLGDJI_OFFSET UNITYSDK_OFFSET(0x1E2ED9E0)
#define ENGHACADBKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2ED8D0)
#define ENGHACADBKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2ED890)
#define ENGHACADBKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2ED880)
#define ENGHACADBKI_EPMMPEDNCFD_OFFSET UNITYSDK_OFFSET(0x1E2ED950)
#define ENGHACADBKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2EDA80)
#define ENGHACADBKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2ED9F0)
#define ENGHACADBKI_FKDIOGOKCBA_OFFSET UNITYSDK_OFFSET(0x1E2ED9A0)
#define ENGHACADBKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2EDAD0)
#define ENGHACADBKI_HEGDBCHJJJK_OFFSET UNITYSDK_OFFSET(0x1E2ED9C0)
#define ENGHACADBKI_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E2ED980)
#define ENGHACADBKI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E2ED970)
#define ENGHACADBKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2ED810)
#define ENGHACADBKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2EE090)
#define ENGHACADBKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2EE030)
#define ENGHACADBKI_OIMOKJAHKDG_OFFSET UNITYSDK_OFFSET(0x1E2ED960)
#define ENGHACADBKI_PAEMLAEPCDG_OFFSET UNITYSDK_OFFSET(0x1E2ED990)
#define ENGHACADBKI_PAPIJAAPKOA_OFFSET UNITYSDK_OFFSET(0x1E2ED9B0)
#define ENGHACADBKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2ED870)
#define ENGHACADBKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2EDB10)
#define ENGHACADBKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2EDB70)

	class ENGHACADBKI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LPFAGCAJKPI; // 0x18
		::System::UInt32 BPHJMBBHMED; // 0x1C
		::System::UInt32 MMEHLMLJBLE; // 0x20
		::System::UInt32 BNOLILCPBBD; // 0x24
		::EFPHNJOBNOE GMPNCOBOFDM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ENGHACADBKI")->GetStaticField(0x43970);
		}

		// static const ::System::Object FGFCDFHJCOG; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object LHIFJGGAJBB; // 0x0
		// static const ::System::Object PBLILKPBEJN; // 0x0
		// static const ::System::Object HMDFFGEDFNM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENGHACADBKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGHACADBKI*))((::PBYTE)hIl2Cpp + ENGHACADBKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENGHACADBKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ENGHACADBKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENGHACADBKI* Clone()
		{
			return ((::ENGHACADBKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPMMPEDNCFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_EPMMPEDNCFD_OFFSET))(this);
		}

		::System::Void OIMOKJAHKDG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENGHACADBKI_OIMOKJAHKDG_OFFSET))(this, a1);
		}

		::EFPHNJOBNOE JBIOGKPHKKC()
		{
			return ((::EFPHNJOBNOE(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::EFPHNJOBNOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFPHNJOBNOE))((::PBYTE)hIl2Cpp + ENGHACADBKI_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 PAEMLAEPCDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_PAEMLAEPCDG_OFFSET))(this);
		}

		::System::Void FKDIOGOKCBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENGHACADBKI_FKDIOGOKCBA_OFFSET))(this, a1);
		}

		::System::UInt32 PAPIJAAPKOA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_PAPIJAAPKOA_OFFSET))(this);
		}

		::System::Void HEGDBCHJJJK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENGHACADBKI_HEGDBCHJJJK_OFFSET))(this, a1);
		}

		::System::UInt32 BNLBHLJKCDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_BNLBHLJKCDH_OFFSET))(this);
		}

		::System::Void CICBCJLGDJI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENGHACADBKI_CICBCJLGDJI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENGHACADBKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENGHACADBKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENGHACADBKI*))((::PBYTE)hIl2Cpp + ENGHACADBKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENGHACADBKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGHACADBKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENGHACADBKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENGHACADBKI*))((::PBYTE)hIl2Cpp + ENGHACADBKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENGHACADBKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

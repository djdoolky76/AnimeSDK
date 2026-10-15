#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABIJNBDBBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DABIJNBDBBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11CFC0)
#define DABIJNBDBBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11D2F0)
#define DABIJNBDBBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11CAE0)
#define DABIJNBDBBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11CA90)
#define DABIJNBDBBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11CA80)
#define DABIJNBDBBA_DDEFMINHJHM_OFFSET UNITYSDK_OFFSET(0x1E11CBE0)
#define DABIJNBDBBA_DFDNIPKJDGO_OFFSET UNITYSDK_OFFSET(0x1E11CB80)
#define DABIJNBDBBA_EHJAAPOMLDC_OFFSET UNITYSDK_OFFSET(0x1E11CB90)
#define DABIJNBDBBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11CCA0)
#define DABIJNBDBBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11CC00)
#define DABIJNBDBBA_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E11CBA0)
#define DABIJNBDBBA_FMOGKJJHHCK_OFFSET UNITYSDK_OFFSET(0x1E11CBD0)
#define DABIJNBDBBA_FOIJPCJHAMN_OFFSET UNITYSDK_OFFSET(0x1E11CBF0)
#define DABIJNBDBBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11CD00)
#define DABIJNBDBBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11CA10)
#define DABIJNBDBBA_KPAAMOLJEOJ_OFFSET UNITYSDK_OFFSET(0x1E11CBC0)
#define DABIJNBDBBA_LGDLJLLDBDM_OFFSET UNITYSDK_OFFSET(0x1E11CB60)
#define DABIJNBDBBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11D230)
#define DABIJNBDBBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11D1D0)
#define DABIJNBDBBA_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E11CBB0)
#define DABIJNBDBBA_PBGNLBHALEK_OFFSET UNITYSDK_OFFSET(0x1E11CB70)
#define DABIJNBDBBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11CA70)
#define DABIJNBDBBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11CD40)
#define DABIJNBDBBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11CDA0)

inline static constexpr unsigned int DABIJNBDBBA_TypeDefinitionIndex = 27974;

	class DABIJNBDBBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KNAFJDKCPJO; // 0x18
		::System::Boolean MOOADFFCELF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 FKHHNLFLCKG; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x24
		::System::UInt32 AAOJMAMOPAP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::DABIJNBDBBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DABIJNBDBBA*>**)UnitySDK::FromName("", "DABIJNBDBBA")->GetStaticField(0x20C70);
		}

		// static const ::System::Object NGEMFNNDEHP; // 0x0
		// static const ::System::Object NCLAGAHHBFL; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object FNBELFNLKFK; // 0x0
		// static const ::System::Object HJMCJAKMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DABIJNBDBBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABIJNBDBBA*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABIJNBDBBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DABIJNBDBBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DABIJNBDBBA*>*(*)())((::PBYTE)hIl2Cpp + DABIJNBDBBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DABIJNBDBBA* Clone()
		{
			return ((::DABIJNBDBBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_CLONE_OFFSET))(this);
		}

		::System::UInt32 LGDLJLLDBDM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_LGDLJLLDBDM_OFFSET))(this);
		}

		::System::Void PBGNLBHALEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DABIJNBDBBA_PBGNLBHALEK_OFFSET))(this, a1);
		}

		::System::Boolean DFDNIPKJDGO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_DFDNIPKJDGO_OFFSET))(this);
		}

		::System::Void EHJAAPOMLDC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DABIJNBDBBA_EHJAAPOMLDC_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DABIJNBDBBA_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 KPAAMOLJEOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_KPAAMOLJEOJ_OFFSET))(this);
		}

		::System::Void FMOGKJJHHCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DABIJNBDBBA_FMOGKJJHHCK_OFFSET))(this, a1);
		}

		::System::UInt32 DDEFMINHJHM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_DDEFMINHJHM_OFFSET))(this);
		}

		::System::Void FOIJPCJHAMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DABIJNBDBBA_FOIJPCJHAMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DABIJNBDBBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DABIJNBDBBA*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DABIJNBDBBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DABIJNBDBBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DABIJNBDBBA*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DABIJNBDBBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

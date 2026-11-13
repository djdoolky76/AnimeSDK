#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BADOONPCDLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BADOONPCDLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20571470)
#define BADOONPCDLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x20571780)
#define BADOONPCDLO_CLONE_OFFSET UNITYSDK_OFFSET(0x20571020)
#define BADOONPCDLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20570FE0)
#define BADOONPCDLO_CTOR_OFFSET UNITYSDK_OFFSET(0x20570FD0)
#define BADOONPCDLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20571190)
#define BADOONPCDLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20571100)
#define BADOONPCDLO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x205710E0)
#define BADOONPCDLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20571270)
#define BADOONPCDLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20570F60)
#define BADOONPCDLO_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x205710D0)
#define BADOONPCDLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205715E0)
#define BADOONPCDLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20571590)
#define BADOONPCDLO_NDEPKGLHIOD_OFFSET UNITYSDK_OFFSET(0x205710B0)
#define BADOONPCDLO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x205710F0)
#define BADOONPCDLO_OIAHHJKDNLI_OFFSET UNITYSDK_OFFSET(0x205710A0)
#define BADOONPCDLO_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x205710C0)
#define BADOONPCDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20570FC0)
#define BADOONPCDLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205712A0)
#define BADOONPCDLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20571300)

inline static constexpr unsigned int BADOONPCDLO_TypeDefinitionIndex = 32384;

	class BADOONPCDLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HHCEMNIBHIE; // 0x18
		::System::Boolean PFPNMIEPLEN; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BADOONPCDLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BADOONPCDLO*>**)UnitySDK::FromName("", "BADOONPCDLO")->GetStaticField(0x18EC0);
		}

		// static const ::System::Object LDCIMLJCFKP; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BADOONPCDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BADOONPCDLO*))((::PBYTE)hIl2Cpp + BADOONPCDLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BADOONPCDLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BADOONPCDLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BADOONPCDLO*>*(*)())((::PBYTE)hIl2Cpp + BADOONPCDLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BADOONPCDLO* Clone()
		{
			return ((::BADOONPCDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_CLONE_OFFSET))(this);
		}

		::System::Boolean OIAHHJKDNLI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_OIAHHJKDNLI_OFFSET))(this);
		}

		::System::Void NDEPKGLHIOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BADOONPCDLO_NDEPKGLHIOD_OFFSET))(this, a1);
		}

		::System::UInt32 OLEJNDFFHPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BADOONPCDLO_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BADOONPCDLO_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BADOONPCDLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BADOONPCDLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BADOONPCDLO*))((::PBYTE)hIl2Cpp + BADOONPCDLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BADOONPCDLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BADOONPCDLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BADOONPCDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BADOONPCDLO*))((::PBYTE)hIl2Cpp + BADOONPCDLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BADOONPCDLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

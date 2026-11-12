#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLAENDOFBCK_IPPGJOGADAC.h"
#include "unitysdk/System/Object.h"
class LDJOCEMPFBJ;
class MLAENDOFBCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLAENDOFBCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDB1E60)
#define MLAENDOFBCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB23D0)
#define MLAENDOFBCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDB16D0)
#define MLAENDOFBCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDB13F0)
#define MLAENDOFBCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB13E0)
#define MLAENDOFBCK_DCCKNHLIKLE_OFFSET UNITYSDK_OFFSET(0x1FDB1650)
#define MLAENDOFBCK_DLIPEEKNHHK_OFFSET UNITYSDK_OFFSET(0x1FDB16B0)
#define MLAENDOFBCK_DOFJGIMGDCK_OFFSET UNITYSDK_OFFSET(0x1FDB1730)
#define MLAENDOFBCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDB17A0)
#define MLAENDOFBCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDB1740)
#define MLAENDOFBCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDB1AE0)
#define MLAENDOFBCK_IACIPOFGFMF_OFFSET UNITYSDK_OFFSET(0x1FDB1620)
#define MLAENDOFBCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDB1370)
#define MLAENDOFBCK_KBLLJPIHIPI_OFFSET UNITYSDK_OFFSET(0x1FDB1590)
#define MLAENDOFBCK_LODKJOJJLEH_OFFSET UNITYSDK_OFFSET(0x1FDB1720)
#define MLAENDOFBCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDB2170)
#define MLAENDOFBCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDB1F30)
#define MLAENDOFBCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDB13D0)
#define MLAENDOFBCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDB1C10)
#define MLAENDOFBCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDB1C70)

inline static constexpr unsigned int MLAENDOFBCK_TypeDefinitionIndex = 30622;

	class MLAENDOFBCK : public ::System::Object
	{
	public:
		::System::Object* EBHOHHBEMDA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::MLAENDOFBCK_IPPGJOGADAC MKFJGPAMOCF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MLAENDOFBCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLAENDOFBCK*>**)UnitySDK::FromName("", "MLAENDOFBCK")->GetStaticField(0x5C5C0);
		}

		// static const ::System::Object HMHICPKKGBG; // 0x0
		// static const ::System::Object JJFEFFDEKJN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLAENDOFBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAENDOFBCK*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLAENDOFBCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLAENDOFBCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLAENDOFBCK*>*(*)())((::PBYTE)hIl2Cpp + MLAENDOFBCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLAENDOFBCK* Clone()
		{
			return ((::MLAENDOFBCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_CLONE_OFFSET))(this);
		}

		::System::Boolean KBLLJPIHIPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_KBLLJPIHIPI_OFFSET))(this);
		}

		::System::Void IACIPOFGFMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLAENDOFBCK_IACIPOFGFMF_OFFSET))(this, a1);
		}

		::LDJOCEMPFBJ* DCCKNHLIKLE()
		{
			return ((::LDJOCEMPFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_DCCKNHLIKLE_OFFSET))(this);
		}

		::System::Void DLIPEEKNHHK(::LDJOCEMPFBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDJOCEMPFBJ*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_DLIPEEKNHHK_OFFSET))(this, a1);
		}

		::MLAENDOFBCK_IPPGJOGADAC LODKJOJJLEH()
		{
			return ((::MLAENDOFBCK_IPPGJOGADAC(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_LODKJOJJLEH_OFFSET))(this);
		}

		::System::Void DOFJGIMGDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_DOFJGIMGDCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLAENDOFBCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLAENDOFBCK*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLAENDOFBCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLAENDOFBCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLAENDOFBCK*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLAENDOFBCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

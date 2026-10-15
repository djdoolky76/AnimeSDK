#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACAKOLCGDLL;
class NOHPJFOGFLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACAKOLCGDLL_BKECMDJGDHF_OFFSET UNITYSDK_OFFSET(0x1DDD6FC0)
#define ACAKOLCGDLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD7420)
#define ACAKOLCGDLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD7820)
#define ACAKOLCGDLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD6F00)
#define ACAKOLCGDLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD6E30)
#define ACAKOLCGDLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6DE0)
#define ACAKOLCGDLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD7040)
#define ACAKOLCGDLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD6FE0)
#define ACAKOLCGDLL_FBNEFFFHOPA_OFFSET UNITYSDK_OFFSET(0x1DDD6F90)
#define ACAKOLCGDLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD70F0)
#define ACAKOLCGDLL_HEFMKDAHAHD_OFFSET UNITYSDK_OFFSET(0x1DDD6FA0)
#define ACAKOLCGDLL_IAOGILGLDEB_OFFSET UNITYSDK_OFFSET(0x1DDD6FD0)
#define ACAKOLCGDLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD6D70)
#define ACAKOLCGDLL_JMAEJNHBLAJ_OFFSET UNITYSDK_OFFSET(0x1DDD6F80)
#define ACAKOLCGDLL_LNKFJLDGCHO_OFFSET UNITYSDK_OFFSET(0x1DDD6F50)
#define ACAKOLCGDLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD7700)
#define ACAKOLCGDLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD7630)
#define ACAKOLCGDLL_NADOLAOFDAA_OFFSET UNITYSDK_OFFSET(0x1DDD6F70)
#define ACAKOLCGDLL_OAGKMDAMDLB_OFFSET UNITYSDK_OFFSET(0x1DDD6FB0)
#define ACAKOLCGDLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6DD0)
#define ACAKOLCGDLL_PGKPFKFIMNK_OFFSET UNITYSDK_OFFSET(0x1DDD6F60)
#define ACAKOLCGDLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD7170)
#define ACAKOLCGDLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD71D0)

	class ACAKOLCGDLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NOHPJFOGFLM*>* OPNAJLBCALC; // 0x18
		::System::Boolean GEMHHIDBJDJ; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 OFFJLBFJBPK; // 0x24
		::System::UInt32 FKDHHNFCNHI; // 0x28
		::System::UInt32 IFLDENAANAP; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACAKOLCGDLL")->GetStaticField(0x2B030);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MNMLMFAHKPC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ACAKOLCGDLL")->GetStaticField(0x2B038);
		}

		// static const ::System::Object NIBKLJNEKOB; // 0x0
		// static const ::System::Object NAJIJGFCNAC; // 0x0
		// static const ::System::Object IMMGAKOBBJI; // 0x0
		// static const ::System::Object NDGPBAFKIPI; // 0x0
		// static const ::System::Object FGJLDDLEKJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACAKOLCGDLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACAKOLCGDLL*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACAKOLCGDLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACAKOLCGDLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACAKOLCGDLL* Clone()
		{
			return ((::ACAKOLCGDLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 LNKFJLDGCHO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_LNKFJLDGCHO_OFFSET))(this);
		}

		::System::Void PGKPFKFIMNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_PGKPFKFIMNK_OFFSET))(this, a1);
		}

		::System::Boolean NADOLAOFDAA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_NADOLAOFDAA_OFFSET))(this);
		}

		::System::Void JMAEJNHBLAJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_JMAEJNHBLAJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NOHPJFOGFLM*>* FBNEFFFHOPA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NOHPJFOGFLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_FBNEFFFHOPA_OFFSET))(this);
		}

		::System::UInt32 HEFMKDAHAHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_HEFMKDAHAHD_OFFSET))(this);
		}

		::System::Void OAGKMDAMDLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_OAGKMDAMDLB_OFFSET))(this, a1);
		}

		::System::UInt32 BKECMDJGDHF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_BKECMDJGDHF_OFFSET))(this);
		}

		::System::Void IAOGILGLDEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_IAOGILGLDEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACAKOLCGDLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACAKOLCGDLL*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACAKOLCGDLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACAKOLCGDLL*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACAKOLCGDLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

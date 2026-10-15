#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCIPPFFMEDI;
class HANFHCOHGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCIPPFFMEDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E411550)
#define GCIPPFFMEDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E411850)
#define GCIPPFFMEDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E410EC0)
#define GCIPPFFMEDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E410E30)
#define GCIPPFFMEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E410E20)
#define GCIPPFFMEDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4110F0)
#define GCIPPFFMEDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E410F80)
#define GCIPPFFMEDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4113C0)
#define GCIPPFFMEDI_GNICFMOENOL_OFFSET UNITYSDK_OFFSET(0x1E410F70)
#define GCIPPFFMEDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E410DE0)
#define GCIPPFFMEDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E411680)
#define GCIPPFFMEDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4115B0)
#define GCIPPFFMEDI_OPPDKNHKNEN_OFFSET UNITYSDK_OFFSET(0x1E410F60)
#define GCIPPFFMEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E410E10)
#define GCIPPFFMEDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E411460)
#define GCIPPFFMEDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4114C0)

inline static constexpr unsigned int GCIPPFFMEDI_TypeDefinitionIndex = 31575;

	class GCIPPFFMEDI : public ::System::Object
	{
	public:
		::HANFHCOHGBP* LCJFJKEMBEM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GCIPPFFMEDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCIPPFFMEDI*>**)UnitySDK::FromName("", "GCIPPFFMEDI")->GetStaticField(0xE850);
		}

		// static const ::System::Object MNHKGFHHJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCIPPFFMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCIPPFFMEDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCIPPFFMEDI*>*(*)())((::PBYTE)hIl2Cpp + GCIPPFFMEDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCIPPFFMEDI* Clone()
		{
			return ((::GCIPPFFMEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CLONE_OFFSET))(this);
		}

		::HANFHCOHGBP* OPPDKNHKNEN()
		{
			return ((::HANFHCOHGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_OPPDKNHKNEN_OFFSET))(this);
		}

		::System::Void GNICFMOENOL(::HANFHCOHGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_GNICFMOENOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCIPPFFMEDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCIPPFFMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

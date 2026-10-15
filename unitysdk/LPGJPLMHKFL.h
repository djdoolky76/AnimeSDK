#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPGJPLMHKFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPGJPLMHKFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99ED90)
#define LPGJPLMHKFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99F090)
#define LPGJPLMHKFL_CIBEMIPAPLH_OFFSET UNITYSDK_OFFSET(0x1E99E920)
#define LPGJPLMHKFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99E890)
#define LPGJPLMHKFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99E7F0)
#define LPGJPLMHKFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99E7A0)
#define LPGJPLMHKFL_DBFHLAPFFPP_OFFSET UNITYSDK_OFFSET(0x1E99E910)
#define LPGJPLMHKFL_DHJBPGALNKK_OFFSET UNITYSDK_OFFSET(0x1E99E900)
#define LPGJPLMHKFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99E9D0)
#define LPGJPLMHKFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99E930)
#define LPGJPLMHKFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99EAD0)
#define LPGJPLMHKFL_GMCOKCKEDLC_OFFSET UNITYSDK_OFFSET(0x1E99E8F0)
#define LPGJPLMHKFL_INDOEFMDAOK_OFFSET UNITYSDK_OFFSET(0x1E99E8E0)
#define LPGJPLMHKFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99E730)
#define LPGJPLMHKFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99EF80)
#define LPGJPLMHKFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99EF20)
#define LPGJPLMHKFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99E790)
#define LPGJPLMHKFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99EBD0)
#define LPGJPLMHKFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99EC30)

inline static constexpr unsigned int LPGJPLMHKFL_TypeDefinitionIndex = 25754;

	class LPGJPLMHKFL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KEAJHNHFBCD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FMCFBIJJCBM; // 0x20
		::System::UInt32 OGLCKCMGDNJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::LPGJPLMHKFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPGJPLMHKFL*>**)UnitySDK::FromName("", "LPGJPLMHKFL")->GetStaticField(0x2AAB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NJBEOMLJHPE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LPGJPLMHKFL")->GetStaticField(0x2AAB8);
		}

		// static const ::System::Object BMLOHFPHLOL; // 0x0
		// static const ::System::Object ABICDJNBGGF; // 0x0
		// static const ::System::Object FAPGHBODPOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPGJPLMHKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPGJPLMHKFL*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPGJPLMHKFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPGJPLMHKFL*>*(*)())((::PBYTE)hIl2Cpp + LPGJPLMHKFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPGJPLMHKFL* Clone()
		{
			return ((::LPGJPLMHKFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 INDOEFMDAOK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_INDOEFMDAOK_OFFSET))(this);
		}

		::System::Void GMCOKCKEDLC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_GMCOKCKEDLC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHJBPGALNKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_DHJBPGALNKK_OFFSET))(this);
		}

		::System::UInt32 DBFHLAPFFPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_DBFHLAPFFPP_OFFSET))(this);
		}

		::System::Void CIBEMIPAPLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CIBEMIPAPLH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPGJPLMHKFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPGJPLMHKFL*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPGJPLMHKFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPGJPLMHKFL*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPGJPLMHKFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

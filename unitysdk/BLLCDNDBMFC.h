#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLLCDNDBMFC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLLCDNDBMFC_BKJJOFBNEOI_OFFSET UNITYSDK_OFFSET(0x1DF389B0)
#define BLLCDNDBMFC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF38D50)
#define BLLCDNDBMFC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF390D0)
#define BLLCDNDBMFC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF38930)
#define BLLCDNDBMFC_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1DF389C0)
#define BLLCDNDBMFC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF388F0)
#define BLLCDNDBMFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF388E0)
#define BLLCDNDBMFC_ENEJAIHHLDO_OFFSET UNITYSDK_OFFSET(0x1DF389A0)
#define BLLCDNDBMFC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF38AC0)
#define BLLCDNDBMFC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF389E0)
#define BLLCDNDBMFC_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1DF389D0)
#define BLLCDNDBMFC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF38B90)
#define BLLCDNDBMFC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF388A0)
#define BLLCDNDBMFC_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1DF38980)
#define BLLCDNDBMFC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF38F30)
#define BLLCDNDBMFC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF38EE0)
#define BLLCDNDBMFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF388D0)
#define BLLCDNDBMFC_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1DF38990)
#define BLLCDNDBMFC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF38BC0)
#define BLLCDNDBMFC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF38C20)

inline static constexpr unsigned int BLLCDNDBMFC_TypeDefinitionIndex = 35014;

	class BLLCDNDBMFC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMABHKCOLCM; // 0x18
		::System::UInt32 JCJAAAEGIIO; // 0x1C
		::System::UInt32 MPFELJLKAFH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BLLCDNDBMFC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLLCDNDBMFC*>**)UnitySDK::FromName("", "BLLCDNDBMFC")->GetStaticField(0x5BBD0);
		}

		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object NCKJJHMBKFH; // 0x0
		// static const ::System::Object IADILMFABOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLLCDNDBMFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLLCDNDBMFC*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLLCDNDBMFC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLLCDNDBMFC*>*(*)())((::PBYTE)hIl2Cpp + BLLCDNDBMFC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLLCDNDBMFC* Clone()
		{
			return ((::BLLCDNDBMFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::System::UInt32 ENEJAIHHLDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_ENEJAIHHLDO_OFFSET))(this);
		}

		::System::Void BKJJOFBNEOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_BKJJOFBNEOI_OFFSET))(this, a1);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLLCDNDBMFC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLLCDNDBMFC*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLLCDNDBMFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLLCDNDBMFC*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLLCDNDBMFC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

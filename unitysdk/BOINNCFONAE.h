#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DILHPBMCOFK.h"
#include "unitysdk/System/Object.h"
class BOINNCFONAE;
class HDLCAPDIKJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOINNCFONAE_CAFIBIJHNKD_OFFSET UNITYSDK_OFFSET(0x1F2FD040)
#define BOINNCFONAE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2FD470)
#define BOINNCFONAE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2FD970)
#define BOINNCFONAE_CIBEMIPAPLH_OFFSET UNITYSDK_OFFSET(0x1F2FD000)
#define BOINNCFONAE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2FCF70)
#define BOINNCFONAE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2FCEA0)
#define BOINNCFONAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2FCE50)
#define BOINNCFONAE_DBFHLAPFFPP_OFFSET UNITYSDK_OFFSET(0x1F2FCFF0)
#define BOINNCFONAE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2FD0B0)
#define BOINNCFONAE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2FD050)
#define BOINNCFONAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2FD150)
#define BOINNCFONAE_GJADKBNFLPP_OFFSET UNITYSDK_OFFSET(0x1F2FD010)
#define BOINNCFONAE_GKMJBFOINMH_OFFSET UNITYSDK_OFFSET(0x1F2FD020)
#define BOINNCFONAE_HCEOIBOEHHD_OFFSET UNITYSDK_OFFSET(0x1F2FCFD0)
#define BOINNCFONAE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2FCDE0)
#define BOINNCFONAE_KBCGMFBKLLE_OFFSET UNITYSDK_OFFSET(0x1F2FCFC0)
#define BOINNCFONAE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2FD860)
#define BOINNCFONAE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2FD790)
#define BOINNCFONAE_MKAAKFIDNOL_OFFSET UNITYSDK_OFFSET(0x1F2FCFE0)
#define BOINNCFONAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2FCE40)
#define BOINNCFONAE_PLPFJJBLBDG_OFFSET UNITYSDK_OFFSET(0x1F2FD030)
#define BOINNCFONAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2FD1E0)
#define BOINNCFONAE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2FD240)

inline static constexpr unsigned int BOINNCFONAE_TypeDefinitionIndex = 29404;

	class BOINNCFONAE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HDLCAPDIKJI*>* NDJHPCGMBMO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LHFEPPLNAJO; // 0x20
		::DILHPBMCOFK AGIEMFKEBEC; // 0x24
		::System::UInt32 KLLMAOCKBKG; // 0x28
		::System::Byte _padding0[0x4];
		::System::UInt64 OGLCKCMGDNJ; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::HDLCAPDIKJI*>** StaticGet_KBEILJPMCDM()
		{
			return (::Google::Protobuf::FieldCodec_1<::HDLCAPDIKJI*>**)UnitySDK::FromName("", "BOINNCFONAE")->GetStaticField(0x54720);
		}

		static ::Google::Protobuf::MessageParser_1<::BOINNCFONAE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BOINNCFONAE*>**)UnitySDK::FromName("", "BOINNCFONAE")->GetStaticField(0x54728);
		}

		// static const ::System::Object FECNBJPFBGB; // 0x0
		// static const ::System::Object DGPDKJBLCLK; // 0x0
		// static const ::System::Object FAPGHBODPOE; // 0x0
		// static const ::System::Object PDDPIDJFIDB; // 0x0
		// static const ::System::Object EFHOLAHEFNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOINNCFONAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOINNCFONAE*))((::PBYTE)hIl2Cpp + BOINNCFONAE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOINNCFONAE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BOINNCFONAE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BOINNCFONAE*>*(*)())((::PBYTE)hIl2Cpp + BOINNCFONAE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOINNCFONAE* Clone()
		{
			return ((::BOINNCFONAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HDLCAPDIKJI*>* KBCGMFBKLLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HDLCAPDIKJI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_KBCGMFBKLLE_OFFSET))(this);
		}

		::System::UInt32 HCEOIBOEHHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_HCEOIBOEHHD_OFFSET))(this);
		}

		::System::Void MKAAKFIDNOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOINNCFONAE_MKAAKFIDNOL_OFFSET))(this, a1);
		}

		::System::UInt64 DBFHLAPFFPP()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_DBFHLAPFFPP_OFFSET))(this);
		}

		::System::Void CIBEMIPAPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BOINNCFONAE_CIBEMIPAPLH_OFFSET))(this, a1);
		}

		::DILHPBMCOFK GJADKBNFLPP()
		{
			return ((::DILHPBMCOFK(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_GJADKBNFLPP_OFFSET))(this);
		}

		::System::Void GKMJBFOINMH(::DILHPBMCOFK a1)
		{
			return ((::System::Void(*)(::PVOID, ::DILHPBMCOFK))((::PBYTE)hIl2Cpp + BOINNCFONAE_GKMJBFOINMH_OFFSET))(this, a1);
		}

		::System::UInt32 PLPFJJBLBDG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_PLPFJJBLBDG_OFFSET))(this);
		}

		::System::Void CAFIBIJHNKD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOINNCFONAE_CAFIBIJHNKD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOINNCFONAE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOINNCFONAE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOINNCFONAE*))((::PBYTE)hIl2Cpp + BOINNCFONAE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOINNCFONAE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOINNCFONAE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOINNCFONAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOINNCFONAE*))((::PBYTE)hIl2Cpp + BOINNCFONAE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOINNCFONAE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

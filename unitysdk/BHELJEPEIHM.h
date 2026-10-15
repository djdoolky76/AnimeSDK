#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHELJEPEIHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHELJEPEIHM_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1DDF5460)
#define BHELJEPEIHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF57C0)
#define BHELJEPEIHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF59E0)
#define BHELJEPEIHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF5410)
#define BHELJEPEIHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF53E0)
#define BHELJEPEIHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF53D0)
#define BHELJEPEIHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF5540)
#define BHELJEPEIHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF5470)
#define BHELJEPEIHM_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1DDF5450)
#define BHELJEPEIHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF56B0)
#define BHELJEPEIHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF5390)
#define BHELJEPEIHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF5880)
#define BHELJEPEIHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF5850)
#define BHELJEPEIHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF53C0)
#define BHELJEPEIHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF56E0)
#define BHELJEPEIHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF5740)

	class BHELJEPEIHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHELJEPEIHM")->GetStaticField(0x45D20);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHELJEPEIHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHELJEPEIHM*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHELJEPEIHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHELJEPEIHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHELJEPEIHM* Clone()
		{
			return ((::BHELJEPEIHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHELJEPEIHM_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHELJEPEIHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHELJEPEIHM*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHELJEPEIHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHELJEPEIHM*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHELJEPEIHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

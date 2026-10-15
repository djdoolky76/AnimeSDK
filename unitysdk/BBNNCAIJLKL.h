#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBNNCAIJLKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BBNNCAIJLKL_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E7C9E30)
#define BBNNCAIJLKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CA170)
#define BBNNCAIJLKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA440)
#define BBNNCAIJLKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C9DC0)
#define BBNNCAIJLKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C9D90)
#define BBNNCAIJLKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9D80)
#define BBNNCAIJLKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C9F30)
#define BBNNCAIJLKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C9E50)
#define BBNNCAIJLKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7C9E20)
#define BBNNCAIJLKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7CA000)
#define BBNNCAIJLKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C9D40)
#define BBNNCAIJLKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7CA2C0)
#define BBNNCAIJLKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CA280)
#define BBNNCAIJLKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7C9E10)
#define BBNNCAIJLKL_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E7C9E40)
#define BBNNCAIJLKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9D70)
#define BBNNCAIJLKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CA030)
#define BBNNCAIJLKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CA090)

	class BBNNCAIJLKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 FGDIKGKCCFN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BBNNCAIJLKL")->GetStaticField(0x484C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CLJJLLDPMBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BBNNCAIJLKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBNNCAIJLKL*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBNNCAIJLKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BBNNCAIJLKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BBNNCAIJLKL* Clone()
		{
			return ((::BBNNCAIJLKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BBNNCAIJLKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBNNCAIJLKL*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BBNNCAIJLKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBNNCAIJLKL*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BBNNCAIJLKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

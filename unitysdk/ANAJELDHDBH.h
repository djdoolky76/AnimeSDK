#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANAJELDHDBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANAJELDHDBH_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E527D00)
#define ANAJELDHDBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E528200)
#define ANAJELDHDBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E528480)
#define ANAJELDHDBH_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E527D10)
#define ANAJELDHDBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E527C80)
#define ANAJELDHDBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E527C40)
#define ANAJELDHDBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E527C30)
#define ANAJELDHDBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E527DA0)
#define ANAJELDHDBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E527D40)
#define ANAJELDHDBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E527F90)
#define ANAJELDHDBH_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E527D30)
#define ANAJELDHDBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E527BC0)
#define ANAJELDHDBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E528300)
#define ANAJELDHDBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5282B0)
#define ANAJELDHDBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E527C20)
#define ANAJELDHDBH_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E527D20)
#define ANAJELDHDBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5280B0)
#define ANAJELDHDBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E528110)

	class ANAJELDHDBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PDKNJCIEBHA; // 0x18
		::System::Byte _padding0[0x4];
		::System::Double BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ANAJELDHDBH")->GetStaticField(0x3D420);
		}

		// static const ::System::Object AFBDHEMJEPP; // 0x0
		// static const ::System::Object IBJNBJNDPIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANAJELDHDBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANAJELDHDBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ANAJELDHDBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANAJELDHDBH* Clone()
		{
			return ((::ANAJELDHDBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Double PJLEOJKPGAJ()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + ANAJELDHDBH_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANAJELDHDBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANAJELDHDBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANAJELDHDBH*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANAJELDHDBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

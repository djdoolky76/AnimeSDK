#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFHEKNFNMIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFHEKNFNMIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A3490)
#define CFHEKNFNMIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3650)
#define CFHEKNFNMIP_CLLIBMIFPNA_OFFSET UNITYSDK_OFFSET(0x1E0A30C0)
#define CFHEKNFNMIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A3070)
#define CFHEKNFNMIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A3040)
#define CFHEKNFNMIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3030)
#define CFHEKNFNMIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A31C0)
#define CFHEKNFNMIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A30E0)
#define CFHEKNFNMIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A3340)
#define CFHEKNFNMIP_JBBMHOFGHGA_OFFSET UNITYSDK_OFFSET(0x1E0A30D0)
#define CFHEKNFNMIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A2FF0)
#define CFHEKNFNMIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A34F0)
#define CFHEKNFNMIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A34C0)
#define CFHEKNFNMIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3020)
#define CFHEKNFNMIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A3370)
#define CFHEKNFNMIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A33D0)

	class CFHEKNFNMIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean AIGHAPALCNE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CFHEKNFNMIP")->GetStaticField(0x12FF0);
		}

		// static const ::System::Object HBDALMDHLKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFHEKNFNMIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFHEKNFNMIP*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CFHEKNFNMIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFHEKNFNMIP* Clone()
		{
			return ((::CFHEKNFNMIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CLONE_OFFSET))(this);
		}

		::System::Boolean CLLIBMIFPNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CLLIBMIFPNA_OFFSET))(this);
		}

		::System::Void JBBMHOFGHGA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_JBBMHOFGHGA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFHEKNFNMIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFHEKNFNMIP*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFHEKNFNMIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFHEKNFNMIP*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFHEKNFNMIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

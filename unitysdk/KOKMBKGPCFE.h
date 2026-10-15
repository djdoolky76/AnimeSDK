#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLJIILDNDPL.h"
#include "unitysdk/System/Object.h"
class KOKMBKGPCFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOKMBKGPCFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8B3100)
#define KOKMBKGPCFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8B3360)
#define KOKMBKGPCFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B2D30)
#define KOKMBKGPCFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8B2D00)
#define KOKMBKGPCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2CF0)
#define KOKMBKGPCFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8B2E60)
#define KOKMBKGPCFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8B2D90)
#define KOKMBKGPCFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8B2FD0)
#define KOKMBKGPCFE_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E8B2D80)
#define KOKMBKGPCFE_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E8B2D70)
#define KOKMBKGPCFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8B2CB0)
#define KOKMBKGPCFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8B3200)
#define KOKMBKGPCFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8B31D0)
#define KOKMBKGPCFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8B2CE0)
#define KOKMBKGPCFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8B3000)
#define KOKMBKGPCFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8B3060)

	class KOKMBKGPCFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MLJIILDNDPL GMPNCOBOFDM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOKMBKGPCFE")->GetStaticField(0x2BA50);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOKMBKGPCFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOKMBKGPCFE*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOKMBKGPCFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOKMBKGPCFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOKMBKGPCFE* Clone()
		{
			return ((::KOKMBKGPCFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_CLONE_OFFSET))(this);
		}

		::MLJIILDNDPL JBIOGKPHKKC()
		{
			return ((::MLJIILDNDPL(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::MLJIILDNDPL a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLJIILDNDPL))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOKMBKGPCFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOKMBKGPCFE*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOKMBKGPCFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOKMBKGPCFE*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOKMBKGPCFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKGOFMFNIPP.h"
#include "unitysdk/System/Object.h"
class BHMEPBAGOFF;
class LGEOFJJKFNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGEOFJJKFNF_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E94F9F0)
#define LGEOFJJKFNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E94FED0)
#define LGEOFJJKFNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9502B0)
#define LGEOFJJKFNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E94F950)
#define LGEOFJJKFNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E94F8C0)
#define LGEOFJJKFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94F8B0)
#define LGEOFJJKFNF_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E94FA10)
#define LGEOFJJKFNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E94FBB0)
#define LGEOFJJKFNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E94FA30)
#define LGEOFJJKFNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E94FD30)
#define LGEOFJJKFNF_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E94FA20)
#define LGEOFJJKFNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E94F870)
#define LGEOFJJKFNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9500C0)
#define LGEOFJJKFNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E94FFE0)
#define LGEOFJJKFNF_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E94FA00)
#define LGEOFJJKFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E94F8A0)
#define LGEOFJJKFNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E94FD80)
#define LGEOFJJKFNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E94FDE0)

	class LGEOFJJKFNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BHMEPBAGOFF* CMDGAIOLHKP; // 0x18
		::CKGOFMFNIPP EMHBAOIIKLC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGEOFJJKFNF")->GetStaticField(0x3E650);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGEOFJJKFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGEOFJJKFNF*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEOFJJKFNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGEOFJJKFNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGEOFJJKFNF* Clone()
		{
			return ((::LGEOFJJKFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_CLONE_OFFSET))(this);
		}

		::BHMEPBAGOFF* ANALOEDDDHD()
		{
			return ((::BHMEPBAGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::BHMEPBAGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::CKGOFMFNIPP EJDIMEGMAKG()
		{
			return ((::CKGOFMFNIPP(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::CKGOFMFNIPP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKGOFMFNIPP))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGEOFJJKFNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGEOFJJKFNF*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGEOFJJKFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGEOFJJKFNF*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGEOFJJKFNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMINPDAIBLP;
class PPGEBEBPMJC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMINPDAIBLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F17E7A0)
#define OMINPDAIBLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F17EA50)
#define OMINPDAIBLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F17E0D0)
#define OMINPDAIBLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F17E030)
#define OMINPDAIBLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F17E020)
#define OMINPDAIBLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F17E380)
#define OMINPDAIBLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F17E1E0)
#define OMINPDAIBLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F17E650)
#define OMINPDAIBLP_HCPPOMBDMJN_OFFSET UNITYSDK_OFFSET(0x1F17E1D0)
#define OMINPDAIBLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F17DFB0)
#define OMINPDAIBLP_JNLDIPIKKMO_OFFSET UNITYSDK_OFFSET(0x1F17E1C0)
#define OMINPDAIBLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F17E8C0)
#define OMINPDAIBLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F17E800)
#define OMINPDAIBLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F17E010)
#define OMINPDAIBLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F17E6B0)
#define OMINPDAIBLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F17E710)

inline static constexpr unsigned int OMINPDAIBLP_TypeDefinitionIndex = 30049;

	class OMINPDAIBLP : public ::System::Object
	{
	public:
		::PPGEBEBPMJC* ACBIEJKAEKF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OMINPDAIBLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMINPDAIBLP*>**)UnitySDK::FromName("", "OMINPDAIBLP")->GetStaticField(0x24A30);
		}

		// static const ::System::Object HMNPPAGPAJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMINPDAIBLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMINPDAIBLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMINPDAIBLP*>*(*)())((::PBYTE)hIl2Cpp + OMINPDAIBLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMINPDAIBLP* Clone()
		{
			return ((::OMINPDAIBLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_CLONE_OFFSET))(this);
		}

		::PPGEBEBPMJC* JNLDIPIKKMO()
		{
			return ((::PPGEBEBPMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_JNLDIPIKKMO_OFFSET))(this);
		}

		::System::Void HCPPOMBDMJN(::PPGEBEBPMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGEBEBPMJC*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_HCPPOMBDMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMINPDAIBLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMINPDAIBLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMINPDAIBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMINPDAIBLP*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMINPDAIBLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

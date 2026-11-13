#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPIEGEGHMDP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPIEGEGHMDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F76A660)
#define DPIEGEGHMDP_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1F76A2D0)
#define DPIEGEGHMDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76A8A0)
#define DPIEGEGHMDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F76A290)
#define DPIEGEGHMDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76A260)
#define DPIEGEGHMDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76A250)
#define DPIEGEGHMDP_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1F76A2E0)
#define DPIEGEGHMDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F76A3C0)
#define DPIEGEGHMDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F76A2F0)
#define DPIEGEGHMDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F76A530)
#define DPIEGEGHMDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F76A210)
#define DPIEGEGHMDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F76A740)
#define DPIEGEGHMDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F76A710)
#define DPIEGEGHMDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F76A240)
#define DPIEGEGHMDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F76A560)
#define DPIEGEGHMDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F76A5C0)

inline static constexpr unsigned int DPIEGEGHMDP_TypeDefinitionIndex = 31464;

	class DPIEGEGHMDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 NBFPOGFBMFE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DPIEGEGHMDP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPIEGEGHMDP*>**)UnitySDK::FromName("", "DPIEGEGHMDP")->GetStaticField(0x3AAC0);
		}

		// static const ::System::Object GKBPDIPOFGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPIEGEGHMDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIEGEGHMDP*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPIEGEGHMDP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPIEGEGHMDP*>*(*)())((::PBYTE)hIl2Cpp + DPIEGEGHMDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPIEGEGHMDP* Clone()
		{
			return ((::DPIEGEGHMDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CLONE_OFFSET))(this);
		}

		::System::Int32 CBOFFPEFEPP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPIEGEGHMDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPIEGEGHMDP*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPIEGEGHMDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPIEGEGHMDP*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPIEGEGHMDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

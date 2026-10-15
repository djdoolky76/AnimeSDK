#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBCEOICLAB;
class KEMGFAPBFNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEMGFAPBFNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E2E10)
#define KEMGFAPBFNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E31F0)
#define KEMGFAPBFNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E28A0)
#define KEMGFAPBFNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E2810)
#define KEMGFAPBFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E2800)
#define KEMGFAPBFNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E2B00)
#define KEMGFAPBFNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E2980)
#define KEMGFAPBFNL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7E2970)
#define KEMGFAPBFNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E2C80)
#define KEMGFAPBFNL_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E7E2940)
#define KEMGFAPBFNL_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E7E2950)
#define KEMGFAPBFNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E27C0)
#define KEMGFAPBFNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E2FE0)
#define KEMGFAPBFNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E2EE0)
#define KEMGFAPBFNL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7E2960)
#define KEMGFAPBFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E27F0)
#define KEMGFAPBFNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E2CD0)
#define KEMGFAPBFNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E2D30)

inline static constexpr unsigned int KEMGFAPBFNL_TypeDefinitionIndex = 28382;

	class KEMGFAPBFNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BFBCEOICLAB* ODEBGOBLILD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KEMGFAPBFNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KEMGFAPBFNL*>**)UnitySDK::FromName("", "KEMGFAPBFNL")->GetStaticField(0x11D40);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEMGFAPBFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KEMGFAPBFNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KEMGFAPBFNL*>*(*)())((::PBYTE)hIl2Cpp + KEMGFAPBFNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEMGFAPBFNL* Clone()
		{
			return ((::KEMGFAPBFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CLONE_OFFSET))(this);
		}

		::BFBCEOICLAB* GPCIDCAANHB()
		{
			return ((::BFBCEOICLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::BFBCEOICLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBCEOICLAB*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEMGFAPBFNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEMGFAPBFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBMDMFOCOAK;
class LMACKMNOJBF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LMACKMNOJBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E973640)
#define LMACKMNOJBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E973950)
#define LMACKMNOJBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9730A0)
#define LMACKMNOJBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E973040)
#define LMACKMNOJBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E973030)
#define LMACKMNOJBF_DFNCFBPKFLC_OFFSET UNITYSDK_OFFSET(0x1E973110)
#define LMACKMNOJBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9732D0)
#define LMACKMNOJBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E973150)
#define LMACKMNOJBF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E973140)
#define LMACKMNOJBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E973450)
#define LMACKMNOJBF_HHDNOHIJHKD_OFFSET UNITYSDK_OFFSET(0x1E973120)
#define LMACKMNOJBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E972FF0)
#define LMACKMNOJBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9737A0)
#define LMACKMNOJBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E973710)
#define LMACKMNOJBF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E973130)
#define LMACKMNOJBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E973020)
#define LMACKMNOJBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E973500)
#define LMACKMNOJBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E973560)

inline static constexpr unsigned int LMACKMNOJBF_TypeDefinitionIndex = 29964;

	class LMACKMNOJBF : public ::System::Object
	{
	public:
		::JBMDMFOCOAK* ONFFPANCOAD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LMACKMNOJBF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LMACKMNOJBF*>**)UnitySDK::FromName("", "LMACKMNOJBF")->GetStaticField(0x3D290);
		}

		// static const ::System::Object NDKEFIAMAFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LMACKMNOJBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMACKMNOJBF*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LMACKMNOJBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LMACKMNOJBF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LMACKMNOJBF*>*(*)())((::PBYTE)hIl2Cpp + LMACKMNOJBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LMACKMNOJBF* Clone()
		{
			return ((::LMACKMNOJBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_CLONE_OFFSET))(this);
		}

		::JBMDMFOCOAK* DFNCFBPKFLC()
		{
			return ((::JBMDMFOCOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_DFNCFBPKFLC_OFFSET))(this);
		}

		::System::Void HHDNOHIJHKD(::JBMDMFOCOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBMDMFOCOAK*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_HHDNOHIJHKD_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LMACKMNOJBF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LMACKMNOJBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LMACKMNOJBF*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMACKMNOJBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LMACKMNOJBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMACKMNOJBF*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LMACKMNOJBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

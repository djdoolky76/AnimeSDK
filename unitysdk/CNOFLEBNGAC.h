#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNOFLEBNGAC;
class NHGJEIHKKHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNOFLEBNGAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1027E0)
#define CNOFLEBNGAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E102BD0)
#define CNOFLEBNGAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1022A0)
#define CNOFLEBNGAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E102230)
#define CNOFLEBNGAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E102220)
#define CNOFLEBNGAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1024E0)
#define CNOFLEBNGAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E102360)
#define CNOFLEBNGAC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E102330)
#define CNOFLEBNGAC_GBOKPEFHJOH_OFFSET UNITYSDK_OFFSET(0x1E102350)
#define CNOFLEBNGAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E102660)
#define CNOFLEBNGAC_IKOCLHDFILA_OFFSET UNITYSDK_OFFSET(0x1E102340)
#define CNOFLEBNGAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1021E0)
#define CNOFLEBNGAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1029B0)
#define CNOFLEBNGAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1028B0)
#define CNOFLEBNGAC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E102320)
#define CNOFLEBNGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E102210)
#define CNOFLEBNGAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1026A0)
#define CNOFLEBNGAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E102700)

inline static constexpr unsigned int CNOFLEBNGAC_TypeDefinitionIndex = 33205;

	class CNOFLEBNGAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NHGJEIHKKHB* NJELJGOHLOE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CNOFLEBNGAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNOFLEBNGAC*>**)UnitySDK::FromName("", "CNOFLEBNGAC")->GetStaticField(0x1DB60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HAMBLLILNAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNOFLEBNGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOFLEBNGAC*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNOFLEBNGAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNOFLEBNGAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNOFLEBNGAC*>*(*)())((::PBYTE)hIl2Cpp + CNOFLEBNGAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNOFLEBNGAC* Clone()
		{
			return ((::CNOFLEBNGAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NHGJEIHKKHB* IKOCLHDFILA()
		{
			return ((::NHGJEIHKKHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_IKOCLHDFILA_OFFSET))(this);
		}

		::System::Void GBOKPEFHJOH(::NHGJEIHKKHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJEIHKKHB*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_GBOKPEFHJOH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNOFLEBNGAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNOFLEBNGAC*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNOFLEBNGAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOFLEBNGAC*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNOFLEBNGAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

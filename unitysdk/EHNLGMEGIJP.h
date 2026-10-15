#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHNLGMEGIJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHNLGMEGIJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A2CA0)
#define EHNLGMEGIJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A2EC0)
#define EHNLGMEGIJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A28F0)
#define EHNLGMEGIJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A28C0)
#define EHNLGMEGIJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A28B0)
#define EHNLGMEGIJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A2A20)
#define EHNLGMEGIJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A2950)
#define EHNLGMEGIJP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2A2940)
#define EHNLGMEGIJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A2B90)
#define EHNLGMEGIJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A2870)
#define EHNLGMEGIJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A2D60)
#define EHNLGMEGIJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A2D30)
#define EHNLGMEGIJP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2A2930)
#define EHNLGMEGIJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A28A0)
#define EHNLGMEGIJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A2BC0)
#define EHNLGMEGIJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A2C20)

inline static constexpr unsigned int EHNLGMEGIJP_TypeDefinitionIndex = 30811;

	class EHNLGMEGIJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EHNLGMEGIJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EHNLGMEGIJP*>**)UnitySDK::FromName("", "EHNLGMEGIJP")->GetStaticField(0x48A70);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHNLGMEGIJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHNLGMEGIJP*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHNLGMEGIJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EHNLGMEGIJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EHNLGMEGIJP*>*(*)())((::PBYTE)hIl2Cpp + EHNLGMEGIJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHNLGMEGIJP* Clone()
		{
			return ((::EHNLGMEGIJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHNLGMEGIJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHNLGMEGIJP*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHNLGMEGIJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHNLGMEGIJP*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHNLGMEGIJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

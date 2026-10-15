#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEEHIIPMFP;
class CKPOBLIFMGN;
class CLEDCMIOIPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLEDCMIOIPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F7540)
#define CLEDCMIOIPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F78F0)
#define CLEDCMIOIPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F6C80)
#define CLEDCMIOIPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F6B30)
#define CLEDCMIOIPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F6B20)
#define CLEDCMIOIPF_DCCPFEKMFNJ_OFFSET UNITYSDK_OFFSET(0x1E0F6DE0)
#define CLEDCMIOIPF_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1E0F6E00)
#define CLEDCMIOIPF_EFBHMCLBHHG_OFFSET UNITYSDK_OFFSET(0x1E0F6DF0)
#define CLEDCMIOIPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F7050)
#define CLEDCMIOIPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F6E20)
#define CLEDCMIOIPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F7280)
#define CLEDCMIOIPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F6AE0)
#define CLEDCMIOIPF_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1E0F6E10)
#define CLEDCMIOIPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F7750)
#define CLEDCMIOIPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F75D0)
#define CLEDCMIOIPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F6B10)
#define CLEDCMIOIPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F7400)
#define CLEDCMIOIPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F7460)

	class CLEDCMIOIPF : public ::System::Object
	{
	public:
		::AMEEHIIPMFP* EINIOEIIGOJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CKPOBLIFMGN* CPNGELFIPEE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLEDCMIOIPF")->GetStaticField(0x1CF50);
		}

		// static const ::System::Object FAIEOJKNGAG; // 0x0
		// static const ::System::Object KCFACCMFHNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLEDCMIOIPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLEDCMIOIPF*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLEDCMIOIPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLEDCMIOIPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLEDCMIOIPF* Clone()
		{
			return ((::CLEDCMIOIPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_CLONE_OFFSET))(this);
		}

		::CKPOBLIFMGN* DCCPFEKMFNJ()
		{
			return ((::CKPOBLIFMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_DCCPFEKMFNJ_OFFSET))(this);
		}

		::System::Void EFBHMCLBHHG(::CKPOBLIFMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKPOBLIFMGN*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_EFBHMCLBHHG_OFFSET))(this, a1);
		}

		::AMEEHIIPMFP* EDGAHDFBGJH()
		{
			return ((::AMEEHIIPMFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_EDGAHDFBGJH_OFFSET))(this);
		}

		::System::Void LEADMLKFHDE(::AMEEHIIPMFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEEHIIPMFP*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_LEADMLKFHDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLEDCMIOIPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLEDCMIOIPF*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLEDCMIOIPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLEDCMIOIPF*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLEDCMIOIPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

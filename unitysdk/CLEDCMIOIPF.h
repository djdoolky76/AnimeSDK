#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEEHIIPMFP;
class CKPOBLIFMGN;
class CLEDCMIOIPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLEDCMIOIPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0C9FC0)
#define CLEDCMIOIPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CA370)
#define CLEDCMIOIPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0C9700)
#define CLEDCMIOIPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0C95B0)
#define CLEDCMIOIPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C95A0)
#define CLEDCMIOIPF_DCCPFEKMFNJ_OFFSET UNITYSDK_OFFSET(0x1E0C9860)
#define CLEDCMIOIPF_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1E0C9880)
#define CLEDCMIOIPF_EFBHMCLBHHG_OFFSET UNITYSDK_OFFSET(0x1E0C9870)
#define CLEDCMIOIPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0C9AD0)
#define CLEDCMIOIPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0C98A0)
#define CLEDCMIOIPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0C9D00)
#define CLEDCMIOIPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0C9560)
#define CLEDCMIOIPF_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1E0C9890)
#define CLEDCMIOIPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0CA1D0)
#define CLEDCMIOIPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0CA050)
#define CLEDCMIOIPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0C9590)
#define CLEDCMIOIPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0C9E80)
#define CLEDCMIOIPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0C9EE0)

inline static constexpr unsigned int CLEDCMIOIPF_TypeDefinitionIndex = 29641;

	class CLEDCMIOIPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AMEEHIIPMFP* EINIOEIIGOJ; // 0x18
		::CKPOBLIFMGN* CPNGELFIPEE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CLEDCMIOIPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLEDCMIOIPF*>**)UnitySDK::FromName("", "CLEDCMIOIPF")->GetStaticField(0x1AEB0);
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

		static ::Google::Protobuf::MessageParser_1<::CLEDCMIOIPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLEDCMIOIPF*>*(*)())((::PBYTE)hIl2Cpp + CLEDCMIOIPF_JJGHOBBFNJD_OFFSET))();
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

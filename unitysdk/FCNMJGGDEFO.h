#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCNMJGGDEFO;
class PFPPACPMFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCNMJGGDEFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8AEC60)
#define FCNMJGGDEFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8AEFA0)
#define FCNMJGGDEFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8AE6D0)
#define FCNMJGGDEFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8AE630)
#define FCNMJGGDEFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8AE620)
#define FCNMJGGDEFO_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1F8AE7B0)
#define FCNMJGGDEFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8AE940)
#define FCNMJGGDEFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8AE7C0)
#define FCNMJGGDEFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8AEAC0)
#define FCNMJGGDEFO_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1F8AE7A0)
#define FCNMJGGDEFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8AE5E0)
#define FCNMJGGDEFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8AEDF0)
#define FCNMJGGDEFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8AED30)
#define FCNMJGGDEFO_MPMEHKKCFFI_OFFSET UNITYSDK_OFFSET(0x1F8AE790)
#define FCNMJGGDEFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8AE610)
#define FCNMJGGDEFO_PICFCPNEKOF_OFFSET UNITYSDK_OFFSET(0x1F8AE780)
#define FCNMJGGDEFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8AEB20)
#define FCNMJGGDEFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8AEB80)

inline static constexpr unsigned int FCNMJGGDEFO_TypeDefinitionIndex = 27629;

	class FCNMJGGDEFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PFPPACPMFDJ* LPEIKENFOCD; // 0x18
		::System::UInt32 OEHAKOKDOAA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>**)UnitySDK::FromName("", "FCNMJGGDEFO")->GetStaticField(0x443B0);
		}

		// static const ::System::Object OCJHKKAGDCI; // 0x0
		// static const ::System::Object HBFMDPBHHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCNMJGGDEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCNMJGGDEFO*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCNMJGGDEFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>*(*)())((::PBYTE)hIl2Cpp + FCNMJGGDEFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCNMJGGDEFO* Clone()
		{
			return ((::FCNMJGGDEFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_CLONE_OFFSET))(this);
		}

		::PFPPACPMFDJ* PICFCPNEKOF()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_PICFCPNEKOF_OFFSET))(this);
		}

		::System::Void MPMEHKKCFFI(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_MPMEHKKCFFI_OFFSET))(this, a1);
		}

		::System::UInt32 HOFJNIJMEGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_HOFJNIJMEGJ_OFFSET))(this);
		}

		::System::Void DECLCLGGOGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_DECLCLGGOGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCNMJGGDEFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCNMJGGDEFO*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCNMJGGDEFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCNMJGGDEFO*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCNMJGGDEFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

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

#define FCNMJGGDEFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E321290)
#define FCNMJGGDEFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3215D0)
#define FCNMJGGDEFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E320D00)
#define FCNMJGGDEFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E320C60)
#define FCNMJGGDEFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E320C50)
#define FCNMJGGDEFO_DECLCLGGOGD_OFFSET UNITYSDK_OFFSET(0x1E320DE0)
#define FCNMJGGDEFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E320F70)
#define FCNMJGGDEFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E320DF0)
#define FCNMJGGDEFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3210F0)
#define FCNMJGGDEFO_HOFJNIJMEGJ_OFFSET UNITYSDK_OFFSET(0x1E320DD0)
#define FCNMJGGDEFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E320C10)
#define FCNMJGGDEFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E321420)
#define FCNMJGGDEFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E321360)
#define FCNMJGGDEFO_MPMEHKKCFFI_OFFSET UNITYSDK_OFFSET(0x1E320DC0)
#define FCNMJGGDEFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E320C40)
#define FCNMJGGDEFO_PICFCPNEKOF_OFFSET UNITYSDK_OFFSET(0x1E320DB0)
#define FCNMJGGDEFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E321150)
#define FCNMJGGDEFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3211B0)

inline static constexpr unsigned int FCNMJGGDEFO_TypeDefinitionIndex = 27098;

	class FCNMJGGDEFO : public ::System::Object
	{
	public:
		::PFPPACPMFDJ* LPEIKENFOCD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OEHAKOKDOAA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCNMJGGDEFO*>**)UnitySDK::FromName("", "FCNMJGGDEFO")->GetStaticField(0x51930);
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

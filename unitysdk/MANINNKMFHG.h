#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNBFDNKLHE;
class MANINNKMFHG;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MANINNKMFHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DD970)
#define MANINNKMFHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DDC90)
#define MANINNKMFHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DD230)
#define MANINNKMFHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DD190)
#define MANINNKMFHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DD180)
#define MANINNKMFHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DD5A0)
#define MANINNKMFHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DD350)
#define MANINNKMFHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DD7D0)
#define MANINNKMFHG_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E9DD340)
#define MANINNKMFHG_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E9DD310)
#define MANINNKMFHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DD110)
#define MANINNKMFHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DDAC0)
#define MANINNKMFHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DDA00)
#define MANINNKMFHG_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E9DD320)
#define MANINNKMFHG_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E9DD330)
#define MANINNKMFHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DD170)
#define MANINNKMFHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DD830)
#define MANINNKMFHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DD890)

inline static constexpr unsigned int MANINNKMFHG_TypeDefinitionIndex = 27274;

	class MANINNKMFHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x18
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MANINNKMFHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MANINNKMFHG*>**)UnitySDK::FromName("", "MANINNKMFHG")->GetStaticField(0x42D70);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MANINNKMFHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + MANINNKMFHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MANINNKMFHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MANINNKMFHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MANINNKMFHG*>*(*)())((::PBYTE)hIl2Cpp + MANINNKMFHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MANINNKMFHG* Clone()
		{
			return ((::MANINNKMFHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_CLONE_OFFSET))(this);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + MANINNKMFHG_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + MANINNKMFHG_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MANINNKMFHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MANINNKMFHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + MANINNKMFHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MANINNKMFHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANINNKMFHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MANINNKMFHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANINNKMFHG*))((::PBYTE)hIl2Cpp + MANINNKMFHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MANINNKMFHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

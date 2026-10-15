#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDDNKPJEMJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDDNKPJEMJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E353840)
#define FDDNKPJEMJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E353AA0)
#define FDDNKPJEMJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E353450)
#define FDDNKPJEMJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E353410)
#define FDDNKPJEMJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E353400)
#define FDDNKPJEMJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3535C0)
#define FDDNKPJEMJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3534E0)
#define FDDNKPJEMJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3536A0)
#define FDDNKPJEMJE_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E3534B0)
#define FDDNKPJEMJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3533C0)
#define FDDNKPJEMJE_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E3534A0)
#define FDDNKPJEMJE_MDOGANFKFID_OFFSET UNITYSDK_OFFSET(0x1E3534D0)
#define FDDNKPJEMJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E353920)
#define FDDNKPJEMJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3538E0)
#define FDDNKPJEMJE_OHFAFGMOMEI_OFFSET UNITYSDK_OFFSET(0x1E3534C0)
#define FDDNKPJEMJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3533F0)
#define FDDNKPJEMJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3536D0)
#define FDDNKPJEMJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E353730)

inline static constexpr unsigned int FDDNKPJEMJE_TypeDefinitionIndex = 27076;

	class FDDNKPJEMJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		::System::Boolean EEFPMEKJLEB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FDDNKPJEMJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDDNKPJEMJE*>**)UnitySDK::FromName("", "FDDNKPJEMJE")->GetStaticField(0x5B0E0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object OBPJACJDNLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDDNKPJEMJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDDNKPJEMJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDDNKPJEMJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDDNKPJEMJE*>*(*)())((::PBYTE)hIl2Cpp + FDDNKPJEMJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDDNKPJEMJE* Clone()
		{
			return ((::FDDNKPJEMJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::Boolean OHFAFGMOMEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_OHFAFGMOMEI_OFFSET))(this);
		}

		::System::Void MDOGANFKFID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_MDOGANFKFID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDDNKPJEMJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDDNKPJEMJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDDNKPJEMJE*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDDNKPJEMJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

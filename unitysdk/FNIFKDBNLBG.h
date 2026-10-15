#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDJKFOBBDJF.h"
#include "unitysdk/System/Object.h"
class FNIFKDBNLBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNIFKDBNLBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F12D0)
#define FNIFKDBNLBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F15E0)
#define FNIFKDBNLBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F0F10)
#define FNIFKDBNLBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F0EE0)
#define FNIFKDBNLBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0ED0)
#define FNIFKDBNLBG_EDGAHDFBGJH_OFFSET UNITYSDK_OFFSET(0x1E3F0F60)
#define FNIFKDBNLBG_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1E3F0F80)
#define FNIFKDBNLBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F1080)
#define FNIFKDBNLBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F0FA0)
#define FNIFKDBNLBG_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1E3F0F90)
#define FNIFKDBNLBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F1150)
#define FNIFKDBNLBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F0E90)
#define FNIFKDBNLBG_LEADMLKFHDE_OFFSET UNITYSDK_OFFSET(0x1E3F0F70)
#define FNIFKDBNLBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F1460)
#define FNIFKDBNLBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F1420)
#define FNIFKDBNLBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F0EC0)
#define FNIFKDBNLBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F1180)
#define FNIFKDBNLBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F11E0)

inline static constexpr unsigned int FNIFKDBNLBG_TypeDefinitionIndex = 28179;

	class FNIFKDBNLBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NOMDEJJPCMH; // 0x18
		::EDJKFOBBDJF EINIOEIIGOJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNIFKDBNLBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNIFKDBNLBG*>**)UnitySDK::FromName("", "FNIFKDBNLBG")->GetStaticField(0x654D0);
		}

		// static const ::System::Object KCFACCMFHNO; // 0x0
		// static const ::System::Object GCDEHDAKDHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNIFKDBNLBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNIFKDBNLBG*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNIFKDBNLBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNIFKDBNLBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNIFKDBNLBG*>*(*)())((::PBYTE)hIl2Cpp + FNIFKDBNLBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNIFKDBNLBG* Clone()
		{
			return ((::FNIFKDBNLBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_CLONE_OFFSET))(this);
		}

		::EDJKFOBBDJF EDGAHDFBGJH()
		{
			return ((::EDJKFOBBDJF(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_EDGAHDFBGJH_OFFSET))(this);
		}

		::System::Void LEADMLKFHDE(::EDJKFOBBDJF a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDJKFOBBDJF))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_LEADMLKFHDE_OFFSET))(this, a1);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNIFKDBNLBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNIFKDBNLBG*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNIFKDBNLBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNIFKDBNLBG*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNIFKDBNLBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

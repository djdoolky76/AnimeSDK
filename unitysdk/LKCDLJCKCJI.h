#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKCDLJCKCJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LKCDLJCKCJI_BNMGMLHBKGB_OFFSET UNITYSDK_OFFSET(0x1E95F140)
#define LKCDLJCKCJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E95F490)
#define LKCDLJCKCJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95F760)
#define LKCDLJCKCJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95F0E0)
#define LKCDLJCKCJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95F0B0)
#define LKCDLJCKCJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95F0A0)
#define LKCDLJCKCJI_DJLFLNNIHMN_OFFSET UNITYSDK_OFFSET(0x1E95F160)
#define LKCDLJCKCJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E95F250)
#define LKCDLJCKCJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E95F170)
#define LKCDLJCKCJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E95F320)
#define LKCDLJCKCJI_HJGKEKDBKOP_OFFSET UNITYSDK_OFFSET(0x1E95F150)
#define LKCDLJCKCJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95F060)
#define LKCDLJCKCJI_LPGIBPNADOJ_OFFSET UNITYSDK_OFFSET(0x1E95F130)
#define LKCDLJCKCJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E95F5E0)
#define LKCDLJCKCJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E95F5A0)
#define LKCDLJCKCJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95F090)
#define LKCDLJCKCJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E95F350)
#define LKCDLJCKCJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E95F3B0)

inline static constexpr unsigned int LKCDLJCKCJI_TypeDefinitionIndex = 33234;

	class LKCDLJCKCJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDPGGIDBGDI; // 0x18
		::System::UInt32 MBLOMPKCBHH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LKCDLJCKCJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LKCDLJCKCJI*>**)UnitySDK::FromName("", "LKCDLJCKCJI")->GetStaticField(0x39FF0);
		}

		// static const ::System::Object PLGIICNKEFB; // 0x0
		// static const ::System::Object PMIIMODBJKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LKCDLJCKCJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKCDLJCKCJI*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKCDLJCKCJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LKCDLJCKCJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LKCDLJCKCJI*>*(*)())((::PBYTE)hIl2Cpp + LKCDLJCKCJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LKCDLJCKCJI* Clone()
		{
			return ((::LKCDLJCKCJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 LPGIBPNADOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_LPGIBPNADOJ_OFFSET))(this);
		}

		::System::Void BNMGMLHBKGB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_BNMGMLHBKGB_OFFSET))(this, a1);
		}

		::System::UInt32 HJGKEKDBKOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_HJGKEKDBKOP_OFFSET))(this);
		}

		::System::Void DJLFLNNIHMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_DJLFLNNIHMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LKCDLJCKCJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LKCDLJCKCJI*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LKCDLJCKCJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKCDLJCKCJI*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LKCDLJCKCJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

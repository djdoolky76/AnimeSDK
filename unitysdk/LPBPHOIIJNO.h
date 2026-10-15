#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPBPHOIIJNO;
class MIKGMGBHLEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPBPHOIIJNO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99B3D0)
#define LPBPHOIIJNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99B650)
#define LPBPHOIIJNO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99AD90)
#define LPBPHOIIJNO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99AD00)
#define LPBPHOIIJNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99ACF0)
#define LPBPHOIIJNO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99AFC0)
#define LPBPHOIIJNO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99AE50)
#define LPBPHOIIJNO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99B290)
#define LPBPHOIIJNO_HFBALHOKMHF_OFFSET UNITYSDK_OFFSET(0x1E99AE30)
#define LPBPHOIIJNO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99ACB0)
#define LPBPHOIIJNO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99B4C0)
#define LPBPHOIIJNO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99B430)
#define LPBPHOIIJNO_NIDHMABFJIE_OFFSET UNITYSDK_OFFSET(0x1E99AE40)
#define LPBPHOIIJNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99ACE0)
#define LPBPHOIIJNO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99B2E0)
#define LPBPHOIIJNO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99B340)

inline static constexpr unsigned int LPBPHOIIJNO_TypeDefinitionIndex = 34203;

	class LPBPHOIIJNO : public ::System::Object
	{
	public:
		::MIKGMGBHLEN* FPEKDDOODLK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LPBPHOIIJNO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPBPHOIIJNO*>**)UnitySDK::FromName("", "LPBPHOIIJNO")->GetStaticField(0x436E0);
		}

		// static const ::System::Object KIEJLJIMANA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPBPHOIIJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPBPHOIIJNO*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPBPHOIIJNO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPBPHOIIJNO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPBPHOIIJNO*>*(*)())((::PBYTE)hIl2Cpp + LPBPHOIIJNO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPBPHOIIJNO* Clone()
		{
			return ((::LPBPHOIIJNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_CLONE_OFFSET))(this);
		}

		::MIKGMGBHLEN* HFBALHOKMHF()
		{
			return ((::MIKGMGBHLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_HFBALHOKMHF_OFFSET))(this);
		}

		::System::Void NIDHMABFJIE(::MIKGMGBHLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIKGMGBHLEN*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_NIDHMABFJIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPBPHOIIJNO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPBPHOIIJNO*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPBPHOIIJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPBPHOIIJNO*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPBPHOIIJNO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

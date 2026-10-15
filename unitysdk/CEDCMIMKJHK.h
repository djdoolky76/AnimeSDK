#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCMIMKJHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEDCMIMKJHK_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E090710)
#define CEDCMIMKJHK_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E090720)
#define CEDCMIMKJHK_BIFJKDIHKOK_OFFSET UNITYSDK_OFFSET(0x1E090740)
#define CEDCMIMKJHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E090AB0)
#define CEDCMIMKJHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E090D10)
#define CEDCMIMKJHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0906C0)
#define CEDCMIMKJHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E090680)
#define CEDCMIMKJHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E090670)
#define CEDCMIMKJHK_EMGHGCGDEOL_OFFSET UNITYSDK_OFFSET(0x1E090730)
#define CEDCMIMKJHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E090830)
#define CEDCMIMKJHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E090750)
#define CEDCMIMKJHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E090910)
#define CEDCMIMKJHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E090630)
#define CEDCMIMKJHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E090B90)
#define CEDCMIMKJHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E090B50)
#define CEDCMIMKJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E090660)
#define CEDCMIMKJHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E090940)
#define CEDCMIMKJHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0909A0)

inline static constexpr unsigned int CEDCMIMKJHK_TypeDefinitionIndex = 32233;

	class CEDCMIMKJHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::Boolean JLFGIAJFPHP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CEDCMIMKJHK")->GetStaticField(0x10530);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object GAKEBCKDHCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEDCMIMKJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCMIMKJHK*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCMIMKJHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CEDCMIMKJHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEDCMIMKJHK* Clone()
		{
			return ((::CEDCMIMKJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean EMGHGCGDEOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_EMGHGCGDEOL_OFFSET))(this);
		}

		::System::Void BIFJKDIHKOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_BIFJKDIHKOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEDCMIMKJHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEDCMIMKJHK*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEDCMIMKJHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCMIMKJHK*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEDCMIMKJHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

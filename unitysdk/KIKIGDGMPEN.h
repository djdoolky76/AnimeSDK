#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKIGDGMPEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIKIGDGMPEN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E861FE0)
#define KIKIGDGMPEN_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E861FD0)
#define KIKIGDGMPEN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E861FF0)
#define KIKIGDGMPEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E862320)
#define KIKIGDGMPEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8625F0)
#define KIKIGDGMPEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E861F70)
#define KIKIGDGMPEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E861F40)
#define KIKIGDGMPEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E861F30)
#define KIKIGDGMPEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8620E0)
#define KIKIGDGMPEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E862000)
#define KIKIGDGMPEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8621B0)
#define KIKIGDGMPEN_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E861FC0)
#define KIKIGDGMPEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E861EF0)
#define KIKIGDGMPEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E862470)
#define KIKIGDGMPEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E862430)
#define KIKIGDGMPEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E861F20)
#define KIKIGDGMPEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8621E0)
#define KIKIGDGMPEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E862240)

inline static constexpr unsigned int KIKIGDGMPEN_TypeDefinitionIndex = 29003;

	class KIKIGDGMPEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KIKIGDGMPEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIKIGDGMPEN*>**)UnitySDK::FromName("", "KIKIGDGMPEN")->GetStaticField(0x1B260);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIKIGDGMPEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKIGDGMPEN*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKIGDGMPEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIKIGDGMPEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIKIGDGMPEN*>*(*)())((::PBYTE)hIl2Cpp + KIKIGDGMPEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIKIGDGMPEN* Clone()
		{
			return ((::KIKIGDGMPEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIKIGDGMPEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIKIGDGMPEN*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIKIGDGMPEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIKIGDGMPEN*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIKIGDGMPEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

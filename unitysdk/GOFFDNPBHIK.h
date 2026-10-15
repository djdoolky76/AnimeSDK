#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOFFDNPBHIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GOFFDNPBHIK_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E4EF1B0)
#define GOFFDNPBHIK_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E4EF1C0)
#define GOFFDNPBHIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4EF540)
#define GOFFDNPBHIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4EF810)
#define GOFFDNPBHIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4EF140)
#define GOFFDNPBHIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4EF110)
#define GOFFDNPBHIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EF100)
#define GOFFDNPBHIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4EF300)
#define GOFFDNPBHIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4EF1F0)
#define GOFFDNPBHIK_FBCAEKMFACO_OFFSET UNITYSDK_OFFSET(0x1E4EF1E0)
#define GOFFDNPBHIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4EF3D0)
#define GOFFDNPBHIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4EF090)
#define GOFFDNPBHIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4EF690)
#define GOFFDNPBHIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4EF650)
#define GOFFDNPBHIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4EF0F0)
#define GOFFDNPBHIK_PDIELEPHHKB_OFFSET UNITYSDK_OFFSET(0x1E4EF1D0)
#define GOFFDNPBHIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4EF400)
#define GOFFDNPBHIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4EF460)

inline static constexpr unsigned int GOFFDNPBHIK_TypeDefinitionIndex = 25329;

	class GOFFDNPBHIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 AHGHHCFGNJP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GOFFDNPBHIK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GOFFDNPBHIK*>**)UnitySDK::FromName("", "GOFFDNPBHIK")->GetStaticField(0x1BFF0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object PJEILMGNBGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GOFFDNPBHIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOFFDNPBHIK*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOFFDNPBHIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GOFFDNPBHIK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GOFFDNPBHIK*>*(*)())((::PBYTE)hIl2Cpp + GOFFDNPBHIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GOFFDNPBHIK* Clone()
		{
			return ((::GOFFDNPBHIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 PDIELEPHHKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_PDIELEPHHKB_OFFSET))(this);
		}

		::System::Void FBCAEKMFACO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_FBCAEKMFACO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GOFFDNPBHIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOFFDNPBHIK*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GOFFDNPBHIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOFFDNPBHIK*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOFFDNPBHIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

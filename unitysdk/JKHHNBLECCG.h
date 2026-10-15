#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKHHNBLECCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKHHNBLECCG_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E76B440)
#define JKHHNBLECCG_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E76B450)
#define JKHHNBLECCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E76B780)
#define JKHHNBLECCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E76BA50)
#define JKHHNBLECCG_CFIPDBNKANG_OFFSET UNITYSDK_OFFSET(0x1E76B430)
#define JKHHNBLECCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E76B3D0)
#define JKHHNBLECCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E76B3A0)
#define JKHHNBLECCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76B390)
#define JKHHNBLECCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E76B540)
#define JKHHNBLECCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E76B460)
#define JKHHNBLECCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76B610)
#define JKHHNBLECCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E76B350)
#define JKHHNBLECCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E76B8D0)
#define JKHHNBLECCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E76B890)
#define JKHHNBLECCG_OEEIFLIJOIF_OFFSET UNITYSDK_OFFSET(0x1E76B420)
#define JKHHNBLECCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E76B380)
#define JKHHNBLECCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76B640)
#define JKHHNBLECCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E76B6A0)

inline static constexpr unsigned int JKHHNBLECCG_TypeDefinitionIndex = 26410;

	class JKHHNBLECCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 AMKFBNLEOOI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JKHHNBLECCG")->GetStaticField(0x65CB0);
		}

		// static const ::System::Object MABEMCMAJAH; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKHHNBLECCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKHHNBLECCG*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKHHNBLECCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JKHHNBLECCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKHHNBLECCG* Clone()
		{
			return ((::JKHHNBLECCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEEIFLIJOIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_OEEIFLIJOIF_OFFSET))(this);
		}

		::System::Void CFIPDBNKANG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKHHNBLECCG_CFIPDBNKANG_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKHHNBLECCG_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKHHNBLECCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKHHNBLECCG*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHHNBLECCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKHHNBLECCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKHHNBLECCG*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKHHNBLECCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

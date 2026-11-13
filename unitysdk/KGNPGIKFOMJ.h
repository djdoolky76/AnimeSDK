#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class KGNPGIKFOMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGNPGIKFOMJ_AIONILPGDFG_OFFSET UNITYSDK_OFFSET(0x1F54ABD0)
#define KGNPGIKFOMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F54AF60)
#define KGNPGIKFOMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F54B1C0)
#define KGNPGIKFOMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F54AB90)
#define KGNPGIKFOMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F54AB60)
#define KGNPGIKFOMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F54AB50)
#define KGNPGIKFOMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F54ACC0)
#define KGNPGIKFOMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F54ABF0)
#define KGNPGIKFOMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F54AE30)
#define KGNPGIKFOMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F54AB10)
#define KGNPGIKFOMJ_KBLGHGFHJIM_OFFSET UNITYSDK_OFFSET(0x1F54ABE0)
#define KGNPGIKFOMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F54B060)
#define KGNPGIKFOMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F54B030)
#define KGNPGIKFOMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F54AB40)
#define KGNPGIKFOMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F54AE60)
#define KGNPGIKFOMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F54AEC0)

inline static constexpr unsigned int KGNPGIKFOMJ_TypeDefinitionIndex = 34534;

	class KGNPGIKFOMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AMEIKAGDIFC OHFNMGCGAGG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KGNPGIKFOMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGNPGIKFOMJ*>**)UnitySDK::FromName("", "KGNPGIKFOMJ")->GetStaticField(0xFF50);
		}

		// static const ::System::Object EDHJDCGBECJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGNPGIKFOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGNPGIKFOMJ*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGNPGIKFOMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGNPGIKFOMJ*>*(*)())((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGNPGIKFOMJ* Clone()
		{
			return ((::KGNPGIKFOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_CLONE_OFFSET))(this);
		}

		::AMEIKAGDIFC AIONILPGDFG()
		{
			return ((::AMEIKAGDIFC(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_AIONILPGDFG_OFFSET))(this);
		}

		::System::Void KBLGHGFHJIM(::AMEIKAGDIFC a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_KBLGHGFHJIM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGNPGIKFOMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGNPGIKFOMJ*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGNPGIKFOMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGNPGIKFOMJ*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHCEOIMHKJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHCEOIMHKJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F775C30)
#define GHCEOIMHKJI_CCGHEIPABHD_OFFSET UNITYSDK_OFFSET(0x1F775890)
#define GHCEOIMHKJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F775E50)
#define GHCEOIMHKJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F775820)
#define GHCEOIMHKJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7757F0)
#define GHCEOIMHKJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7757E0)
#define GHCEOIMHKJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7759B0)
#define GHCEOIMHKJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7758B0)
#define GHCEOIMHKJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F775B20)
#define GHCEOIMHKJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F775770)
#define GHCEOIMHKJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F775CF0)
#define GHCEOIMHKJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F775CC0)
#define GHCEOIMHKJI_NBOACLLKNCH_OFFSET UNITYSDK_OFFSET(0x1F7758A0)
#define GHCEOIMHKJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7757D0)
#define GHCEOIMHKJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F775B50)
#define GHCEOIMHKJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F775BB0)

inline static constexpr unsigned int GHCEOIMHKJI_TypeDefinitionIndex = 26002;

	class GHCEOIMHKJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JBHPAAIMEIG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHCEOIMHKJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHCEOIMHKJI*>**)UnitySDK::FromName("", "GHCEOIMHKJI")->GetStaticField(0xF4F0);
		}

		// static const ::System::Object FKDPCDOLCHM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHCEOIMHKJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCEOIMHKJI*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHCEOIMHKJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHCEOIMHKJI*>*(*)())((::PBYTE)hIl2Cpp + GHCEOIMHKJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHCEOIMHKJI* Clone()
		{
			return ((::GHCEOIMHKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CCGHEIPABHD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CCGHEIPABHD_OFFSET))(this);
		}

		::System::Void NBOACLLKNCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_NBOACLLKNCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHCEOIMHKJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHCEOIMHKJI*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHCEOIMHKJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHCEOIMHKJI*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHCEOIMHKJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

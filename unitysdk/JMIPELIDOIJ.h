#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMIPELIDOIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JMIPELIDOIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E75FE50)
#define JMIPELIDOIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E760070)
#define JMIPELIDOIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E75FAA0)
#define JMIPELIDOIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E75FA70)
#define JMIPELIDOIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75FA60)
#define JMIPELIDOIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E75FBD0)
#define JMIPELIDOIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E75FB00)
#define JMIPELIDOIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E75FD40)
#define JMIPELIDOIJ_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1E75FAE0)
#define JMIPELIDOIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E75FA20)
#define JMIPELIDOIJ_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1E75FAF0)
#define JMIPELIDOIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E75FF10)
#define JMIPELIDOIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E75FEE0)
#define JMIPELIDOIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E75FA50)
#define JMIPELIDOIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E75FD70)
#define JMIPELIDOIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E75FDD0)

inline static constexpr unsigned int JMIPELIDOIJ_TypeDefinitionIndex = 30968;

	class JMIPELIDOIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLFEKHCLHCE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JMIPELIDOIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JMIPELIDOIJ*>**)UnitySDK::FromName("", "JMIPELIDOIJ")->GetStaticField(0x650C0);
		}

		// static const ::System::Object CPHNGFPDBPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JMIPELIDOIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMIPELIDOIJ*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMIPELIDOIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JMIPELIDOIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JMIPELIDOIJ*>*(*)())((::PBYTE)hIl2Cpp + JMIPELIDOIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JMIPELIDOIJ* Clone()
		{
			return ((::JMIPELIDOIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JMIPELIDOIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JMIPELIDOIJ*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JMIPELIDOIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMIPELIDOIJ*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JMIPELIDOIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

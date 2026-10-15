#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMFMMKJOCNJ;
class LMKECAPDMAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMFMMKJOCNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BF2E0)
#define DMFMMKJOCNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF590)
#define DMFMMKJOCNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BEC10)
#define DMFMMKJOCNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BEB70)
#define DMFMMKJOCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BEB60)
#define DMFMMKJOCNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BEEC0)
#define DMFMMKJOCNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BED20)
#define DMFMMKJOCNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BF190)
#define DMFMMKJOCNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BEAF0)
#define DMFMMKJOCNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BF400)
#define DMFMMKJOCNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BF340)
#define DMFMMKJOCNJ_NCBNICHDJIA_OFFSET UNITYSDK_OFFSET(0x1E1BED00)
#define DMFMMKJOCNJ_ODPLELGONDF_OFFSET UNITYSDK_OFFSET(0x1E1BED10)
#define DMFMMKJOCNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BEB50)
#define DMFMMKJOCNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BF1F0)
#define DMFMMKJOCNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BF250)

inline static constexpr unsigned int DMFMMKJOCNJ_TypeDefinitionIndex = 34766;

	class DMFMMKJOCNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LMKECAPDMAC* CKONENHMBIP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DMFMMKJOCNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DMFMMKJOCNJ*>**)UnitySDK::FromName("", "DMFMMKJOCNJ")->GetStaticField(0x36060);
		}

		// static const ::System::Object LIFLPIKMMHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMFMMKJOCNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMFMMKJOCNJ*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DMFMMKJOCNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DMFMMKJOCNJ*>*(*)())((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMFMMKJOCNJ* Clone()
		{
			return ((::DMFMMKJOCNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_CLONE_OFFSET))(this);
		}

		::LMKECAPDMAC* NCBNICHDJIA()
		{
			return ((::LMKECAPDMAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_NCBNICHDJIA_OFFSET))(this);
		}

		::System::Void ODPLELGONDF(::LMKECAPDMAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKECAPDMAC*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_ODPLELGONDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMFMMKJOCNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMFMMKJOCNJ*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMFMMKJOCNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMFMMKJOCNJ*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMFMMKJOCNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

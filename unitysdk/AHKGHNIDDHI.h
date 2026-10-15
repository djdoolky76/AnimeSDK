#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKGHNIDDHI;
class KCDHBIEAFDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHKGHNIDDHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E273380)
#define AHKGHNIDDHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E273720)
#define AHKGHNIDDHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E272D40)
#define AHKGHNIDDHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E272CB0)
#define AHKGHNIDDHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E272CA0)
#define AHKGHNIDDHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E272F70)
#define AHKGHNIDDHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E272E00)
#define AHKGHNIDDHI_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1E272DF0)
#define AHKGHNIDDHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E273240)
#define AHKGHNIDDHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E272C60)
#define AHKGHNIDDHI_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1E272DE0)
#define AHKGHNIDDHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E273500)
#define AHKGHNIDDHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2733E0)
#define AHKGHNIDDHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E272C90)
#define AHKGHNIDDHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E273290)
#define AHKGHNIDDHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2732F0)

inline static constexpr unsigned int AHKGHNIDDHI_TypeDefinitionIndex = 32589;

	class AHKGHNIDDHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KCDHBIEAFDE* MGBEADJIBJM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AHKGHNIDDHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHKGHNIDDHI*>**)UnitySDK::FromName("", "AHKGHNIDDHI")->GetStaticField(0x31FA0);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHKGHNIDDHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKGHNIDDHI*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKGHNIDDHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHKGHNIDDHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHKGHNIDDHI*>*(*)())((::PBYTE)hIl2Cpp + AHKGHNIDDHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHKGHNIDDHI* Clone()
		{
			return ((::AHKGHNIDDHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_CLONE_OFFSET))(this);
		}

		::KCDHBIEAFDE* LHJEMKJFLJK()
		{
			return ((::KCDHBIEAFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::KCDHBIEAFDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCDHBIEAFDE*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHKGHNIDDHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHKGHNIDDHI*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHKGHNIDDHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKGHNIDDHI*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHKGHNIDDHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

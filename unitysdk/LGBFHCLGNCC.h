#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAKMCIJFCB;
class LGBFHCLGNCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGBFHCLGNCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAB6AE0)
#define LGBFHCLGNCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAB6DC0)
#define LGBFHCLGNCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAB64C0)
#define LGBFHCLGNCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAB6450)
#define LGBFHCLGNCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB6440)
#define LGBFHCLGNCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAB66D0)
#define LGBFHCLGNCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAB6560)
#define LGBFHCLGNCC_FIDDFCKIPBO_OFFSET UNITYSDK_OFFSET(0x1FAB6550)
#define LGBFHCLGNCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAB69A0)
#define LGBFHCLGNCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAB6400)
#define LGBFHCLGNCC_KIIJMEIPKLE_OFFSET UNITYSDK_OFFSET(0x1FAB6540)
#define LGBFHCLGNCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAB6BF0)
#define LGBFHCLGNCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAB6B40)
#define LGBFHCLGNCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAB6430)
#define LGBFHCLGNCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAB69F0)
#define LGBFHCLGNCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAB6A50)

inline static constexpr unsigned int LGBFHCLGNCC_TypeDefinitionIndex = 35602;

	class LGBFHCLGNCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BFAKMCIJFCB* DFIPEOCEEKJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LGBFHCLGNCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGBFHCLGNCC*>**)UnitySDK::FromName("", "LGBFHCLGNCC")->GetStaticField(0x339E0);
		}

		// static const ::System::Object IFDGPJHCENL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGBFHCLGNCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBFHCLGNCC*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGBFHCLGNCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LGBFHCLGNCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGBFHCLGNCC*>*(*)())((::PBYTE)hIl2Cpp + LGBFHCLGNCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGBFHCLGNCC* Clone()
		{
			return ((::LGBFHCLGNCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_CLONE_OFFSET))(this);
		}

		::BFAKMCIJFCB* KIIJMEIPKLE()
		{
			return ((::BFAKMCIJFCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_KIIJMEIPKLE_OFFSET))(this);
		}

		::System::Void FIDDFCKIPBO(::BFAKMCIJFCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAKMCIJFCB*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_FIDDFCKIPBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGBFHCLGNCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGBFHCLGNCC*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGBFHCLGNCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGBFHCLGNCC*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGBFHCLGNCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

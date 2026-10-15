#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJJJPBCNDCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJJJPBCNDCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E730FB0)
#define JJJJPBCNDCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E731210)
#define JJJJPBCNDCC_CGHAPGBFDGO_OFFSET UNITYSDK_OFFSET(0x1E730C20)
#define JJJJPBCNDCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E730BC0)
#define JJJJPBCNDCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E730B80)
#define JJJJPBCNDCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E730B70)
#define JJJJPBCNDCC_DENCEOPOIDI_OFFSET UNITYSDK_OFFSET(0x1E730C10)
#define JJJJPBCNDCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E730D30)
#define JJJJPBCNDCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E730C50)
#define JJJJPBCNDCC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E730C40)
#define JJJJPBCNDCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E730E10)
#define JJJJPBCNDCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E730B30)
#define JJJJPBCNDCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E731090)
#define JJJJPBCNDCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E731050)
#define JJJJPBCNDCC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E730C30)
#define JJJJPBCNDCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E730B60)
#define JJJJPBCNDCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E730E40)
#define JJJJPBCNDCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E730EA0)

inline static constexpr unsigned int JJJJPBCNDCC_TypeDefinitionIndex = 29033;

	class JJJJPBCNDCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean AKKFIMGPOAA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JJJJPBCNDCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJJJPBCNDCC*>**)UnitySDK::FromName("", "JJJJPBCNDCC")->GetStaticField(0x629E0);
		}

		// static const ::System::Object KEKEBGBCPPH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJJJPBCNDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJJJPBCNDCC*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJJJPBCNDCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJJJPBCNDCC*>*(*)())((::PBYTE)hIl2Cpp + JJJJPBCNDCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJJJPBCNDCC* Clone()
		{
			return ((::JJJJPBCNDCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CLONE_OFFSET))(this);
		}

		::System::Boolean DENCEOPOIDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_DENCEOPOIDI_OFFSET))(this);
		}

		::System::Void CGHAPGBFDGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CGHAPGBFDGO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJJJPBCNDCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJJJPBCNDCC*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJJJPBCNDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJJJPBCNDCC*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJJJPBCNDCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

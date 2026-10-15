#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKMGCKMNNA;
class HACIGDEEMCJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HACIGDEEMCJ_BCOBHJJAHEH_OFFSET UNITYSDK_OFFSET(0x1E501C60)
#define HACIGDEEMCJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E502230)
#define HACIGDEEMCJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5024D0)
#define HACIGDEEMCJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E501B70)
#define HACIGDEEMCJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E501AE0)
#define HACIGDEEMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E501AD0)
#define HACIGDEEMCJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E501E10)
#define HACIGDEEMCJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E501C70)
#define HACIGDEEMCJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5020E0)
#define HACIGDEEMCJ_JEEJHNPCGIM_OFFSET UNITYSDK_OFFSET(0x1E501C50)
#define HACIGDEEMCJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E501A60)
#define HACIGDEEMCJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E502340)
#define HACIGDEEMCJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E502290)
#define HACIGDEEMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E501AC0)
#define HACIGDEEMCJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E502140)
#define HACIGDEEMCJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5021A0)

inline static constexpr unsigned int HACIGDEEMCJ_TypeDefinitionIndex = 28333;

	class HACIGDEEMCJ : public ::System::Object
	{
	public:
		::FJKMGCKMNNA* DPOCEKNIHPE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HACIGDEEMCJ")->GetStaticField(0x2C5F0);
		}

		// static const ::System::Object ANCFMHMKMBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HACIGDEEMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HACIGDEEMCJ*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HACIGDEEMCJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HACIGDEEMCJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HACIGDEEMCJ* Clone()
		{
			return ((::HACIGDEEMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_CLONE_OFFSET))(this);
		}

		::FJKMGCKMNNA* JEEJHNPCGIM()
		{
			return ((::FJKMGCKMNNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_JEEJHNPCGIM_OFFSET))(this);
		}

		::System::Void BCOBHJJAHEH(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_BCOBHJJAHEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HACIGDEEMCJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HACIGDEEMCJ*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HACIGDEEMCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HACIGDEEMCJ*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HACIGDEEMCJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

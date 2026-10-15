#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBAKHMJIAEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LBAKHMJIAEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A86F0)
#define LBAKHMJIAEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8910)
#define LBAKHMJIAEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A8340)
#define LBAKHMJIAEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A8310)
#define LBAKHMJIAEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A8300)
#define LBAKHMJIAEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A8470)
#define LBAKHMJIAEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A83A0)
#define LBAKHMJIAEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A85E0)
#define LBAKHMJIAEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A82C0)
#define LBAKHMJIAEC_JPBKDLBPKKK_OFFSET UNITYSDK_OFFSET(0x1E8A8390)
#define LBAKHMJIAEC_MBAJMGCICMJ_OFFSET UNITYSDK_OFFSET(0x1E8A8380)
#define LBAKHMJIAEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A87B0)
#define LBAKHMJIAEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A8780)
#define LBAKHMJIAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A82F0)
#define LBAKHMJIAEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A8610)
#define LBAKHMJIAEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A8670)

inline static constexpr unsigned int LBAKHMJIAEC_TypeDefinitionIndex = 27435;

	class LBAKHMJIAEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJGHODIGFNF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LBAKHMJIAEC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LBAKHMJIAEC*>**)UnitySDK::FromName("", "LBAKHMJIAEC")->GetStaticField(0x25370);
		}

		// static const ::System::Object KJIEHNPKFEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LBAKHMJIAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LBAKHMJIAEC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LBAKHMJIAEC*>*(*)())((::PBYTE)hIl2Cpp + LBAKHMJIAEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LBAKHMJIAEC* Clone()
		{
			return ((::LBAKHMJIAEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBAJMGCICMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MBAJMGCICMJ_OFFSET))(this);
		}

		::System::Void JPBKDLBPKKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_JPBKDLBPKKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LBAKHMJIAEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LBAKHMJIAEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAKHMJIAEC*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LBAKHMJIAEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

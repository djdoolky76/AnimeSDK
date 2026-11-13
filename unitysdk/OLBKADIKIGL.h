#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLNFNACOFFF;
class OLBKADIKIGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLBKADIKIGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD636E0)
#define OLBKADIKIGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD63A40)
#define OLBKADIKIGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD63040)
#define OLBKADIKIGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD62FB0)
#define OLBKADIKIGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD62FA0)
#define OLBKADIKIGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD632D0)
#define OLBKADIKIGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD63130)
#define OLBKADIKIGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD635A0)
#define OLBKADIKIGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD62F30)
#define OLBKADIKIGL_KKGGPGIKGCJ_OFFSET UNITYSDK_OFFSET(0x1FD63110)
#define OLBKADIKIGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD63840)
#define OLBKADIKIGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD63740)
#define OLBKADIKIGL_NABLONFJGKA_OFFSET UNITYSDK_OFFSET(0x1FD63120)
#define OLBKADIKIGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD62F90)
#define OLBKADIKIGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD635F0)
#define OLBKADIKIGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD63650)

inline static constexpr unsigned int OLBKADIKIGL_TypeDefinitionIndex = 35720;

	class OLBKADIKIGL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HLNFNACOFFF* PFHLPOOHFAC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OLBKADIKIGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLBKADIKIGL*>**)UnitySDK::FromName("", "OLBKADIKIGL")->GetStaticField(0x205D0);
		}

		// static const ::System::Object BNBFOJPGGJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLBKADIKIGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLBKADIKIGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLBKADIKIGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLBKADIKIGL*>*(*)())((::PBYTE)hIl2Cpp + OLBKADIKIGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLBKADIKIGL* Clone()
		{
			return ((::OLBKADIKIGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CLONE_OFFSET))(this);
		}

		::HLNFNACOFFF* KKGGPGIKGCJ()
		{
			return ((::HLNFNACOFFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_KKGGPGIKGCJ_OFFSET))(this);
		}

		::System::Void NABLONFJGKA(::HLNFNACOFFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNFNACOFFF*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_NABLONFJGKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLBKADIKIGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLBKADIKIGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLBKADIKIGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLBKADIKIGL*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLBKADIKIGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

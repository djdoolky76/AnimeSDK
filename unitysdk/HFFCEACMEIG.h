#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
class HFFCEACMEIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFFCEACMEIG_BGDEODOEPCK_OFFSET UNITYSDK_OFFSET(0x1F860DF0)
#define HFFCEACMEIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8613B0)
#define HFFCEACMEIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F861660)
#define HFFCEACMEIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F860D40)
#define HFFCEACMEIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F860CA0)
#define HFFCEACMEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F860C90)
#define HFFCEACMEIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F860F80)
#define HFFCEACMEIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F860E10)
#define HFFCEACMEIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F861250)
#define HFFCEACMEIG_IENELEDBGDH_OFFSET UNITYSDK_OFFSET(0x1F860E00)
#define HFFCEACMEIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F860C50)
#define HFFCEACMEIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8614D0)
#define HFFCEACMEIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F861410)
#define HFFCEACMEIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F860C80)
#define HFFCEACMEIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8612C0)
#define HFFCEACMEIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F861320)

inline static constexpr unsigned int HFFCEACMEIG_TypeDefinitionIndex = 32181;

	class HFFCEACMEIG : public ::System::Object
	{
	public:
		::BFBHKJLJJBJ* JPDGFFGLNIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFFCEACMEIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFFCEACMEIG*>**)UnitySDK::FromName("", "HFFCEACMEIG")->GetStaticField(0x2AB50);
		}

		// static const ::System::Object LDCMAAOCEGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFFCEACMEIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFFCEACMEIG*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFFCEACMEIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFFCEACMEIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFFCEACMEIG*>*(*)())((::PBYTE)hIl2Cpp + HFFCEACMEIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFFCEACMEIG* Clone()
		{
			return ((::HFFCEACMEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_CLONE_OFFSET))(this);
		}

		::BFBHKJLJJBJ* BGDEODOEPCK()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_BGDEODOEPCK_OFFSET))(this);
		}

		::System::Void IENELEDBGDH(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_IENELEDBGDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFFCEACMEIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFFCEACMEIG*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFCEACMEIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFFCEACMEIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFFCEACMEIG*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFFCEACMEIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

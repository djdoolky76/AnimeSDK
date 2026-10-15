#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPPACPMFDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PFPPACPMFDJ_BAGCCAKCIFD_OFFSET UNITYSDK_OFFSET(0x1DEFD8F0)
#define PFPPACPMFDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEFDCA0)
#define PFPPACPMFDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEFDFB0)
#define PFPPACPMFDJ_CFGFDLGNHHI_OFFSET UNITYSDK_OFFSET(0x1DEFD900)
#define PFPPACPMFDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEFD870)
#define PFPPACPMFDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEFD840)
#define PFPPACPMFDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEFD830)
#define PFPPACPMFDJ_ECNKCIHDAFP_OFFSET UNITYSDK_OFFSET(0x1DEFD910)
#define PFPPACPMFDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEFDA30)
#define PFPPACPMFDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEFD920)
#define PFPPACPMFDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEFDB00)
#define PFPPACPMFDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEFD7C0)
#define PFPPACPMFDJ_JJMMHAAPLCJ_OFFSET UNITYSDK_OFFSET(0x1DEFD8E0)
#define PFPPACPMFDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEFDE30)
#define PFPPACPMFDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEFDDF0)
#define PFPPACPMFDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEFD820)
#define PFPPACPMFDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEFDB30)
#define PFPPACPMFDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEFDB90)

inline static constexpr unsigned int PFPPACPMFDJ_TypeDefinitionIndex = 27053;

	class PFPPACPMFDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 EIKLKDGDLEG; // 0x18
		::System::Int32 KFNMMILCBFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PFPPACPMFDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PFPPACPMFDJ*>**)UnitySDK::FromName("", "PFPPACPMFDJ")->GetStaticField(0x322A0);
		}

		// static const ::System::Object OAPJNMPOKHB; // 0x0
		// static const ::System::Object PLAGKJDJGBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PFPPACPMFDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PFPPACPMFDJ*>*(*)())((::PBYTE)hIl2Cpp + PFPPACPMFDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PFPPACPMFDJ* Clone()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CLONE_OFFSET))(this);
		}

		::System::Int32 JJMMHAAPLCJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_JJMMHAAPLCJ_OFFSET))(this);
		}

		::System::Void BAGCCAKCIFD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_BAGCCAKCIFD_OFFSET))(this, a1);
		}

		::System::Int32 CFGFDLGNHHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CFGFDLGNHHI_OFFSET))(this);
		}

		::System::Void ECNKCIHDAFP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_ECNKCIHDAFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PFPPACPMFDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PFPPACPMFDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFPPACPMFDJ*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PFPPACPMFDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

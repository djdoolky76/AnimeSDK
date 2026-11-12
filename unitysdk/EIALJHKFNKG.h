#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EIALJHKFNKG;
class GCFGCHAMNOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EIALJHKFNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F587430)
#define EIALJHKFNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F587740)
#define EIALJHKFNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F586D30)
#define EIALJHKFNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F586CC0)
#define EIALJHKFNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F586CB0)
#define EIALJHKFNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F586F40)
#define EIALJHKFNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F586DD0)
#define EIALJHKFNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F587210)
#define EIALJHKFNKG_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1F586DB0)
#define EIALJHKFNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F586C70)
#define EIALJHKFNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F587570)
#define EIALJHKFNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F587490)
#define EIALJHKFNKG_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1F586DC0)
#define EIALJHKFNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F586CA0)
#define EIALJHKFNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F587340)
#define EIALJHKFNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5873A0)

inline static constexpr unsigned int EIALJHKFNKG_TypeDefinitionIndex = 28047;

	class EIALJHKFNKG : public ::System::Object
	{
	public:
		::GCFGCHAMNOL* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>**)UnitySDK::FromName("", "EIALJHKFNKG")->GetStaticField(0x42230);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EIALJHKFNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIALJHKFNKG*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EIALJHKFNKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>*(*)())((::PBYTE)hIl2Cpp + EIALJHKFNKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EIALJHKFNKG* Clone()
		{
			return ((::EIALJHKFNKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_CLONE_OFFSET))(this);
		}

		::GCFGCHAMNOL* JIFPIGBJFEH()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EIALJHKFNKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIALJHKFNKG*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIALJHKFNKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EIALJHKFNKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIALJHKFNKG*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EIALJHKFNKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

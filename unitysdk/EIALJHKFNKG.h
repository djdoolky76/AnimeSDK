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

#define EIALJHKFNKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E276CB0)
#define EIALJHKFNKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E276FC0)
#define EIALJHKFNKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2765B0)
#define EIALJHKFNKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E276540)
#define EIALJHKFNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E276530)
#define EIALJHKFNKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2767C0)
#define EIALJHKFNKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E276650)
#define EIALJHKFNKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E276A90)
#define EIALJHKFNKG_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E276630)
#define EIALJHKFNKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2764F0)
#define EIALJHKFNKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E276DF0)
#define EIALJHKFNKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E276D10)
#define EIALJHKFNKG_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E276640)
#define EIALJHKFNKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E276520)
#define EIALJHKFNKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E276BC0)
#define EIALJHKFNKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E276C20)

inline static constexpr unsigned int EIALJHKFNKG_TypeDefinitionIndex = 27516;

	class EIALJHKFNKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GCFGCHAMNOL* MNJNMPKLFAI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EIALJHKFNKG*>**)UnitySDK::FromName("", "EIALJHKFNKG")->GetStaticField(0x49B80);
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

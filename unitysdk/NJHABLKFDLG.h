#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHABLKFDLG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJHABLKFDLG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB10E70)
#define NJHABLKFDLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB10F10)
#define NJHABLKFDLG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB10B60)
#define NJHABLKFDLG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB10B30)
#define NJHABLKFDLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB10B20)
#define NJHABLKFDLG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB10C70)
#define NJHABLKFDLG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB10BA0)
#define NJHABLKFDLG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB10DD0)
#define NJHABLKFDLG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB10AE0)
#define NJHABLKFDLG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB10EC0)
#define NJHABLKFDLG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB10E90)
#define NJHABLKFDLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB10B10)
#define NJHABLKFDLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB10E00)
#define NJHABLKFDLG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB10E60)

inline static constexpr unsigned int NJHABLKFDLG_TypeDefinitionIndex = 28145;

	class NJHABLKFDLG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NJHABLKFDLG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJHABLKFDLG*>**)UnitySDK::FromName("", "NJHABLKFDLG")->GetStaticField(0x68920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJHABLKFDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHABLKFDLG*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHABLKFDLG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJHABLKFDLG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJHABLKFDLG*>*(*)())((::PBYTE)hIl2Cpp + NJHABLKFDLG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJHABLKFDLG* Clone()
		{
			return ((::NJHABLKFDLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJHABLKFDLG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJHABLKFDLG*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJHABLKFDLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJHABLKFDLG*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJHABLKFDLG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

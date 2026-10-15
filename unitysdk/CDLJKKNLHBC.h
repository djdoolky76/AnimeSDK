#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class CDLJKKNLHBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDLJKKNLHBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E088930)
#define CDLJKKNLHBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E088B90)
#define CDLJKKNLHBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E088560)
#define CDLJKKNLHBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E088530)
#define CDLJKKNLHBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E088520)
#define CDLJKKNLHBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E088690)
#define CDLJKKNLHBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0885C0)
#define CDLJKKNLHBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E088800)
#define CDLJKKNLHBC_HNIGPKEECAE_OFFSET UNITYSDK_OFFSET(0x1E0885B0)
#define CDLJKKNLHBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0884E0)
#define CDLJKKNLHBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E088A30)
#define CDLJKKNLHBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E088A00)
#define CDLJKKNLHBC_ODBCLGDKOFM_OFFSET UNITYSDK_OFFSET(0x1E0885A0)
#define CDLJKKNLHBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E088510)
#define CDLJKKNLHBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E088830)
#define CDLJKKNLHBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E088890)

inline static constexpr unsigned int CDLJKKNLHBC_TypeDefinitionIndex = 31299;

	class CDLJKKNLHBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FJPMJPEKLJL CIFEGFBGDNB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CDLJKKNLHBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDLJKKNLHBC*>**)UnitySDK::FromName("", "CDLJKKNLHBC")->GetStaticField(0xF800);
		}

		// static const ::System::Object EPHDHCDELFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDLJKKNLHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLJKKNLHBC*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDLJKKNLHBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDLJKKNLHBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDLJKKNLHBC*>*(*)())((::PBYTE)hIl2Cpp + CDLJKKNLHBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDLJKKNLHBC* Clone()
		{
			return ((::CDLJKKNLHBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_CLONE_OFFSET))(this);
		}

		::FJPMJPEKLJL ODBCLGDKOFM()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_ODBCLGDKOFM_OFFSET))(this);
		}

		::System::Void HNIGPKEECAE(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_HNIGPKEECAE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDLJKKNLHBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDLJKKNLHBC*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDLJKKNLHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDLJKKNLHBC*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDLJKKNLHBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

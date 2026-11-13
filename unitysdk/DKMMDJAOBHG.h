#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOIDGPICBOJ.h"
#include "unitysdk/System/Object.h"
class DKMMDJAOBHG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DKMMDJAOBHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB40F10)
#define DKMMDJAOBHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB41170)
#define DKMMDJAOBHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB40AE0)
#define DKMMDJAOBHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB40AB0)
#define DKMMDJAOBHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB40AA0)
#define DKMMDJAOBHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB40C70)
#define DKMMDJAOBHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB40B70)
#define DKMMDJAOBHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB40DE0)
#define DKMMDJAOBHG_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1FB40B60)
#define DKMMDJAOBHG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1FB40B50)
#define DKMMDJAOBHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB40A30)
#define DKMMDJAOBHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB41010)
#define DKMMDJAOBHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB40FE0)
#define DKMMDJAOBHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB40A90)
#define DKMMDJAOBHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB40E10)
#define DKMMDJAOBHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB40E70)

inline static constexpr unsigned int DKMMDJAOBHG_TypeDefinitionIndex = 30297;

	class DKMMDJAOBHG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HOIDGPICBOJ GMPNCOBOFDM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DKMMDJAOBHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DKMMDJAOBHG*>**)UnitySDK::FromName("", "DKMMDJAOBHG")->GetStaticField(0x2DC10);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DKMMDJAOBHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMMDJAOBHG*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKMMDJAOBHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DKMMDJAOBHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DKMMDJAOBHG*>*(*)())((::PBYTE)hIl2Cpp + DKMMDJAOBHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DKMMDJAOBHG* Clone()
		{
			return ((::DKMMDJAOBHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_CLONE_OFFSET))(this);
		}

		::HOIDGPICBOJ JBIOGKPHKKC()
		{
			return ((::HOIDGPICBOJ(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::HOIDGPICBOJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOIDGPICBOJ))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DKMMDJAOBHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DKMMDJAOBHG*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DKMMDJAOBHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKMMDJAOBHG*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DKMMDJAOBHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

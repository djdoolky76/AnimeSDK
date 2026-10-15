#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAIGBNOCJB;
class FOEPMKFEJMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFAIGBNOCJB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E34D0)
#define AFAIGBNOCJB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E37A0)
#define AFAIGBNOCJB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E2E60)
#define AFAIGBNOCJB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E2DF0)
#define AFAIGBNOCJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2DE0)
#define AFAIGBNOCJB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E3070)
#define AFAIGBNOCJB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E2F00)
#define AFAIGBNOCJB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E3340)
#define AFAIGBNOCJB_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E0E2EE0)
#define AFAIGBNOCJB_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E0E2EF0)
#define AFAIGBNOCJB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E2DA0)
#define AFAIGBNOCJB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E35D0)
#define AFAIGBNOCJB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E3530)
#define AFAIGBNOCJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2DD0)
#define AFAIGBNOCJB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E33E0)
#define AFAIGBNOCJB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E3440)

inline static constexpr unsigned int AFAIGBNOCJB_TypeDefinitionIndex = 26021;

	class AFAIGBNOCJB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FOEPMKFEJMK* JEFEMOPFJOP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AFAIGBNOCJB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFAIGBNOCJB*>**)UnitySDK::FromName("", "AFAIGBNOCJB")->GetStaticField(0x34AC0);
		}

		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFAIGBNOCJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAIGBNOCJB*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAIGBNOCJB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFAIGBNOCJB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFAIGBNOCJB*>*(*)())((::PBYTE)hIl2Cpp + AFAIGBNOCJB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFAIGBNOCJB* Clone()
		{
			return ((::AFAIGBNOCJB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_CLONE_OFFSET))(this);
		}

		::FOEPMKFEJMK* GLPCHDFCIJF()
		{
			return ((::FOEPMKFEJMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::FOEPMKFEJMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOEPMKFEJMK*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFAIGBNOCJB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFAIGBNOCJB*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFAIGBNOCJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAIGBNOCJB*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFAIGBNOCJB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

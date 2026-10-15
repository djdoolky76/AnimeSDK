#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGGPKPPBGFP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGGPKPPBGFP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E54CFA0)
#define HGGPKPPBGFP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54D1C0)
#define HGGPKPPBGFP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E54CBF0)
#define HGGPKPPBGFP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E54CBC0)
#define HGGPKPPBGFP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54CBB0)
#define HGGPKPPBGFP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E54CD20)
#define HGGPKPPBGFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E54CC50)
#define HGGPKPPBGFP_GCEDINOHBMI_OFFSET UNITYSDK_OFFSET(0x1E54CC40)
#define HGGPKPPBGFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E54CE90)
#define HGGPKPPBGFP_HCOCOFBJDGD_OFFSET UNITYSDK_OFFSET(0x1E54CC30)
#define HGGPKPPBGFP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E54CB70)
#define HGGPKPPBGFP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E54D060)
#define HGGPKPPBGFP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E54D030)
#define HGGPKPPBGFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E54CBA0)
#define HGGPKPPBGFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E54CEC0)
#define HGGPKPPBGFP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E54CF20)

inline static constexpr unsigned int HGGPKPPBGFP_TypeDefinitionIndex = 33649;

	class HGGPKPPBGFP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LGGGFOFAEMI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HGGPKPPBGFP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HGGPKPPBGFP*>**)UnitySDK::FromName("", "HGGPKPPBGFP")->GetStaticField(0x30F80);
		}

		// static const ::System::Object KCFCGOLNMMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGGPKPPBGFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGGPKPPBGFP*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGGPKPPBGFP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HGGPKPPBGFP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HGGPKPPBGFP*>*(*)())((::PBYTE)hIl2Cpp + HGGPKPPBGFP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGGPKPPBGFP* Clone()
		{
			return ((::HGGPKPPBGFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOCOFBJDGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_HCOCOFBJDGD_OFFSET))(this);
		}

		::System::Void GCEDINOHBMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_GCEDINOHBMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGGPKPPBGFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGGPKPPBGFP*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGGPKPPBGFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGGPKPPBGFP*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGGPKPPBGFP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

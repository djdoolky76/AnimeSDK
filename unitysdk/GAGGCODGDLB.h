#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAGGCODGDLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAGGCODGDLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EE3A0)
#define GAGGCODGDLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EE6D0)
#define GAGGCODGDLB_CKOOKJLIKOO_OFFSET UNITYSDK_OFFSET(0x1E3EE040)
#define GAGGCODGDLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3EDFE0)
#define GAGGCODGDLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3EDFA0)
#define GAGGCODGDLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EDF90)
#define GAGGCODGDLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EE150)
#define GAGGCODGDLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3EE070)
#define GAGGCODGDLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EE220)
#define GAGGCODGDLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3EDF50)
#define GAGGCODGDLB_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E3EE060)
#define GAGGCODGDLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EE550)
#define GAGGCODGDLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EE510)
#define GAGGCODGDLB_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E3EE050)
#define GAGGCODGDLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3EDF80)
#define GAGGCODGDLB_PFHBBIGAGEE_OFFSET UNITYSDK_OFFSET(0x1E3EE030)
#define GAGGCODGDLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EE260)
#define GAGGCODGDLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EE2C0)

inline static constexpr unsigned int GAGGCODGDLB_TypeDefinitionIndex = 34734;

	class GAGGCODGDLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 HHCEMNIBHIE; // 0x18
		::System::UInt32 KNKNLKGEGFF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GAGGCODGDLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAGGCODGDLB*>**)UnitySDK::FromName("", "GAGGCODGDLB")->GetStaticField(0x2C00);
		}

		// static const ::System::Object LGPFCKMAEGA; // 0x0
		// static const ::System::Object BDDGFOPHBML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAGGCODGDLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAGGCODGDLB*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAGGCODGDLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAGGCODGDLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAGGCODGDLB*>*(*)())((::PBYTE)hIl2Cpp + GAGGCODGDLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAGGCODGDLB* Clone()
		{
			return ((::GAGGCODGDLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 PFHBBIGAGEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_PFHBBIGAGEE_OFFSET))(this);
		}

		::System::Void CKOOKJLIKOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAGGCODGDLB_CKOOKJLIKOO_OFFSET))(this, a1);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GAGGCODGDLB_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAGGCODGDLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAGGCODGDLB*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGGCODGDLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAGGCODGDLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAGGCODGDLB*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAGGCODGDLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

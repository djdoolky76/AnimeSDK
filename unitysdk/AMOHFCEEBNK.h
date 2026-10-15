#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMOHFCEEBNK;
class FGGJCLDLMMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMOHFCEEBNK_AEBCNLILLPL_OFFSET UNITYSDK_OFFSET(0x1E526780)
#define AMOHFCEEBNK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E526E00)
#define AMOHFCEEBNK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E527140)
#define AMOHFCEEBNK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5266E0)
#define AMOHFCEEBNK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E526650)
#define AMOHFCEEBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E526640)
#define AMOHFCEEBNK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E526910)
#define AMOHFCEEBNK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5267A0)
#define AMOHFCEEBNK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E526BE0)
#define AMOHFCEEBNK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E526600)
#define AMOHFCEEBNK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E526F70)
#define AMOHFCEEBNK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E526E60)
#define AMOHFCEEBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E526630)
#define AMOHFCEEBNK_PKAIIIFPHCP_OFFSET UNITYSDK_OFFSET(0x1E526790)
#define AMOHFCEEBNK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E526D10)
#define AMOHFCEEBNK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E526D70)

inline static constexpr unsigned int AMOHFCEEBNK_TypeDefinitionIndex = 33662;

	class AMOHFCEEBNK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FGGJCLDLMMI* GFCKHKCHJMB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AMOHFCEEBNK")->GetStaticField(0x3D0E0);
		}

		// static const ::System::Object FLCLBJDAKBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMOHFCEEBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AMOHFCEEBNK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMOHFCEEBNK* Clone()
		{
			return ((::AMOHFCEEBNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CLONE_OFFSET))(this);
		}

		::FGGJCLDLMMI* AEBCNLILLPL()
		{
			return ((::FGGJCLDLMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_AEBCNLILLPL_OFFSET))(this);
		}

		::System::Void PKAIIIFPHCP(::FGGJCLDLMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGGJCLDLMMI*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_PKAIIIFPHCP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMOHFCEEBNK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMOHFCEEBNK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMOHFCEEBNK*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMOHFCEEBNK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LODKEPFLBKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LODKEPFLBKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9BA550)
#define LODKEPFLBKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA770)
#define LODKEPFLBKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9BA1A0)
#define LODKEPFLBKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9BA170)
#define LODKEPFLBKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA160)
#define LODKEPFLBKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9BA2D0)
#define LODKEPFLBKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9BA200)
#define LODKEPFLBKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9BA440)
#define LODKEPFLBKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9BA120)
#define LODKEPFLBKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9BA610)
#define LODKEPFLBKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9BA5E0)
#define LODKEPFLBKK_OCCODICHMFF_OFFSET UNITYSDK_OFFSET(0x1E9BA1E0)
#define LODKEPFLBKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA150)
#define LODKEPFLBKK_PCANKGEKAMO_OFFSET UNITYSDK_OFFSET(0x1E9BA1F0)
#define LODKEPFLBKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9BA470)
#define LODKEPFLBKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9BA4D0)

inline static constexpr unsigned int LODKEPFLBKK_TypeDefinitionIndex = 32253;

	class LODKEPFLBKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OFIAKBFDDFB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LODKEPFLBKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LODKEPFLBKK*>**)UnitySDK::FromName("", "LODKEPFLBKK")->GetStaticField(0x51220);
		}

		// static const ::System::Object NPDDCGCNJCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LODKEPFLBKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LODKEPFLBKK*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LODKEPFLBKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LODKEPFLBKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LODKEPFLBKK*>*(*)())((::PBYTE)hIl2Cpp + LODKEPFLBKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LODKEPFLBKK* Clone()
		{
			return ((::LODKEPFLBKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCCODICHMFF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_OCCODICHMFF_OFFSET))(this);
		}

		::System::Void PCANKGEKAMO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LODKEPFLBKK_PCANKGEKAMO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LODKEPFLBKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LODKEPFLBKK*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LODKEPFLBKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LODKEPFLBKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LODKEPFLBKK*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LODKEPFLBKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

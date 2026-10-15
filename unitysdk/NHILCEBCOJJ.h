#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHILCEBCOJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHILCEBCOJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF18A0)
#define NHILCEBCOJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF1AC0)
#define NHILCEBCOJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF14F0)
#define NHILCEBCOJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF14C0)
#define NHILCEBCOJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF14B0)
#define NHILCEBCOJJ_EHGANCBJNIJ_OFFSET UNITYSDK_OFFSET(0x1EAF1530)
#define NHILCEBCOJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF1620)
#define NHILCEBCOJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF1550)
#define NHILCEBCOJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF1790)
#define NHILCEBCOJJ_GNGJNPAHOCH_OFFSET UNITYSDK_OFFSET(0x1EAF1540)
#define NHILCEBCOJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF1470)
#define NHILCEBCOJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF1960)
#define NHILCEBCOJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF1930)
#define NHILCEBCOJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF14A0)
#define NHILCEBCOJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF17C0)
#define NHILCEBCOJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF1820)

inline static constexpr unsigned int NHILCEBCOJJ_TypeDefinitionIndex = 27407;

	class NHILCEBCOJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLMPJIMKAAG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NHILCEBCOJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHILCEBCOJJ*>**)UnitySDK::FromName("", "NHILCEBCOJJ")->GetStaticField(0x64C40);
		}

		// static const ::System::Object CPHJPMIMLOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHILCEBCOJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHILCEBCOJJ*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHILCEBCOJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHILCEBCOJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHILCEBCOJJ*>*(*)())((::PBYTE)hIl2Cpp + NHILCEBCOJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHILCEBCOJJ* Clone()
		{
			return ((::NHILCEBCOJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHGANCBJNIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_EHGANCBJNIJ_OFFSET))(this);
		}

		::System::Void GNGJNPAHOCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_GNGJNPAHOCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHILCEBCOJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHILCEBCOJJ*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHILCEBCOJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHILCEBCOJJ*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHILCEBCOJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

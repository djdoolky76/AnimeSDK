#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHKLAFACIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLHKLAFACIJ_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E74C880)
#define JLHKLAFACIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E74CBB0)
#define JLHKLAFACIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74CE80)
#define JLHKLAFACIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E74C800)
#define JLHKLAFACIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E74C7D0)
#define JLHKLAFACIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74C7C0)
#define JLHKLAFACIJ_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E74C870)
#define JLHKLAFACIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E74C970)
#define JLHKLAFACIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E74C890)
#define JLHKLAFACIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E74CA40)
#define JLHKLAFACIJ_IENMFHALCIC_OFFSET UNITYSDK_OFFSET(0x1E74C860)
#define JLHKLAFACIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E74C780)
#define JLHKLAFACIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E74CD00)
#define JLHKLAFACIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E74CCC0)
#define JLHKLAFACIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E74C7B0)
#define JLHKLAFACIJ_POKCANMKPBC_OFFSET UNITYSDK_OFFSET(0x1E74C850)
#define JLHKLAFACIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E74CA70)
#define JLHKLAFACIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E74CAD0)

inline static constexpr unsigned int JLHKLAFACIJ_TypeDefinitionIndex = 26070;

	class JLHKLAFACIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PLKGEBACJMA; // 0x18
		::System::UInt32 CLHJJFPJKJN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JLHKLAFACIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLHKLAFACIJ*>**)UnitySDK::FromName("", "JLHKLAFACIJ")->GetStaticField(0x64480);
		}

		// static const ::System::Object CPFEBLJMAIC; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLHKLAFACIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHKLAFACIJ*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHKLAFACIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLHKLAFACIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLHKLAFACIJ*>*(*)())((::PBYTE)hIl2Cpp + JLHKLAFACIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLHKLAFACIJ* Clone()
		{
			return ((::JLHKLAFACIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 POKCANMKPBC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_POKCANMKPBC_OFFSET))(this);
		}

		::System::Void IENMFHALCIC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_IENMFHALCIC_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLHKLAFACIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLHKLAFACIJ*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLHKLAFACIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLHKLAFACIJ*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLHKLAFACIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

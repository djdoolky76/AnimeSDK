#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDGEHPFOKBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDGEHPFOKBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F385090)
#define EDGEHPFOKBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F385360)
#define EDGEHPFOKBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F384C90)
#define EDGEHPFOKBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F384C60)
#define EDGEHPFOKBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F384C50)
#define EDGEHPFOKBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F384E50)
#define EDGEHPFOKBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F384D40)
#define EDGEHPFOKBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F384F20)
#define EDGEHPFOKBH_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1F384D20)
#define EDGEHPFOKBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F384BE0)
#define EDGEHPFOKBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3851E0)
#define EDGEHPFOKBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3851A0)
#define EDGEHPFOKBH_OIDBNFKPPAN_OFFSET UNITYSDK_OFFSET(0x1F384D00)
#define EDGEHPFOKBH_OJJKLJICBHI_OFFSET UNITYSDK_OFFSET(0x1F384D10)
#define EDGEHPFOKBH_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1F384D30)
#define EDGEHPFOKBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F384C40)
#define EDGEHPFOKBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F384F50)
#define EDGEHPFOKBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F384FB0)

inline static constexpr unsigned int EDGEHPFOKBH_TypeDefinitionIndex = 32106;

	class EDGEHPFOKBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHHANCNMDMA; // 0x18
		::System::UInt32 PHKKOANNCJP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EDGEHPFOKBH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EDGEHPFOKBH*>**)UnitySDK::FromName("", "EDGEHPFOKBH")->GetStaticField(0x45B80);
		}

		// static const ::System::Object LOEKIAMEFEG; // 0x0
		// static const ::System::Object FCLKOFBAFMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDGEHPFOKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDGEHPFOKBH*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDGEHPFOKBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EDGEHPFOKBH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EDGEHPFOKBH*>*(*)())((::PBYTE)hIl2Cpp + EDGEHPFOKBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDGEHPFOKBH* Clone()
		{
			return ((::EDGEHPFOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OIDBNFKPPAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_OIDBNFKPPAN_OFFSET))(this);
		}

		::System::Void OJJKLJICBHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_OJJKLJICBHI_OFFSET))(this, a1);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDGEHPFOKBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDGEHPFOKBH*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDGEHPFOKBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDGEHPFOKBH*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDGEHPFOKBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDEOLCNPBPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDEOLCNPBPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E8020)
#define BDEOLCNPBPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E82F0)
#define BDEOLCNPBPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E7C20)
#define BDEOLCNPBPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E7BF0)
#define BDEOLCNPBPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E7BE0)
#define BDEOLCNPBPP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E8E7C90)
#define BDEOLCNPBPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E7DE0)
#define BDEOLCNPBPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E7CD0)
#define BDEOLCNPBPP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E8E7CA0)
#define BDEOLCNPBPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E7EB0)
#define BDEOLCNPBPP_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1E8E7CB0)
#define BDEOLCNPBPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E7B70)
#define BDEOLCNPBPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E8170)
#define BDEOLCNPBPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E8130)
#define BDEOLCNPBPP_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1E8E7CC0)
#define BDEOLCNPBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E7BD0)
#define BDEOLCNPBPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E7EE0)
#define BDEOLCNPBPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E7F40)

inline static constexpr unsigned int BDEOLCNPBPP_TypeDefinitionIndex = 31491;

	class BDEOLCNPBPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHHANCNMDMA; // 0x18
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BDEOLCNPBPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDEOLCNPBPP*>**)UnitySDK::FromName("", "BDEOLCNPBPP")->GetStaticField(0x1A7A0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object FCLKOFBAFMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDEOLCNPBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDEOLCNPBPP*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDEOLCNPBPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDEOLCNPBPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDEOLCNPBPP*>*(*)())((::PBYTE)hIl2Cpp + BDEOLCNPBPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDEOLCNPBPP* Clone()
		{
			return ((::BDEOLCNPBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDEOLCNPBPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDEOLCNPBPP*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDEOLCNPBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDEOLCNPBPP*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDEOLCNPBPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

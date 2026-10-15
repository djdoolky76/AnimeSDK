#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGOKHFLMLNJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGOKHFLMLNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAE9EE0)
#define NGOKHFLMLNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEA100)
#define NGOKHFLMLNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAE9B30)
#define NGOKHFLMLNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAE9B00)
#define NGOKHFLMLNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9AF0)
#define NGOKHFLMLNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAE9C60)
#define NGOKHFLMLNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAE9B90)
#define NGOKHFLMLNJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAE9B80)
#define NGOKHFLMLNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAE9DD0)
#define NGOKHFLMLNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAE9AB0)
#define NGOKHFLMLNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAE9FA0)
#define NGOKHFLMLNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAE9F70)
#define NGOKHFLMLNJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAE9B70)
#define NGOKHFLMLNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAE9AE0)
#define NGOKHFLMLNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAE9E00)
#define NGOKHFLMLNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAE9E60)

inline static constexpr unsigned int NGOKHFLMLNJ_TypeDefinitionIndex = 26284;

	class NGOKHFLMLNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NGOKHFLMLNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGOKHFLMLNJ*>**)UnitySDK::FromName("", "NGOKHFLMLNJ")->GetStaticField(0x64570);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGOKHFLMLNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOKHFLMLNJ*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGOKHFLMLNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGOKHFLMLNJ*>*(*)())((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGOKHFLMLNJ* Clone()
		{
			return ((::NGOKHFLMLNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGOKHFLMLNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGOKHFLMLNJ*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGOKHFLMLNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGOKHFLMLNJ*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGOKHFLMLNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

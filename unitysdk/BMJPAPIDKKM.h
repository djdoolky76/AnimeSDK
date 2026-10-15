#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJPAPIDKKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMJPAPIDKKM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E029A30)
#define BMJPAPIDKKM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E029A40)
#define BMJPAPIDKKM_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1E029A60)
#define BMJPAPIDKKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E029D90)
#define BMJPAPIDKKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02A060)
#define BMJPAPIDKKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0299E0)
#define BMJPAPIDKKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0299B0)
#define BMJPAPIDKKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0299A0)
#define BMJPAPIDKKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E029B50)
#define BMJPAPIDKKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E029A70)
#define BMJPAPIDKKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E029C20)
#define BMJPAPIDKKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E029960)
#define BMJPAPIDKKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E029EE0)
#define BMJPAPIDKKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E029EA0)
#define BMJPAPIDKKM_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1E029A50)
#define BMJPAPIDKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E029990)
#define BMJPAPIDKKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E029C50)
#define BMJPAPIDKKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E029CB0)

inline static constexpr unsigned int BMJPAPIDKKM_TypeDefinitionIndex = 32176;

	class BMJPAPIDKKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 KLINKNMHOCI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BMJPAPIDKKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMJPAPIDKKM*>**)UnitySDK::FromName("", "BMJPAPIDKKM")->GetStaticField(0x15320);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMJPAPIDKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJPAPIDKKM*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJPAPIDKKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMJPAPIDKKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMJPAPIDKKM*>*(*)())((::PBYTE)hIl2Cpp + BMJPAPIDKKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMJPAPIDKKM* Clone()
		{
			return ((::BMJPAPIDKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMJPAPIDKKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMJPAPIDKKM*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMJPAPIDKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJPAPIDKKM*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMJPAPIDKKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

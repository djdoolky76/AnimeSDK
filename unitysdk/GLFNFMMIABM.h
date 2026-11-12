#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLFNFMMIABM;
class OADGBFHDCDE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLFNFMMIABM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7B1B80)
#define GLFNFMMIABM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7B1EA0)
#define GLFNFMMIABM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7B1640)
#define GLFNFMMIABM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7B15D0)
#define GLFNFMMIABM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B15C0)
#define GLFNFMMIABM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7B1880)
#define GLFNFMMIABM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7B1700)
#define GLFNFMMIABM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F7B16D0)
#define GLFNFMMIABM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7B1A00)
#define GLFNFMMIABM_HJIDELCFEPC_OFFSET UNITYSDK_OFFSET(0x1F7B16E0)
#define GLFNFMMIABM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7B1580)
#define GLFNFMMIABM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7B1CE0)
#define GLFNFMMIABM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7B1C50)
#define GLFNFMMIABM_NDDJJBHLIHD_OFFSET UNITYSDK_OFFSET(0x1F7B16F0)
#define GLFNFMMIABM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F7B16C0)
#define GLFNFMMIABM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7B15B0)
#define GLFNFMMIABM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7B1A40)
#define GLFNFMMIABM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7B1AA0)

inline static constexpr unsigned int GLFNFMMIABM_TypeDefinitionIndex = 26975;

	class GLFNFMMIABM : public ::System::Object
	{
	public:
		::OADGBFHDCDE* MHFLKIOBMLM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GLFNFMMIABM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLFNFMMIABM*>**)UnitySDK::FromName("", "GLFNFMMIABM")->GetStaticField(0x16390);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OPIJLDFEPEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLFNFMMIABM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLFNFMMIABM*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLFNFMMIABM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLFNFMMIABM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLFNFMMIABM*>*(*)())((::PBYTE)hIl2Cpp + GLFNFMMIABM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLFNFMMIABM* Clone()
		{
			return ((::GLFNFMMIABM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLFNFMMIABM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OADGBFHDCDE* HJIDELCFEPC()
		{
			return ((::OADGBFHDCDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_HJIDELCFEPC_OFFSET))(this);
		}

		::System::Void NDDJJBHLIHD(::OADGBFHDCDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OADGBFHDCDE*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_NDDJJBHLIHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLFNFMMIABM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLFNFMMIABM*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLFNFMMIABM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLFNFMMIABM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLFNFMMIABM*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLFNFMMIABM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

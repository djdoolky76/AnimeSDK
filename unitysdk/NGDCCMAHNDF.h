#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGDCCMAHNDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGDCCMAHNDF_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1EADE8A0)
#define NGDCCMAHNDF_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1EADE8D0)
#define NGDCCMAHNDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EADEC00)
#define NGDCCMAHNDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADEED0)
#define NGDCCMAHNDF_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1EADE8B0)
#define NGDCCMAHNDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EADE850)
#define NGDCCMAHNDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EADE820)
#define NGDCCMAHNDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EADE810)
#define NGDCCMAHNDF_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1EADE8C0)
#define NGDCCMAHNDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EADE9C0)
#define NGDCCMAHNDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EADE8E0)
#define NGDCCMAHNDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EADEA90)
#define NGDCCMAHNDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EADE7D0)
#define NGDCCMAHNDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EADED50)
#define NGDCCMAHNDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EADED10)
#define NGDCCMAHNDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EADE800)
#define NGDCCMAHNDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EADEAC0)
#define NGDCCMAHNDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EADEB20)

inline static constexpr unsigned int NGDCCMAHNDF_TypeDefinitionIndex = 32406;

	class NGDCCMAHNDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MGPCOLIAECE; // 0x18
		::System::UInt32 PLKGEBACJMA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NGDCCMAHNDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGDCCMAHNDF*>**)UnitySDK::FromName("", "NGDCCMAHNDF")->GetStaticField(0x638C0);
		}

		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGDCCMAHNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGDCCMAHNDF*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGDCCMAHNDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGDCCMAHNDF*>*(*)())((::PBYTE)hIl2Cpp + NGDCCMAHNDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGDCCMAHNDF* Clone()
		{
			return ((::NGDCCMAHNDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGDCCMAHNDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGDCCMAHNDF*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGDCCMAHNDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGDCCMAHNDF*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGDCCMAHNDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

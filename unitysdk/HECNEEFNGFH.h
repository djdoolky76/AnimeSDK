#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class HECNEEFNGFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HECNEEFNGFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F851370)
#define HECNEEFNGFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F851690)
#define HECNEEFNGFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F850DD0)
#define HECNEEFNGFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F850D60)
#define HECNEEFNGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F850D50)
#define HECNEEFNGFH_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1F850E50)
#define HECNEEFNGFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F851010)
#define HECNEEFNGFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F850E90)
#define HECNEEFNGFH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F850E80)
#define HECNEEFNGFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F851190)
#define HECNEEFNGFH_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1F850E60)
#define HECNEEFNGFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F850D10)
#define HECNEEFNGFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8514D0)
#define HECNEEFNGFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F851440)
#define HECNEEFNGFH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F850E70)
#define HECNEEFNGFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F850D40)
#define HECNEEFNGFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F851230)
#define HECNEEFNGFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F851290)

inline static constexpr unsigned int HECNEEFNGFH_TypeDefinitionIndex = 34757;

	class HECNEEFNGFH : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HECNEEFNGFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HECNEEFNGFH*>**)UnitySDK::FromName("", "HECNEEFNGFH")->GetStaticField(0x28060);
		}

		// static const ::System::Object EOPEFMJDFKC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HECNEEFNGFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HECNEEFNGFH*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HECNEEFNGFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HECNEEFNGFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HECNEEFNGFH*>*(*)())((::PBYTE)hIl2Cpp + HECNEEFNGFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HECNEEFNGFH* Clone()
		{
			return ((::HECNEEFNGFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HECNEEFNGFH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HECNEEFNGFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HECNEEFNGFH*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HECNEEFNGFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HECNEEFNGFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HECNEEFNGFH*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HECNEEFNGFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

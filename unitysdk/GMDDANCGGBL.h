#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDDANCGGBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMDDANCGGBL_AKLIFFDHHEE_OFFSET UNITYSDK_OFFSET(0x1E4A2690)
#define GMDDANCGGBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A29E0)
#define GMDDANCGGBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2CB0)
#define GMDDANCGGBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A2630)
#define GMDDANCGGBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A2600)
#define GMDDANCGGBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A25F0)
#define GMDDANCGGBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A27A0)
#define GMDDANCGGBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A26C0)
#define GMDDANCGGBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4A26B0)
#define GMDDANCGGBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A2870)
#define GMDDANCGGBL_JGIDGKIDPBM_OFFSET UNITYSDK_OFFSET(0x1E4A2680)
#define GMDDANCGGBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A25B0)
#define GMDDANCGGBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A2B30)
#define GMDDANCGGBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A2AF0)
#define GMDDANCGGBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4A26A0)
#define GMDDANCGGBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A25E0)
#define GMDDANCGGBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A28A0)
#define GMDDANCGGBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A2900)

inline static constexpr unsigned int GMDDANCGGBL_TypeDefinitionIndex = 28394;

	class GMDDANCGGBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 EFNAPDOPMKN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GMDDANCGGBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMDDANCGGBL*>**)UnitySDK::FromName("", "GMDDANCGGBL")->GetStaticField(0x1E670);
		}

		// static const ::System::Object EHBEPPKIOHA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMDDANCGGBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMDDANCGGBL*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDDANCGGBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMDDANCGGBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMDDANCGGBL*>*(*)())((::PBYTE)hIl2Cpp + GMDDANCGGBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMDDANCGGBL* Clone()
		{
			return ((::GMDDANCGGBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGIDGKIDPBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_JGIDGKIDPBM_OFFSET))(this);
		}

		::System::Void AKLIFFDHHEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMDDANCGGBL_AKLIFFDHHEE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMDDANCGGBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMDDANCGGBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMDDANCGGBL*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMDDANCGGBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMDDANCGGBL*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMDDANCGGBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

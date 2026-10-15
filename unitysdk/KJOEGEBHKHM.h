#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJOEGEBHKHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJOEGEBHKHM_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E871840)
#define KJOEGEBHKHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E871CA0)
#define KJOEGEBHKHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E871F80)
#define KJOEGEBHKHM_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E871850)
#define KJOEGEBHKHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8717C0)
#define KJOEGEBHKHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E871780)
#define KJOEGEBHKHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E871770)
#define KJOEGEBHKHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8719A0)
#define KJOEGEBHKHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8718A0)
#define KJOEGEBHKHM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E871830)
#define KJOEGEBHKHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E871AA0)
#define KJOEGEBHKHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E871730)
#define KJOEGEBHKHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E871DD0)
#define KJOEGEBHKHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E871D80)
#define KJOEGEBHKHM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E871820)
#define KJOEGEBHKHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E871760)
#define KJOEGEBHKHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E871B50)
#define KJOEGEBHKHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E871BB0)

inline static constexpr unsigned int KJOEGEBHKHM_TypeDefinitionIndex = 30950;

	class KJOEGEBHKHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* PDKNJCIEBHA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJOEGEBHKHM")->GetStaticField(0x1D210);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJOEGEBHKHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOEGEBHKHM*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJOEGEBHKHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJOEGEBHKHM* Clone()
		{
			return ((::KJOEGEBHKHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJOEGEBHKHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJOEGEBHKHM*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJOEGEBHKHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJOEGEBHKHM*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJOEGEBHKHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

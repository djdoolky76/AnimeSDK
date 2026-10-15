#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAHAOOJHJPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAHAOOJHJPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DE760)
#define KAHAOOJHJPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE980)
#define KAHAOOJHJPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7DE3B0)
#define KAHAOOJHJPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DE380)
#define KAHAOOJHJPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE370)
#define KAHAOOJHJPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7DE4E0)
#define KAHAOOJHJPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7DE410)
#define KAHAOOJHJPK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7DE400)
#define KAHAOOJHJPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DE650)
#define KAHAOOJHJPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7DE330)
#define KAHAOOJHJPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DE820)
#define KAHAOOJHJPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DE7F0)
#define KAHAOOJHJPK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7DE3F0)
#define KAHAOOJHJPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7DE360)
#define KAHAOOJHJPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DE680)
#define KAHAOOJHJPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DE6E0)

inline static constexpr unsigned int KAHAOOJHJPK_TypeDefinitionIndex = 29430;

	class KAHAOOJHJPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KAHAOOJHJPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAHAOOJHJPK*>**)UnitySDK::FromName("", "KAHAOOJHJPK")->GetStaticField(0xD750);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAHAOOJHJPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAHAOOJHJPK*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAHAOOJHJPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KAHAOOJHJPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAHAOOJHJPK*>*(*)())((::PBYTE)hIl2Cpp + KAHAOOJHJPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAHAOOJHJPK* Clone()
		{
			return ((::KAHAOOJHJPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAHAOOJHJPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAHAOOJHJPK*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAHAOOJHJPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAHAOOJHJPK*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAHAOOJHJPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBEBPGGIDCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBEBPGGIDCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6F45E0)
#define JBEBPGGIDCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6F4800)
#define JBEBPGGIDCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F4230)
#define JBEBPGGIDCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F4200)
#define JBEBPGGIDCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F41F0)
#define JBEBPGGIDCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F4360)
#define JBEBPGGIDCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F4290)
#define JBEBPGGIDCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6F4280)
#define JBEBPGGIDCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6F44D0)
#define JBEBPGGIDCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F41B0)
#define JBEBPGGIDCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6F46A0)
#define JBEBPGGIDCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6F4670)
#define JBEBPGGIDCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6F4270)
#define JBEBPGGIDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F41E0)
#define JBEBPGGIDCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6F4500)
#define JBEBPGGIDCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6F4560)

inline static constexpr unsigned int JBEBPGGIDCM_TypeDefinitionIndex = 28989;

	class JBEBPGGIDCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JBEBPGGIDCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBEBPGGIDCM*>**)UnitySDK::FromName("", "JBEBPGGIDCM")->GetStaticField(0x5C580);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBEBPGGIDCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBEBPGGIDCM*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBEBPGGIDCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBEBPGGIDCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBEBPGGIDCM*>*(*)())((::PBYTE)hIl2Cpp + JBEBPGGIDCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBEBPGGIDCM* Clone()
		{
			return ((::JBEBPGGIDCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBEBPGGIDCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBEBPGGIDCM*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBEBPGGIDCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBEBPGGIDCM*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBEBPGGIDCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

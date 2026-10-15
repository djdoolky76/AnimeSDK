#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCIPKHCJLBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCIPKHCJLBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E701200)
#define JCIPKHCJLBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E701420)
#define JCIPKHCJLBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E700E50)
#define JCIPKHCJLBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E700E20)
#define JCIPKHCJLBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E700E10)
#define JCIPKHCJLBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E700F80)
#define JCIPKHCJLBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E700EB0)
#define JCIPKHCJLBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E700EA0)
#define JCIPKHCJLBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7010F0)
#define JCIPKHCJLBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E700DD0)
#define JCIPKHCJLBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7012C0)
#define JCIPKHCJLBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E701290)
#define JCIPKHCJLBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E700E90)
#define JCIPKHCJLBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E700E00)
#define JCIPKHCJLBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E701120)
#define JCIPKHCJLBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E701180)

inline static constexpr unsigned int JCIPKHCJLBM_TypeDefinitionIndex = 30742;

	class JCIPKHCJLBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JCIPKHCJLBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCIPKHCJLBM*>**)UnitySDK::FromName("", "JCIPKHCJLBM")->GetStaticField(0x5D770);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCIPKHCJLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCIPKHCJLBM*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCIPKHCJLBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JCIPKHCJLBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCIPKHCJLBM*>*(*)())((::PBYTE)hIl2Cpp + JCIPKHCJLBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCIPKHCJLBM* Clone()
		{
			return ((::JCIPKHCJLBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCIPKHCJLBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCIPKHCJLBM*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCIPKHCJLBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCIPKHCJLBM*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCIPKHCJLBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

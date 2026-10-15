#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHPBJOMBCAD;
class NEJPAGJBMDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHPBJOMBCAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD0660)
#define BHPBJOMBCAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD0A00)
#define BHPBJOMBCAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD00E0)
#define BHPBJOMBCAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD0040)
#define BHPBJOMBCAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD0000)
#define BHPBJOMBCAD_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DDD0110)
#define BHPBJOMBCAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD02C0)
#define BHPBJOMBCAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD0160)
#define BHPBJOMBCAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD0400)
#define BHPBJOMBCAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDCFFC0)
#define BHPBJOMBCAD_LHOBOHHKHKN_OFFSET UNITYSDK_OFFSET(0x1DDD0140)
#define BHPBJOMBCAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD0820)
#define BHPBJOMBCAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD0770)
#define BHPBJOMBCAD_NJJPJAAPLNF_OFFSET UNITYSDK_OFFSET(0x1DDD0150)
#define BHPBJOMBCAD_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DDD0120)
#define BHPBJOMBCAD_OOJEIPOEALG_OFFSET UNITYSDK_OFFSET(0x1DDD0130)
#define BHPBJOMBCAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDCFFF0)
#define BHPBJOMBCAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD0470)
#define BHPBJOMBCAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD04D0)

inline static constexpr unsigned int BHPBJOMBCAD_TypeDefinitionIndex = 33443;

	class BHPBJOMBCAD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>* OIBJCELPBML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::Boolean PEODDLFBOMA; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::NEJPAGJBMDA*>** StaticGet_JLOMKHMIEGB()
		{
			return (::Google::Protobuf::FieldCodec_1<::NEJPAGJBMDA*>**)UnitySDK::FromName("", "BHPBJOMBCAD")->GetStaticField(0x38500);
		}

		static ::Google::Protobuf::MessageParser_1<::BHPBJOMBCAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BHPBJOMBCAD*>**)UnitySDK::FromName("", "BHPBJOMBCAD")->GetStaticField(0x38508);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object CJNBODFHAPO; // 0x0
		// static const ::System::Object JPENJEPFBNO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHPBJOMBCAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BHPBJOMBCAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BHPBJOMBCAD*>*(*)())((::PBYTE)hIl2Cpp + BHPBJOMBCAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHPBJOMBCAD* Clone()
		{
			return ((::BHPBJOMBCAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean OOJEIPOEALG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_OOJEIPOEALG_OFFSET))(this);
		}

		::System::Void LHOBOHHKHKN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_LHOBOHHKHKN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>* NJJPJAAPLNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NEJPAGJBMDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_NJJPJAAPLNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHPBJOMBCAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHPBJOMBCAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPBJOMBCAD*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHPBJOMBCAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

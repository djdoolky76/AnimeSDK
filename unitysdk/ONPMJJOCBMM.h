#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONPMJJOCBMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONPMJJOCBMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC397E0)
#define ONPMJJOCBMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC39AB0)
#define ONPMJJOCBMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC39430)
#define ONPMJJOCBMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC39400)
#define ONPMJJOCBMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC393F0)
#define ONPMJJOCBMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC395A0)
#define ONPMJJOCBMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC394C0)
#define ONPMJJOCBMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FC394B0)
#define ONPMJJOCBMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC39670)
#define ONPMJJOCBMM_ILGKNAKFOIA_OFFSET UNITYSDK_OFFSET(0x1FC39490)
#define ONPMJJOCBMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC393B0)
#define ONPMJJOCBMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC39930)
#define ONPMJJOCBMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC398F0)
#define ONPMJJOCBMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FC394A0)
#define ONPMJJOCBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC393E0)
#define ONPMJJOCBMM_PCCCBGMIBNG_OFFSET UNITYSDK_OFFSET(0x1FC39480)
#define ONPMJJOCBMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC396A0)
#define ONPMJJOCBMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC39700)

inline static constexpr unsigned int ONPMJJOCBMM_TypeDefinitionIndex = 35279;

	class ONPMJJOCBMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JEGFHLGJGHP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ONPMJJOCBMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONPMJJOCBMM*>**)UnitySDK::FromName("", "ONPMJJOCBMM")->GetStaticField(0x29310);
		}

		// static const ::System::Object OBIOFGKIINK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONPMJJOCBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONPMJJOCBMM*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONPMJJOCBMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONPMJJOCBMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONPMJJOCBMM*>*(*)())((::PBYTE)hIl2Cpp + ONPMJJOCBMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONPMJJOCBMM* Clone()
		{
			return ((::ONPMJJOCBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCCCBGMIBNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_PCCCBGMIBNG_OFFSET))(this);
		}

		::System::Void ILGKNAKFOIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_ILGKNAKFOIA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONPMJJOCBMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONPMJJOCBMM*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONPMJJOCBMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONPMJJOCBMM*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONPMJJOCBMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

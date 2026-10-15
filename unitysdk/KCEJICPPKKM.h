#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEJICPPKKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCEJICPPKKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C7910)
#define KCEJICPPKKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7B30)
#define KCEJICPPKKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C7560)
#define KCEJICPPKKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C7530)
#define KCEJICPPKKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7520)
#define KCEJICPPKKM_DECPJKOFDHI_OFFSET UNITYSDK_OFFSET(0x1E7C75A0)
#define KCEJICPPKKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C7690)
#define KCEJICPPKKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C75C0)
#define KCEJICPPKKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C7800)
#define KCEJICPPKKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C74E0)
#define KCEJICPPKKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C79D0)
#define KCEJICPPKKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C79A0)
#define KCEJICPPKKM_MNDMJHJODHI_OFFSET UNITYSDK_OFFSET(0x1E7C75B0)
#define KCEJICPPKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7510)
#define KCEJICPPKKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C7830)
#define KCEJICPPKKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C7890)

inline static constexpr unsigned int KCEJICPPKKM_TypeDefinitionIndex = 32442;

	class KCEJICPPKKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CGMNHPAAIHN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KCEJICPPKKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCEJICPPKKM*>**)UnitySDK::FromName("", "KCEJICPPKKM")->GetStaticField(0xF0D0);
		}

		// static const ::System::Object JNCOAIKFMLF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCEJICPPKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEJICPPKKM*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEJICPPKKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCEJICPPKKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCEJICPPKKM*>*(*)())((::PBYTE)hIl2Cpp + KCEJICPPKKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCEJICPPKKM* Clone()
		{
			return ((::KCEJICPPKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_CLONE_OFFSET))(this);
		}

		::System::UInt32 DECPJKOFDHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_DECPJKOFDHI_OFFSET))(this);
		}

		::System::Void MNDMJHJODHI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCEJICPPKKM_MNDMJHJODHI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCEJICPPKKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCEJICPPKKM*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCEJICPPKKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCEJICPPKKM*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCEJICPPKKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

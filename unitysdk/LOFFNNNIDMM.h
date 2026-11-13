#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOFFNNNIDMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LOFFNNNIDMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200D20D0)
#define LOFFNNNIDMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x200D22F0)
#define LOFFNNNIDMM_CLONE_OFFSET UNITYSDK_OFFSET(0x200D1D20)
#define LOFFNNNIDMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x200D1CF0)
#define LOFFNNNIDMM_CTOR_OFFSET UNITYSDK_OFFSET(0x200D1CE0)
#define LOFFNNNIDMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x200D1E50)
#define LOFFNNNIDMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x200D1D80)
#define LOFFNNNIDMM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x200D1D70)
#define LOFFNNNIDMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200D1FC0)
#define LOFFNNNIDMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x200D1CA0)
#define LOFFNNNIDMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200D2190)
#define LOFFNNNIDMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x200D2160)
#define LOFFNNNIDMM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x200D1D60)
#define LOFFNNNIDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200D1CD0)
#define LOFFNNNIDMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200D1FF0)
#define LOFFNNNIDMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x200D2050)

inline static constexpr unsigned int LOFFNNNIDMM_TypeDefinitionIndex = 32743;

	class LOFFNNNIDMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LOFFNNNIDMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LOFFNNNIDMM*>**)UnitySDK::FromName("", "LOFFNNNIDMM")->GetStaticField(0x45440);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LOFFNNNIDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOFFNNNIDMM*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOFFNNNIDMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LOFFNNNIDMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LOFFNNNIDMM*>*(*)())((::PBYTE)hIl2Cpp + LOFFNNNIDMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LOFFNNNIDMM* Clone()
		{
			return ((::LOFFNNNIDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LOFFNNNIDMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LOFFNNNIDMM*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LOFFNNNIDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOFFNNNIDMM*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LOFFNNNIDMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

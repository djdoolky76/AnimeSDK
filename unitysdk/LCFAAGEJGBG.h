#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCFAAGEJGBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCFAAGEJGBG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F907CC0)
#define LCFAAGEJGBG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F907EE0)
#define LCFAAGEJGBG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F907910)
#define LCFAAGEJGBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9078E0)
#define LCFAAGEJGBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9078D0)
#define LCFAAGEJGBG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F907A40)
#define LCFAAGEJGBG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F907970)
#define LCFAAGEJGBG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F907960)
#define LCFAAGEJGBG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F907BB0)
#define LCFAAGEJGBG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F907890)
#define LCFAAGEJGBG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F907D80)
#define LCFAAGEJGBG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F907D50)
#define LCFAAGEJGBG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F907950)
#define LCFAAGEJGBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9078C0)
#define LCFAAGEJGBG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F907BE0)
#define LCFAAGEJGBG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F907C40)

inline static constexpr unsigned int LCFAAGEJGBG_TypeDefinitionIndex = 30419;

	class LCFAAGEJGBG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LCFAAGEJGBG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LCFAAGEJGBG*>**)UnitySDK::FromName("", "LCFAAGEJGBG")->GetStaticField(0x2B170);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCFAAGEJGBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LCFAAGEJGBG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LCFAAGEJGBG*>*(*)())((::PBYTE)hIl2Cpp + LCFAAGEJGBG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCFAAGEJGBG* Clone()
		{
			return ((::LCFAAGEJGBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCFAAGEJGBG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCFAAGEJGBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCFAAGEJGBG*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCFAAGEJGBG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

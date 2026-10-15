#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCADLPJDECG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCADLPJDECG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C4C70)
#define KCADLPJDECG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4F40)
#define KCADLPJDECG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C48C0)
#define KCADLPJDECG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C4890)
#define KCADLPJDECG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4880)
#define KCADLPJDECG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C4A30)
#define KCADLPJDECG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C4950)
#define KCADLPJDECG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7C4940)
#define KCADLPJDECG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C4B00)
#define KCADLPJDECG_IOCKJPANHND_OFFSET UNITYSDK_OFFSET(0x1E7C4920)
#define KCADLPJDECG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C4840)
#define KCADLPJDECG_KBDFMFLCKGA_OFFSET UNITYSDK_OFFSET(0x1E7C4910)
#define KCADLPJDECG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C4DC0)
#define KCADLPJDECG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C4D80)
#define KCADLPJDECG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7C4930)
#define KCADLPJDECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C4870)
#define KCADLPJDECG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C4B30)
#define KCADLPJDECG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C4B90)

inline static constexpr unsigned int KCADLPJDECG_TypeDefinitionIndex = 29645;

	class KCADLPJDECG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JHCOABLIANB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KCADLPJDECG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCADLPJDECG*>**)UnitySDK::FromName("", "KCADLPJDECG")->GetStaticField(0xEBF0);
		}

		// static const ::System::Object FGCLPKIDGFK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCADLPJDECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCADLPJDECG*))((::PBYTE)hIl2Cpp + KCADLPJDECG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCADLPJDECG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCADLPJDECG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCADLPJDECG*>*(*)())((::PBYTE)hIl2Cpp + KCADLPJDECG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCADLPJDECG* Clone()
		{
			return ((::KCADLPJDECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBDFMFLCKGA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_KBDFMFLCKGA_OFFSET))(this);
		}

		::System::Void IOCKJPANHND(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCADLPJDECG_IOCKJPANHND_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCADLPJDECG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCADLPJDECG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCADLPJDECG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCADLPJDECG*))((::PBYTE)hIl2Cpp + KCADLPJDECG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCADLPJDECG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCADLPJDECG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCADLPJDECG*))((::PBYTE)hIl2Cpp + KCADLPJDECG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCADLPJDECG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IKDGBHLLMBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IKDGBHLLMBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E671C40)
#define IKDGBHLLMBB_CBCPEPFCJJJ_OFFSET UNITYSDK_OFFSET(0x1E671910)
#define IKDGBHLLMBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E671F10)
#define IKDGBHLLMBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E671890)
#define IKDGBHLLMBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E671860)
#define IKDGBHLLMBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E671850)
#define IKDGBHLLMBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E671A00)
#define IKDGBHLLMBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E671920)
#define IKDGBHLLMBB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6718F0)
#define IKDGBHLLMBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E671AD0)
#define IKDGBHLLMBB_GNOBKKJGDFB_OFFSET UNITYSDK_OFFSET(0x1E671900)
#define IKDGBHLLMBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E671810)
#define IKDGBHLLMBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E671D90)
#define IKDGBHLLMBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E671D50)
#define IKDGBHLLMBB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6718E0)
#define IKDGBHLLMBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E671840)
#define IKDGBHLLMBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E671B00)
#define IKDGBHLLMBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E671B60)

inline static constexpr unsigned int IKDGBHLLMBB_TypeDefinitionIndex = 34475;

	class IKDGBHLLMBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHBDKFOEPCG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::IKDGBHLLMBB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IKDGBHLLMBB*>**)UnitySDK::FromName("", "IKDGBHLLMBB")->GetStaticField(0x50350);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JHGGDOKKKHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IKDGBHLLMBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKDGBHLLMBB*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IKDGBHLLMBB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IKDGBHLLMBB*>*(*)())((::PBYTE)hIl2Cpp + IKDGBHLLMBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IKDGBHLLMBB* Clone()
		{
			return ((::IKDGBHLLMBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GNOBKKJGDFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_GNOBKKJGDFB_OFFSET))(this);
		}

		::System::Void CBCPEPFCJJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CBCPEPFCJJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IKDGBHLLMBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IKDGBHLLMBB*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IKDGBHLLMBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKDGBHLLMBB*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IKDGBHLLMBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

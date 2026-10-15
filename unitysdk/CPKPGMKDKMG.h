#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKPGMKDKMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPKPGMKDKMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E114850)
#define CPKPGMKDKMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E114A70)
#define CPKPGMKDKMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1144A0)
#define CPKPGMKDKMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E114470)
#define CPKPGMKDKMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E114460)
#define CPKPGMKDKMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1145D0)
#define CPKPGMKDKMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E114500)
#define CPKPGMKDKMG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1144F0)
#define CPKPGMKDKMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E114740)
#define CPKPGMKDKMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E114420)
#define CPKPGMKDKMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E114910)
#define CPKPGMKDKMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1148E0)
#define CPKPGMKDKMG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1144E0)
#define CPKPGMKDKMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E114450)
#define CPKPGMKDKMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E114770)
#define CPKPGMKDKMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1147D0)

inline static constexpr unsigned int CPKPGMKDKMG_TypeDefinitionIndex = 34497;

	class CPKPGMKDKMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CPKPGMKDKMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPKPGMKDKMG*>**)UnitySDK::FromName("", "CPKPGMKDKMG")->GetStaticField(0x1FB60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPKPGMKDKMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKPGMKDKMG*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKPGMKDKMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPKPGMKDKMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPKPGMKDKMG*>*(*)())((::PBYTE)hIl2Cpp + CPKPGMKDKMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPKPGMKDKMG* Clone()
		{
			return ((::CPKPGMKDKMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPKPGMKDKMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPKPGMKDKMG*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPKPGMKDKMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKPGMKDKMG*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPKPGMKDKMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

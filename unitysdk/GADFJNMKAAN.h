#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFJNMKAAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GADFJNMKAAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3E9C40)
#define GADFJNMKAAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9E60)
#define GADFJNMKAAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3E9890)
#define GADFJNMKAAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3E9860)
#define GADFJNMKAAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9850)
#define GADFJNMKAAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3E99C0)
#define GADFJNMKAAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3E98F0)
#define GADFJNMKAAN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3E98E0)
#define GADFJNMKAAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3E9B30)
#define GADFJNMKAAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3E9810)
#define GADFJNMKAAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3E9D00)
#define GADFJNMKAAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3E9CD0)
#define GADFJNMKAAN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3E98D0)
#define GADFJNMKAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3E9840)
#define GADFJNMKAAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3E9B60)
#define GADFJNMKAAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3E9BC0)

inline static constexpr unsigned int GADFJNMKAAN_TypeDefinitionIndex = 30234;

	class GADFJNMKAAN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GADFJNMKAAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GADFJNMKAAN*>**)UnitySDK::FromName("", "GADFJNMKAAN")->GetStaticField(0x1B50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GADFJNMKAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFJNMKAAN*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GADFJNMKAAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GADFJNMKAAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GADFJNMKAAN*>*(*)())((::PBYTE)hIl2Cpp + GADFJNMKAAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GADFJNMKAAN* Clone()
		{
			return ((::GADFJNMKAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GADFJNMKAAN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GADFJNMKAAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GADFJNMKAAN*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GADFJNMKAAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GADFJNMKAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFJNMKAAN*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GADFJNMKAAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

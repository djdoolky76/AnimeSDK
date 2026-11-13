#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBICGCEFCCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBICGCEFCCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD9EEA0)
#define OBICGCEFCCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9F0C0)
#define OBICGCEFCCI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD9EAF0)
#define OBICGCEFCCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD9EAC0)
#define OBICGCEFCCI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9EAB0)
#define OBICGCEFCCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD9EC20)
#define OBICGCEFCCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD9EB50)
#define OBICGCEFCCI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD9EB40)
#define OBICGCEFCCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD9ED90)
#define OBICGCEFCCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD9EA70)
#define OBICGCEFCCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD9EF60)
#define OBICGCEFCCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD9EF30)
#define OBICGCEFCCI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD9EB30)
#define OBICGCEFCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD9EAA0)
#define OBICGCEFCCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD9EDC0)
#define OBICGCEFCCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD9EE20)

inline static constexpr unsigned int OBICGCEFCCI_TypeDefinitionIndex = 35857;

	class OBICGCEFCCI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OBICGCEFCCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBICGCEFCCI*>**)UnitySDK::FromName("", "OBICGCEFCCI")->GetStaticField(0xB6E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBICGCEFCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBICGCEFCCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBICGCEFCCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBICGCEFCCI*>*(*)())((::PBYTE)hIl2Cpp + OBICGCEFCCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBICGCEFCCI* Clone()
		{
			return ((::OBICGCEFCCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBICGCEFCCI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBICGCEFCCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBICGCEFCCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBICGCEFCCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBICGCEFCCI*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBICGCEFCCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHGECAINBLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHGECAINBLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45BAC0)
#define GHGECAINBLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45BCE0)
#define GHGECAINBLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45B710)
#define GHGECAINBLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45B6E0)
#define GHGECAINBLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45B6D0)
#define GHGECAINBLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45B840)
#define GHGECAINBLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45B770)
#define GHGECAINBLA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E45B760)
#define GHGECAINBLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45B9B0)
#define GHGECAINBLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45B690)
#define GHGECAINBLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45BB80)
#define GHGECAINBLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45BB50)
#define GHGECAINBLA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E45B750)
#define GHGECAINBLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45B6C0)
#define GHGECAINBLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45B9E0)
#define GHGECAINBLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45BA40)

inline static constexpr unsigned int GHGECAINBLA_TypeDefinitionIndex = 30443;

	class GHGECAINBLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GHGECAINBLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHGECAINBLA*>**)UnitySDK::FromName("", "GHGECAINBLA")->GetStaticField(0x16810);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHGECAINBLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHGECAINBLA*))((::PBYTE)hIl2Cpp + GHGECAINBLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHGECAINBLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHGECAINBLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHGECAINBLA*>*(*)())((::PBYTE)hIl2Cpp + GHGECAINBLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHGECAINBLA* Clone()
		{
			return ((::GHGECAINBLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHGECAINBLA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHGECAINBLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHGECAINBLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHGECAINBLA*))((::PBYTE)hIl2Cpp + GHGECAINBLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHGECAINBLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHGECAINBLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHGECAINBLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHGECAINBLA*))((::PBYTE)hIl2Cpp + GHGECAINBLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHGECAINBLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MANBMLIGMLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MANBMLIGMLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9AF6A0)
#define MANBMLIGMLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF8C0)
#define MANBMLIGMLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9AF2F0)
#define MANBMLIGMLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9AF2C0)
#define MANBMLIGMLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF2B0)
#define MANBMLIGMLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9AF420)
#define MANBMLIGMLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9AF350)
#define MANBMLIGMLD_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1E9AF340)
#define MANBMLIGMLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9AF590)
#define MANBMLIGMLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9AF270)
#define MANBMLIGMLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9AF760)
#define MANBMLIGMLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9AF730)
#define MANBMLIGMLD_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1E9AF330)
#define MANBMLIGMLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9AF2A0)
#define MANBMLIGMLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9AF5C0)
#define MANBMLIGMLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9AF620)

inline static constexpr unsigned int MANBMLIGMLD_TypeDefinitionIndex = 34968;

	class MANBMLIGMLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAAGBFNNOKM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MANBMLIGMLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MANBMLIGMLD*>**)UnitySDK::FromName("", "MANBMLIGMLD")->GetStaticField(0x46680);
		}

		// static const ::System::Object BAOPMJAPINI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MANBMLIGMLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANBMLIGMLD*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MANBMLIGMLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MANBMLIGMLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MANBMLIGMLD*>*(*)())((::PBYTE)hIl2Cpp + MANBMLIGMLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MANBMLIGMLD* Clone()
		{
			return ((::MANBMLIGMLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MANBMLIGMLD_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MANBMLIGMLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MANBMLIGMLD*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MANBMLIGMLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MANBMLIGMLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MANBMLIGMLD*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MANBMLIGMLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

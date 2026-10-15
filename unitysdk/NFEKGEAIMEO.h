#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFEKGEAIMEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFEKGEAIMEO_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1EB00EE0)
#define NFEKGEAIMEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB01250)
#define NFEKGEAIMEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB01470)
#define NFEKGEAIMEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB00EA0)
#define NFEKGEAIMEO_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1EB00EF0)
#define NFEKGEAIMEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB00E70)
#define NFEKGEAIMEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB00E60)
#define NFEKGEAIMEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB00FD0)
#define NFEKGEAIMEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB00F00)
#define NFEKGEAIMEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB01140)
#define NFEKGEAIMEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB00E20)
#define NFEKGEAIMEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB01310)
#define NFEKGEAIMEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB012E0)
#define NFEKGEAIMEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB00E50)
#define NFEKGEAIMEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB01170)
#define NFEKGEAIMEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB011D0)

inline static constexpr unsigned int NFEKGEAIMEO_TypeDefinitionIndex = 30655;

	class NFEKGEAIMEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BMGMACIBMFH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFEKGEAIMEO")->GetStaticField(0x5E6E0);
		}

		// static const ::System::Object FPEDPMAHHND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFEKGEAIMEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFEKGEAIMEO*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFEKGEAIMEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFEKGEAIMEO* Clone()
		{
			return ((::NFEKGEAIMEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFEKGEAIMEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFEKGEAIMEO*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFEKGEAIMEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFEKGEAIMEO*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFEKGEAIMEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

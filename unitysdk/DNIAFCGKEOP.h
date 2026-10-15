#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNIAFCGKEOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNIAFCGKEOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1F7230)
#define DNIAFCGKEOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1F7500)
#define DNIAFCGKEOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1F6E80)
#define DNIAFCGKEOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1F6E50)
#define DNIAFCGKEOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6E40)
#define DNIAFCGKEOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1F6FF0)
#define DNIAFCGKEOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1F6F10)
#define DNIAFCGKEOP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1F6EE0)
#define DNIAFCGKEOP_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E1F6F00)
#define DNIAFCGKEOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1F70C0)
#define DNIAFCGKEOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1F6E00)
#define DNIAFCGKEOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1F7380)
#define DNIAFCGKEOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1F7340)
#define DNIAFCGKEOP_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E1F6EF0)
#define DNIAFCGKEOP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1F6ED0)
#define DNIAFCGKEOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1F6E30)
#define DNIAFCGKEOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1F70F0)
#define DNIAFCGKEOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1F7150)

inline static constexpr unsigned int DNIAFCGKEOP_TypeDefinitionIndex = 34883;

	class DNIAFCGKEOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DNIAFCGKEOP")->GetStaticField(0x40590);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNIAFCGKEOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNIAFCGKEOP*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNIAFCGKEOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DNIAFCGKEOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNIAFCGKEOP* Clone()
		{
			return ((::DNIAFCGKEOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNIAFCGKEOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNIAFCGKEOP*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNIAFCGKEOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNIAFCGKEOP*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNIAFCGKEOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

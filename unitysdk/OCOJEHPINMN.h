#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOJEHPINMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCOJEHPINMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE192E0)
#define OCOJEHPINMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE195F0)
#define OCOJEHPINMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE18E60)
#define OCOJEHPINMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE18E20)
#define OCOJEHPINMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE18E10)
#define OCOJEHPINMN_DOGOBADHGOG_OFFSET UNITYSDK_OFFSET(0x1DE18EF0)
#define OCOJEHPINMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE19000)
#define OCOJEHPINMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE18F10)
#define OCOJEHPINMN_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1DE18EC0)
#define OCOJEHPINMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE190E0)
#define OCOJEHPINMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE18DD0)
#define OCOJEHPINMN_LOBBOHEMAOD_OFFSET UNITYSDK_OFFSET(0x1DE18F00)
#define OCOJEHPINMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE19450)
#define OCOJEHPINMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE19400)
#define OCOJEHPINMN_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1DE18EE0)
#define OCOJEHPINMN_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1DE18EB0)
#define OCOJEHPINMN_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1DE18ED0)
#define OCOJEHPINMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE18E00)
#define OCOJEHPINMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE19110)
#define OCOJEHPINMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE19170)

inline static constexpr unsigned int OCOJEHPINMN_TypeDefinitionIndex = 26800;

	class OCOJEHPINMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFMHFBDKDOE; // 0x18
		::System::Boolean ILFCOBCLBFH; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 ABPDPMHFFNN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCOJEHPINMN")->GetStaticField(0x13370);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object NIIFFPCIFGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCOJEHPINMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOJEHPINMN*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOJEHPINMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCOJEHPINMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCOJEHPINMN* Clone()
		{
			return ((::OCOJEHPINMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOJEHPINMN_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOJEHPINMN_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean DOGOBADHGOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_DOGOBADHGOG_OFFSET))(this);
		}

		::System::Void LOBBOHEMAOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OCOJEHPINMN_LOBBOHEMAOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCOJEHPINMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCOJEHPINMN*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCOJEHPINMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOJEHPINMN*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCOJEHPINMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNNGLBEGIKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNNGLBEGIKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4E71A0)
#define GNNGLBEGIKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E7520)
#define GNNGLBEGIKB_CFOKGPBIOGO_OFFSET UNITYSDK_OFFSET(0x1E4E6E50)
#define GNNGLBEGIKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4E6DB0)
#define GNNGLBEGIKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4E6D70)
#define GNNGLBEGIKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E6D60)
#define GNNGLBEGIKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4E6F10)
#define GNNGLBEGIKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4E6E90)
#define GNNGLBEGIKB_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E4E6E80)
#define GNNGLBEGIKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4E6FE0)
#define GNNGLBEGIKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4E6CF0)
#define GNNGLBEGIKB_JLJJLGDOBCF_OFFSET UNITYSDK_OFFSET(0x1E4E6E40)
#define GNNGLBEGIKB_JOGDHCKLDFC_OFFSET UNITYSDK_OFFSET(0x1E4E6E60)
#define GNNGLBEGIKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4E7380)
#define GNNGLBEGIKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4E7330)
#define GNNGLBEGIKB_NLMKEPEOICM_OFFSET UNITYSDK_OFFSET(0x1E4E6E30)
#define GNNGLBEGIKB_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E4E6E70)
#define GNNGLBEGIKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4E6D50)
#define GNNGLBEGIKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4E7010)
#define GNNGLBEGIKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4E7070)

inline static constexpr unsigned int GNNGLBEGIKB_TypeDefinitionIndex = 31175;

	class GNNGLBEGIKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HFGJNCJPGBA; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		::System::UInt32 GFFIKBOIKAN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNNGLBEGIKB")->GetStaticField(0x240C0);
		}

		// static const ::System::Object ELFMIPDDDLE; // 0x0
		// static const ::System::Object BBEDIPIGDIL; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNNGLBEGIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNNGLBEGIKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNNGLBEGIKB* Clone()
		{
			return ((::GNNGLBEGIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 NLMKEPEOICM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_NLMKEPEOICM_OFFSET))(this);
		}

		::System::Void JLJJLGDOBCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_JLJJLGDOBCF_OFFSET))(this, a1);
		}

		::System::UInt32 CFOKGPBIOGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CFOKGPBIOGO_OFFSET))(this);
		}

		::System::Void JOGDHCKLDFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_JOGDHCKLDFC_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNNGLBEGIKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNNGLBEGIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNNGLBEGIKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

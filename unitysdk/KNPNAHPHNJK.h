#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPNAHPHNJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNPNAHPHNJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E87D7D0)
#define KNPNAHPHNJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87DAA0)
#define KNPNAHPHNJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E87D3D0)
#define KNPNAHPHNJK_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E87D460)
#define KNPNAHPHNJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E87D3A0)
#define KNPNAHPHNJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87D390)
#define KNPNAHPHNJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E87D590)
#define KNPNAHPHNJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E87D480)
#define KNPNAHPHNJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E87D660)
#define KNPNAHPHNJK_HFBLIPMDIEA_OFFSET UNITYSDK_OFFSET(0x1E87D440)
#define KNPNAHPHNJK_IFLEOPHLGIF_OFFSET UNITYSDK_OFFSET(0x1E87D450)
#define KNPNAHPHNJK_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E87D470)
#define KNPNAHPHNJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E87D320)
#define KNPNAHPHNJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E87D920)
#define KNPNAHPHNJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E87D8E0)
#define KNPNAHPHNJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E87D380)
#define KNPNAHPHNJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E87D690)
#define KNPNAHPHNJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E87D6F0)

inline static constexpr unsigned int KNPNAHPHNJK_TypeDefinitionIndex = 30498;

	class KNPNAHPHNJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KJAENGKDFJD; // 0x18
		::System::UInt32 KABKPAJLPFI; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KNPNAHPHNJK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNPNAHPHNJK*>**)UnitySDK::FromName("", "KNPNAHPHNJK")->GetStaticField(0x20CF0);
		}

		// static const ::System::Object BHBOKCKKMOO; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNPNAHPHNJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNPNAHPHNJK*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNPNAHPHNJK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNPNAHPHNJK*>*(*)())((::PBYTE)hIl2Cpp + KNPNAHPHNJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNPNAHPHNJK* Clone()
		{
			return ((::KNPNAHPHNJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 HFBLIPMDIEA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_HFBLIPMDIEA_OFFSET))(this);
		}

		::System::Void IFLEOPHLGIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_IFLEOPHLGIF_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNPNAHPHNJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNPNAHPHNJK*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNPNAHPHNJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNPNAHPHNJK*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNPNAHPHNJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

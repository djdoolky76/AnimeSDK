#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCKLINCMDKK;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCKLINCMDKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CD340)
#define MCKLINCMDKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CD690)
#define MCKLINCMDKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CCD60)
#define MCKLINCMDKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CCCE0)
#define MCKLINCMDKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CCC90)
#define MCKLINCMDKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CCF80)
#define MCKLINCMDKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CCE70)
#define MCKLINCMDKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CD090)
#define MCKLINCMDKK_GFKBOGNDAGA_OFFSET UNITYSDK_OFFSET(0x1E9CCE10)
#define MCKLINCMDKK_IDIJGMBLIMD_OFFSET UNITYSDK_OFFSET(0x1E9CCE20)
#define MCKLINCMDKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CCC50)
#define MCKLINCMDKK_KGOPCAIHJJJ_OFFSET UNITYSDK_OFFSET(0x1E9CCE00)
#define MCKLINCMDKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CD4E0)
#define MCKLINCMDKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CD490)
#define MCKLINCMDKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CCC80)
#define MCKLINCMDKK_PDPIGGBGMPH_OFFSET UNITYSDK_OFFSET(0x1E9CCDF0)
#define MCKLINCMDKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CD1C0)
#define MCKLINCMDKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CD220)

inline static constexpr unsigned int MCKLINCMDKK_TypeDefinitionIndex = 28502;

	class MCKLINCMDKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::ByteString* NJAIONNHDKJ; // 0x18
		::System::UInt32 IPNKLLBIFLC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MCKLINCMDKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCKLINCMDKK*>**)UnitySDK::FromName("", "MCKLINCMDKK")->GetStaticField(0x4AA10);
		}

		// static const ::System::Object JIKLFFDOHCP; // 0x0
		// static const ::System::Object MCBNHKIMPMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCKLINCMDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCKLINCMDKK*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCKLINCMDKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCKLINCMDKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCKLINCMDKK*>*(*)())((::PBYTE)hIl2Cpp + MCKLINCMDKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCKLINCMDKK* Clone()
		{
			return ((::MCKLINCMDKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PDPIGGBGMPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_PDPIGGBGMPH_OFFSET))(this);
		}

		::System::Void KGOPCAIHJJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCKLINCMDKK_KGOPCAIHJJJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* GFKBOGNDAGA()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_GFKBOGNDAGA_OFFSET))(this);
		}

		::System::Void IDIJGMBLIMD(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_IDIJGMBLIMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCKLINCMDKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCKLINCMDKK*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCKLINCMDKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCKLINCMDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCKLINCMDKK*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCKLINCMDKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

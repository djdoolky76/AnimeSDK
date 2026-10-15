#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHGAOLCDONK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHGAOLCDONK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA30660)
#define MHGAOLCDONK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA30930)
#define MHGAOLCDONK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA302B0)
#define MHGAOLCDONK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA30280)
#define MHGAOLCDONK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA30270)
#define MHGAOLCDONK_DCBFFPMELBL_OFFSET UNITYSDK_OFFSET(0x1EA30320)
#define MHGAOLCDONK_DIAFEACAAAG_OFFSET UNITYSDK_OFFSET(0x1EA30300)
#define MHGAOLCDONK_DNAPPBMAPEJ_OFFSET UNITYSDK_OFFSET(0x1EA30330)
#define MHGAOLCDONK_EJNBEBFHIPB_OFFSET UNITYSDK_OFFSET(0x1EA30310)
#define MHGAOLCDONK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA30420)
#define MHGAOLCDONK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA30340)
#define MHGAOLCDONK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA304F0)
#define MHGAOLCDONK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA30230)
#define MHGAOLCDONK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA307B0)
#define MHGAOLCDONK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA30770)
#define MHGAOLCDONK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA30260)
#define MHGAOLCDONK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA30520)
#define MHGAOLCDONK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA30580)

inline static constexpr unsigned int MHGAOLCDONK_TypeDefinitionIndex = 33905;

	class MHGAOLCDONK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AMONICMFOPC; // 0x18
		::System::UInt32 OELPDCMLCFD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MHGAOLCDONK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHGAOLCDONK*>**)UnitySDK::FromName("", "MHGAOLCDONK")->GetStaticField(0x514D0);
		}

		// static const ::System::Object MEALAGBCFJM; // 0x0
		// static const ::System::Object AKBGDGNLNFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHGAOLCDONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHGAOLCDONK*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHGAOLCDONK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHGAOLCDONK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHGAOLCDONK*>*(*)())((::PBYTE)hIl2Cpp + MHGAOLCDONK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHGAOLCDONK* Clone()
		{
			return ((::MHGAOLCDONK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_CLONE_OFFSET))(this);
		}

		::System::UInt32 DIAFEACAAAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_DIAFEACAAAG_OFFSET))(this);
		}

		::System::Void EJNBEBFHIPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHGAOLCDONK_EJNBEBFHIPB_OFFSET))(this, a1);
		}

		::System::UInt32 DCBFFPMELBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_DCBFFPMELBL_OFFSET))(this);
		}

		::System::Void DNAPPBMAPEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHGAOLCDONK_DNAPPBMAPEJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHGAOLCDONK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHGAOLCDONK*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGAOLCDONK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHGAOLCDONK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHGAOLCDONK*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHGAOLCDONK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

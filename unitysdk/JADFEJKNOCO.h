#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JADFEJKNOCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JADFEJKNOCO_BEMFCHPPFNG_OFFSET UNITYSDK_OFFSET(0x1E6BEFA0)
#define JADFEJKNOCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BF370)
#define JADFEJKNOCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BF5D0)
#define JADFEJKNOCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6BEF20)
#define JADFEJKNOCO_COLNOJJJNMC_OFFSET UNITYSDK_OFFSET(0x1E6BEFB0)
#define JADFEJKNOCO_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1E6BEFC0)
#define JADFEJKNOCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6BEEE0)
#define JADFEJKNOCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BEED0)
#define JADFEJKNOCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6BF0F0)
#define JADFEJKNOCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6BEFE0)
#define JADFEJKNOCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BF1D0)
#define JADFEJKNOCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6BEE60)
#define JADFEJKNOCO_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1E6BEFD0)
#define JADFEJKNOCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BF450)
#define JADFEJKNOCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BF410)
#define JADFEJKNOCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6BEEC0)
#define JADFEJKNOCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BF200)
#define JADFEJKNOCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BF260)

inline static constexpr unsigned int JADFEJKNOCO_TypeDefinitionIndex = 34400;

	class JADFEJKNOCO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LGEECALJJPM; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 FENDJMNOHHG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JADFEJKNOCO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JADFEJKNOCO*>**)UnitySDK::FromName("", "JADFEJKNOCO")->GetStaticField(0x57410);
		}

		// static const ::System::Object DNAEILIPIEH; // 0x0
		// static const ::System::Object FILPGLHFNCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JADFEJKNOCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADFEJKNOCO*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JADFEJKNOCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JADFEJKNOCO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JADFEJKNOCO*>*(*)())((::PBYTE)hIl2Cpp + JADFEJKNOCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JADFEJKNOCO* Clone()
		{
			return ((::JADFEJKNOCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_CLONE_OFFSET))(this);
		}

		::System::Boolean BEMFCHPPFNG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_BEMFCHPPFNG_OFFSET))(this);
		}

		::System::Void COLNOJJJNMC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JADFEJKNOCO_COLNOJJJNMC_OFFSET))(this, a1);
		}

		::System::UInt32 CPOOIDGKFPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_CPOOIDGKFPB_OFFSET))(this);
		}

		::System::Void KHNLEEDIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JADFEJKNOCO_KHNLEEDIEKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JADFEJKNOCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JADFEJKNOCO*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JADFEJKNOCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JADFEJKNOCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADFEJKNOCO*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JADFEJKNOCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

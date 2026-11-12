#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMHEAGKIILO;
class OGEIHMPCFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMHEAGKIILO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2CC440)
#define BMHEAGKIILO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2CC770)
#define BMHEAGKIILO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2CBDF0)
#define BMHEAGKIILO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2CBD70)
#define BMHEAGKIILO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2CBD60)
#define BMHEAGKIILO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2CC0B0)
#define BMHEAGKIILO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2CBEF0)
#define BMHEAGKIILO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2CC230)
#define BMHEAGKIILO_HGJLAHPPNGO_OFFSET UNITYSDK_OFFSET(0x1F2CBED0)
#define BMHEAGKIILO_ILFAOAJEEBL_OFFSET UNITYSDK_OFFSET(0x1F2CBEB0)
#define BMHEAGKIILO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F2CBCF0)
#define BMHEAGKIILO_LHCEPOOHGFK_OFFSET UNITYSDK_OFFSET(0x1F2CBEC0)
#define BMHEAGKIILO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2CC580)
#define BMHEAGKIILO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2CC4A0)
#define BMHEAGKIILO_OOKEFIFPFOC_OFFSET UNITYSDK_OFFSET(0x1F2CBEE0)
#define BMHEAGKIILO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2CBD50)
#define BMHEAGKIILO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2CC2D0)
#define BMHEAGKIILO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2CC330)

inline static constexpr unsigned int BMHEAGKIILO_TypeDefinitionIndex = 30570;

	class BMHEAGKIILO : public ::System::Object
	{
	public:
		::OGEIHMPCFKA* CNFPNCMOAPP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean KEKMPIGIACD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BMHEAGKIILO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMHEAGKIILO*>**)UnitySDK::FromName("", "BMHEAGKIILO")->GetStaticField(0xD0F0);
		}

		// static const ::System::Object PFEJIKGIEIM; // 0x0
		// static const ::System::Object DDGLMBILADL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMHEAGKIILO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMHEAGKIILO*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMHEAGKIILO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMHEAGKIILO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMHEAGKIILO*>*(*)())((::PBYTE)hIl2Cpp + BMHEAGKIILO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMHEAGKIILO* Clone()
		{
			return ((::BMHEAGKIILO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_CLONE_OFFSET))(this);
		}

		::System::Boolean ILFAOAJEEBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_ILFAOAJEEBL_OFFSET))(this);
		}

		::System::Void LHCEPOOHGFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BMHEAGKIILO_LHCEPOOHGFK_OFFSET))(this, a1);
		}

		::OGEIHMPCFKA* HGJLAHPPNGO()
		{
			return ((::OGEIHMPCFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_HGJLAHPPNGO_OFFSET))(this);
		}

		::System::Void OOKEFIFPFOC(::OGEIHMPCFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGEIHMPCFKA*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_OOKEFIFPFOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMHEAGKIILO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMHEAGKIILO*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHEAGKIILO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMHEAGKIILO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMHEAGKIILO*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMHEAGKIILO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

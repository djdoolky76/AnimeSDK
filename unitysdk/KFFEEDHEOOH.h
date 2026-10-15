#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFFEEDHEOOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KFFEEDHEOOH_BCCIHNABPPO_OFFSET UNITYSDK_OFFSET(0x1E817A90)
#define KFFEEDHEOOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E817DE0)
#define KFFEEDHEOOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8180B0)
#define KFFEEDHEOOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E817A30)
#define KFFEEDHEOOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E817A00)
#define KFFEEDHEOOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8179F0)
#define KFFEEDHEOOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E817BA0)
#define KFFEEDHEOOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E817AC0)
#define KFFEEDHEOOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E817AB0)
#define KFFEEDHEOOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E817C70)
#define KFFEEDHEOOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8179B0)
#define KFFEEDHEOOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E817F30)
#define KFFEEDHEOOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E817EF0)
#define KFFEEDHEOOH_NCIMEFKLAFH_OFFSET UNITYSDK_OFFSET(0x1E817A80)
#define KFFEEDHEOOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E817AA0)
#define KFFEEDHEOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8179E0)
#define KFFEEDHEOOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E817CA0)
#define KFFEEDHEOOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E817D00)

inline static constexpr unsigned int KFFEEDHEOOH_TypeDefinitionIndex = 32257;

	class KFFEEDHEOOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ANCONNKPJHM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KFFEEDHEOOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KFFEEDHEOOH*>**)UnitySDK::FromName("", "KFFEEDHEOOH")->GetStaticField(0x13570);
		}

		// static const ::System::Object MHJEFNFCLBO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KFFEEDHEOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFFEEDHEOOH*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFFEEDHEOOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KFFEEDHEOOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KFFEEDHEOOH*>*(*)())((::PBYTE)hIl2Cpp + KFFEEDHEOOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KFFEEDHEOOH* Clone()
		{
			return ((::KFFEEDHEOOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 NCIMEFKLAFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_NCIMEFKLAFH_OFFSET))(this);
		}

		::System::Void BCCIHNABPPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_BCCIHNABPPO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KFFEEDHEOOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KFFEEDHEOOH*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KFFEEDHEOOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFFEEDHEOOH*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KFFEEDHEOOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

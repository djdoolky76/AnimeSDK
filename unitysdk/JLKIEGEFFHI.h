#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLKIEGEFFHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLKIEGEFFHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E752A00)
#define JLKIEGEFFHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E752C20)
#define JLKIEGEFFHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E752650)
#define JLKIEGEFFHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E752620)
#define JLKIEGEFFHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E752610)
#define JLKIEGEFFHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E752780)
#define JLKIEGEFFHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7526B0)
#define JLKIEGEFFHI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7526A0)
#define JLKIEGEFFHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7528F0)
#define JLKIEGEFFHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7525D0)
#define JLKIEGEFFHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E752AC0)
#define JLKIEGEFFHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E752A90)
#define JLKIEGEFFHI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E752690)
#define JLKIEGEFFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E752600)
#define JLKIEGEFFHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E752920)
#define JLKIEGEFFHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E752980)

inline static constexpr unsigned int JLKIEGEFFHI_TypeDefinitionIndex = 34009;

	class JLKIEGEFFHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JLKIEGEFFHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLKIEGEFFHI*>**)UnitySDK::FromName("", "JLKIEGEFFHI")->GetStaticField(0x64B20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLKIEGEFFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKIEGEFFHI*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLKIEGEFFHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLKIEGEFFHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLKIEGEFFHI*>*(*)())((::PBYTE)hIl2Cpp + JLKIEGEFFHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLKIEGEFFHI* Clone()
		{
			return ((::JLKIEGEFFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLKIEGEFFHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLKIEGEFFHI*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLKIEGEFFHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLKIEGEFFHI*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLKIEGEFFHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

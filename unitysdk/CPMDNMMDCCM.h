#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMDNMMDCCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPMDNMMDCCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E144490)
#define CPMDNMMDCCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1446B0)
#define CPMDNMMDCCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1440E0)
#define CPMDNMMDCCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1440B0)
#define CPMDNMMDCCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1440A0)
#define CPMDNMMDCCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E144210)
#define CPMDNMMDCCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E144140)
#define CPMDNMMDCCM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E144130)
#define CPMDNMMDCCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E144380)
#define CPMDNMMDCCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E144060)
#define CPMDNMMDCCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E144550)
#define CPMDNMMDCCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E144520)
#define CPMDNMMDCCM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E144120)
#define CPMDNMMDCCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E144090)
#define CPMDNMMDCCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1443B0)
#define CPMDNMMDCCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E144410)

inline static constexpr unsigned int CPMDNMMDCCM_TypeDefinitionIndex = 27571;

	class CPMDNMMDCCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPMDNMMDCCM")->GetStaticField(0x22EA0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPMDNMMDCCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMDNMMDCCM*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMDNMMDCCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPMDNMMDCCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPMDNMMDCCM* Clone()
		{
			return ((::CPMDNMMDCCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPMDNMMDCCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPMDNMMDCCM*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPMDNMMDCCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMDNMMDCCM*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPMDNMMDCCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

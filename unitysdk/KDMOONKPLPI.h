#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDMOONKPLPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDMOONKPLPI_BMADMNJNECB_OFFSET UNITYSDK_OFFSET(0x1E805530)
#define KDMOONKPLPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E805890)
#define KDMOONKPLPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E805B60)
#define KDMOONKPLPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8054E0)
#define KDMOONKPLPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8054B0)
#define KDMOONKPLPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8054A0)
#define KDMOONKPLPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E805650)
#define KDMOONKPLPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E805570)
#define KDMOONKPLPI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E805560)
#define KDMOONKPLPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E805720)
#define KDMOONKPLPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E805460)
#define KDMOONKPLPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8059E0)
#define KDMOONKPLPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8059A0)
#define KDMOONKPLPI_MOELKCBEOLJ_OFFSET UNITYSDK_OFFSET(0x1E805540)
#define KDMOONKPLPI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E805550)
#define KDMOONKPLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E805490)
#define KDMOONKPLPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E805750)
#define KDMOONKPLPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8057B0)

inline static constexpr unsigned int KDMOONKPLPI_TypeDefinitionIndex = 28471;

	class KDMOONKPLPI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OLEPKIGDNHN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KDMOONKPLPI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDMOONKPLPI*>**)UnitySDK::FromName("", "KDMOONKPLPI")->GetStaticField(0x114D0);
		}

		// static const ::System::Object DAKFOHGIALH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDMOONKPLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMOONKPLPI*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMOONKPLPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDMOONKPLPI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDMOONKPLPI*>*(*)())((::PBYTE)hIl2Cpp + KDMOONKPLPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDMOONKPLPI* Clone()
		{
			return ((::KDMOONKPLPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 BMADMNJNECB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_BMADMNJNECB_OFFSET))(this);
		}

		::System::Void MOELKCBEOLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMOONKPLPI_MOELKCBEOLJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMOONKPLPI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDMOONKPLPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDMOONKPLPI*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMOONKPLPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDMOONKPLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMOONKPLPI*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDMOONKPLPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

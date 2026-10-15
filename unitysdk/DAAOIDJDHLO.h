#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class DAAOIDJDHLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAAOIDJDHLO_AIHNILNPAJG_OFFSET UNITYSDK_OFFSET(0x1E11A9B0)
#define DAAOIDJDHLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E11AE80)
#define DAAOIDJDHLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11B2C0)
#define DAAOIDJDHLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E11A930)
#define DAAOIDJDHLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E11A8C0)
#define DAAOIDJDHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11A8B0)
#define DAAOIDJDHLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E11AB70)
#define DAAOIDJDHLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E11A9F0)
#define DAAOIDJDHLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E11A9E0)
#define DAAOIDJDHLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E11ACF0)
#define DAAOIDJDHLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E11A870)
#define DAAOIDJDHLO_LFIDHCHMELF_OFFSET UNITYSDK_OFFSET(0x1E11A9C0)
#define DAAOIDJDHLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E11B0A0)
#define DAAOIDJDHLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E11AF50)
#define DAAOIDJDHLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E11A9D0)
#define DAAOIDJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E11A8A0)
#define DAAOIDJDHLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E11AD40)
#define DAAOIDJDHLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E11ADA0)

inline static constexpr unsigned int DAAOIDJDHLO_TypeDefinitionIndex = 26470;

	class DAAOIDJDHLO : public ::System::Object
	{
	public:
		::CLHIJOAKJCE* FPCHABCAHCI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DAAOIDJDHLO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAAOIDJDHLO*>**)UnitySDK::FromName("", "DAAOIDJDHLO")->GetStaticField(0x20770);
		}

		// static const ::System::Object LNACFLNILGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAAOIDJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAAOIDJDHLO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAAOIDJDHLO*>*(*)())((::PBYTE)hIl2Cpp + DAAOIDJDHLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAAOIDJDHLO* Clone()
		{
			return ((::DAAOIDJDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CLONE_OFFSET))(this);
		}

		::CLHIJOAKJCE* AIHNILNPAJG()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_AIHNILNPAJG_OFFSET))(this);
		}

		::System::Void LFIDHCHMELF(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_LFIDHCHMELF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAAOIDJDHLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAAOIDJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

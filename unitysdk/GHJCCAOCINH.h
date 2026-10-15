#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class GHJCCAOCINH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHJCCAOCINH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E45DF70)
#define GHJCCAOCINH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E45E2C0)
#define GHJCCAOCINH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E45DA20)
#define GHJCCAOCINH_COAGFOEMIEN_OFFSET UNITYSDK_OFFSET(0x1E45DAA0)
#define GHJCCAOCINH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E45D9B0)
#define GHJCCAOCINH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E45D9A0)
#define GHJCCAOCINH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E45DC60)
#define GHJCCAOCINH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E45DAE0)
#define GHJCCAOCINH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E45DAD0)
#define GHJCCAOCINH_FBNKEDOHKIL_OFFSET UNITYSDK_OFFSET(0x1E45DAB0)
#define GHJCCAOCINH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E45DDE0)
#define GHJCCAOCINH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E45D960)
#define GHJCCAOCINH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E45E0F0)
#define GHJCCAOCINH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E45E040)
#define GHJCCAOCINH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E45DAC0)
#define GHJCCAOCINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E45D990)
#define GHJCCAOCINH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E45DE30)
#define GHJCCAOCINH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E45DE90)

inline static constexpr unsigned int GHJCCAOCINH_TypeDefinitionIndex = 34355;

	class GHJCCAOCINH : public ::System::Object
	{
	public:
		::ENHOPAHGCMA* FNGCFMKPAIE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GHJCCAOCINH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GHJCCAOCINH*>**)UnitySDK::FromName("", "GHJCCAOCINH")->GetStaticField(0x16C50);
		}

		// static const ::System::Object JMACJHNFKJB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHJCCAOCINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHJCCAOCINH*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJCCAOCINH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GHJCCAOCINH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GHJCCAOCINH*>*(*)())((::PBYTE)hIl2Cpp + GHJCCAOCINH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHJCCAOCINH* Clone()
		{
			return ((::GHJCCAOCINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* COAGFOEMIEN()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_COAGFOEMIEN_OFFSET))(this);
		}

		::System::Void FBNKEDOHKIL(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_FBNKEDOHKIL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHJCCAOCINH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHJCCAOCINH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHJCCAOCINH*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJCCAOCINH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHJCCAOCINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHJCCAOCINH*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHJCCAOCINH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

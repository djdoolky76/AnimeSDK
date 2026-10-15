#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNIBJEJBDLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNIBJEJBDLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8A49D0)
#define KNIBJEJBDLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A4CA0)
#define KNIBJEJBDLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8A4620)
#define KNIBJEJBDLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A45F0)
#define KNIBJEJBDLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A45E0)
#define KNIBJEJBDLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8A4790)
#define KNIBJEJBDLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8A46B0)
#define KNIBJEJBDLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8A4680)
#define KNIBJEJBDLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8A4860)
#define KNIBJEJBDLO_JIDPGCLADOK_OFFSET UNITYSDK_OFFSET(0x1E8A46A0)
#define KNIBJEJBDLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8A45A0)
#define KNIBJEJBDLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8A4B20)
#define KNIBJEJBDLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8A4AE0)
#define KNIBJEJBDLO_NEBGOPEBPIF_OFFSET UNITYSDK_OFFSET(0x1E8A4690)
#define KNIBJEJBDLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8A4670)
#define KNIBJEJBDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8A45D0)
#define KNIBJEJBDLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8A4890)
#define KNIBJEJBDLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8A48F0)

inline static constexpr unsigned int KNIBJEJBDLO_TypeDefinitionIndex = 27649;

	class KNIBJEJBDLO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DJBABHPHHOK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KNIBJEJBDLO")->GetStaticField(0x245A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBBHGLOGHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNIBJEJBDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNIBJEJBDLO*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNIBJEJBDLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KNIBJEJBDLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNIBJEJBDLO* Clone()
		{
			return ((::KNIBJEJBDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NEBGOPEBPIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_NEBGOPEBPIF_OFFSET))(this);
		}

		::System::Void JIDPGCLADOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_JIDPGCLADOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNIBJEJBDLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNIBJEJBDLO*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNIBJEJBDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNIBJEJBDLO*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNIBJEJBDLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

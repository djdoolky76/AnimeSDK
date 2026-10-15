#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCEDDGELBMJ;
class NFPFNFPDFGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFPFNFPDFGK_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1EB08ED0)
#define NFPFNFPDFGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB093A0)
#define NFPFNFPDFGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB09740)
#define NFPFNFPDFGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB08E50)
#define NFPFNFPDFGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB08DE0)
#define NFPFNFPDFGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB08DD0)
#define NFPFNFPDFGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB09090)
#define NFPFNFPDFGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB08F10)
#define NFPFNFPDFGK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB08F00)
#define NFPFNFPDFGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB09210)
#define NFPFNFPDFGK_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1EB08EE0)
#define NFPFNFPDFGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB08D90)
#define NFPFNFPDFGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB09540)
#define NFPFNFPDFGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB09470)
#define NFPFNFPDFGK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB08EF0)
#define NFPFNFPDFGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB08DC0)
#define NFPFNFPDFGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB09260)
#define NFPFNFPDFGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB092C0)

inline static constexpr unsigned int NFPFNFPDFGK_TypeDefinitionIndex = 27604;

	class NFPFNFPDFGK : public ::System::Object
	{
	public:
		::LCEDDGELBMJ* JIHIDBNIKAG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NFPFNFPDFGK")->GetStaticField(0x5EE30);
		}

		// static const ::System::Object MCEJJGELGPI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFPFNFPDFGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPFNFPDFGK*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPFNFPDFGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NFPFNFPDFGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFPFNFPDFGK* Clone()
		{
			return ((::NFPFNFPDFGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_CLONE_OFFSET))(this);
		}

		::LCEDDGELBMJ* BGHKDLONBOD()
		{
			return ((::LCEDDGELBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::LCEDDGELBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCEDDGELBMJ*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFPFNFPDFGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFPFNFPDFGK*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFPFNFPDFGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPFNFPDFGK*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFPFNFPDFGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

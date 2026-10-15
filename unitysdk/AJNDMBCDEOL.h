#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNDMBCDEOL;
class HFGBCEKGFHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AJNDMBCDEOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C4C90)
#define AJNDMBCDEOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C5030)
#define AJNDMBCDEOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C46F0)
#define AJNDMBCDEOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C4670)
#define AJNDMBCDEOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4660)
#define AJNDMBCDEOL_DIBGANDJGCM_OFFSET UNITYSDK_OFFSET(0x1E3C47A0)
#define AJNDMBCDEOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C4940)
#define AJNDMBCDEOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C47C0)
#define AJNDMBCDEOL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3C4790)
#define AJNDMBCDEOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C4AC0)
#define AJNDMBCDEOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C4620)
#define AJNDMBCDEOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C4E40)
#define AJNDMBCDEOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C4D60)
#define AJNDMBCDEOL_NGKCBDDHINI_OFFSET UNITYSDK_OFFSET(0x1E3C47B0)
#define AJNDMBCDEOL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3C4780)
#define AJNDMBCDEOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4650)
#define AJNDMBCDEOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C4B50)
#define AJNDMBCDEOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C4BB0)

inline static constexpr unsigned int AJNDMBCDEOL_TypeDefinitionIndex = 32726;

	class AJNDMBCDEOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HFGBCEKGFHK* JGOHIDJBGHG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AJNDMBCDEOL")->GetStaticField(0x35C60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HHMGEGKPFKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AJNDMBCDEOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNDMBCDEOL*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNDMBCDEOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AJNDMBCDEOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AJNDMBCDEOL* Clone()
		{
			return ((::AJNDMBCDEOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HFGBCEKGFHK* DIBGANDJGCM()
		{
			return ((::HFGBCEKGFHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_DIBGANDJGCM_OFFSET))(this);
		}

		::System::Void NGKCBDDHINI(::HFGBCEKGFHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGBCEKGFHK*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_NGKCBDDHINI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AJNDMBCDEOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJNDMBCDEOL*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AJNDMBCDEOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJNDMBCDEOL*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AJNDMBCDEOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

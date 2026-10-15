#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFLACABCKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBFLACABCKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E234150)
#define EBFLACABCKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E234420)
#define EBFLACABCKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E233DA0)
#define EBFLACABCKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E233D70)
#define EBFLACABCKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E233D60)
#define EBFLACABCKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E233F10)
#define EBFLACABCKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E233E30)
#define EBFLACABCKO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E233E20)
#define EBFLACABCKO_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E233DF0)
#define EBFLACABCKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E233FE0)
#define EBFLACABCKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E233D20)
#define EBFLACABCKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2342A0)
#define EBFLACABCKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E234260)
#define EBFLACABCKO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E233E10)
#define EBFLACABCKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E233D50)
#define EBFLACABCKO_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E233E00)
#define EBFLACABCKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E234010)
#define EBFLACABCKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E234070)

inline static constexpr unsigned int EBFLACABCKO_TypeDefinitionIndex = 29811;

	class EBFLACABCKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EBFLACABCKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBFLACABCKO*>**)UnitySDK::FromName("", "EBFLACABCKO")->GetStaticField(0x4A610);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBFLACABCKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBFLACABCKO*))((::PBYTE)hIl2Cpp + EBFLACABCKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBFLACABCKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBFLACABCKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBFLACABCKO*>*(*)())((::PBYTE)hIl2Cpp + EBFLACABCKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBFLACABCKO* Clone()
		{
			return ((::EBFLACABCKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBFLACABCKO_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBFLACABCKO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBFLACABCKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBFLACABCKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBFLACABCKO*))((::PBYTE)hIl2Cpp + EBFLACABCKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBFLACABCKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBFLACABCKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBFLACABCKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBFLACABCKO*))((::PBYTE)hIl2Cpp + EBFLACABCKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBFLACABCKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

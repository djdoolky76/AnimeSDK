#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPAJCFPNKAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPAJCFPNKAJ_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x20049430)
#define HPAJCFPNKAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x200497C0)
#define HPAJCFPNKAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x200499E0)
#define HPAJCFPNKAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x200493B0)
#define HPAJCFPNKAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20049380)
#define HPAJCFPNKAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20049370)
#define HPAJCFPNKAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20049540)
#define HPAJCFPNKAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x20049440)
#define HPAJCFPNKAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x200496B0)
#define HPAJCFPNKAJ_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x20049420)
#define HPAJCFPNKAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20049300)
#define HPAJCFPNKAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20049880)
#define HPAJCFPNKAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20049850)
#define HPAJCFPNKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20049360)
#define HPAJCFPNKAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200496E0)
#define HPAJCFPNKAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x20049740)

inline static constexpr unsigned int HPAJCFPNKAJ_TypeDefinitionIndex = 29971;

	class HPAJCFPNKAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPAJCFPNKAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPAJCFPNKAJ*>**)UnitySDK::FromName("", "HPAJCFPNKAJ")->GetStaticField(0x3F550);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPAJCFPNKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPAJCFPNKAJ*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPAJCFPNKAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPAJCFPNKAJ*>*(*)())((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPAJCFPNKAJ* Clone()
		{
			return ((::HPAJCFPNKAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPAJCFPNKAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPAJCFPNKAJ*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPAJCFPNKAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPAJCFPNKAJ*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPAJCFPNKAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

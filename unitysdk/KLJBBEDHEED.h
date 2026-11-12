#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKFMGCNDHGH;
class KLJBBEDHEED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLJBBEDHEED_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1FBA8F10)
#define KLJBBEDHEED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBA94B0)
#define KLJBBEDHEED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA9880)
#define KLJBBEDHEED_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBA8E30)
#define KLJBBEDHEED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBA8DA0)
#define KLJBBEDHEED_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8D90)
#define KLJBBEDHEED_EINLCDMBILL_OFFSET UNITYSDK_OFFSET(0x1FBA8F00)
#define KLJBBEDHEED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBA90D0)
#define KLJBBEDHEED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBA8F30)
#define KLJBBEDHEED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FBA8EE0)
#define KLJBBEDHEED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBA9250)
#define KLJBBEDHEED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBA8D50)
#define KLJBBEDHEED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBA9670)
#define KLJBBEDHEED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBA9590)
#define KLJBBEDHEED_NAHIEKJPKNH_OFFSET UNITYSDK_OFFSET(0x1FBA8EF0)
#define KLJBBEDHEED_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1FBA8F20)
#define KLJBBEDHEED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FBA8ED0)
#define KLJBBEDHEED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8D80)
#define KLJBBEDHEED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBA92E0)
#define KLJBBEDHEED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBA9340)

inline static constexpr unsigned int KLJBBEDHEED_TypeDefinitionIndex = 28709;

	class KLJBBEDHEED : public ::System::Object
	{
	public:
		::KKFMGCNDHGH* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean LBMBOGOMEBP; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::KLJBBEDHEED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KLJBBEDHEED*>**)UnitySDK::FromName("", "KLJBBEDHEED")->GetStaticField(0x19640);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IGFPJLHDAMO; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLJBBEDHEED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJBBEDHEED*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJBBEDHEED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KLJBBEDHEED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KLJBBEDHEED*>*(*)())((::PBYTE)hIl2Cpp + KLJBBEDHEED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLJBBEDHEED* Clone()
		{
			return ((::KLJBBEDHEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJBBEDHEED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean NAHIEKJPKNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_NAHIEKJPKNH_OFFSET))(this);
		}

		::System::Void EINLCDMBILL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLJBBEDHEED_EINLCDMBILL_OFFSET))(this, a1);
		}

		::KKFMGCNDHGH* ANALOEDDDHD()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::KKFMGCNDHGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFMGCNDHGH*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLJBBEDHEED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLJBBEDHEED*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLJBBEDHEED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJBBEDHEED*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLJBBEDHEED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

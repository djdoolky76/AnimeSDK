#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDFPANILFOH;
class KDMEFGANLKI;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDFPANILFOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D0FB0)
#define KDFPANILFOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D1320)
#define KDFPANILFOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D0950)
#define KDFPANILFOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D0860)
#define KDFPANILFOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0810)
#define KDFPANILFOH_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E7D09C0)
#define KDFPANILFOH_EKHKPDGOALG_OFFSET UNITYSDK_OFFSET(0x1E7D0A00)
#define KDFPANILFOH_EKMDONOOBCB_OFFSET UNITYSDK_OFFSET(0x1E7D09E0)
#define KDFPANILFOH_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E7D09D0)
#define KDFPANILFOH_EOHMFPCPINM_OFFSET UNITYSDK_OFFSET(0x1E7D09A0)
#define KDFPANILFOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D0A70)
#define KDFPANILFOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D0A10)
#define KDFPANILFOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D0C50)
#define KDFPANILFOH_HAEFFIFMNCP_OFFSET UNITYSDK_OFFSET(0x1E7D09B0)
#define KDFPANILFOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D07A0)
#define KDFPANILFOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D1200)
#define KDFPANILFOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D1100)
#define KDFPANILFOH_NOCAKCBNBGE_OFFSET UNITYSDK_OFFSET(0x1E7D09F0)
#define KDFPANILFOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D0800)
#define KDFPANILFOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D0D50)
#define KDFPANILFOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D0DB0)

inline static constexpr unsigned int KDFPANILFOH_TypeDefinitionIndex = 35095;

	class KDFPANILFOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>* MPJJCKAIAEA; // 0x18
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x20
		::System::UInt32 KMOKMCLCJMN; // 0x28
		::System::Boolean DEKGIAKGNME; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::KDFPANILFOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDFPANILFOH*>**)UnitySDK::FromName("", "KDFPANILFOH")->GetStaticField(0x10150);
		}

		static ::Google::Protobuf::FieldCodec_1<::KDMEFGANLKI*>** StaticGet_CNLBHEFLNKJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::KDMEFGANLKI*>**)UnitySDK::FromName("", "KDFPANILFOH")->GetStaticField(0x10158);
		}

		// static const ::System::Object ENEJKEPABDG; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object HGLEECDODDB; // 0x0
		// static const ::System::Object LPBONDIFLIL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDFPANILFOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFPANILFOH*))((::PBYTE)hIl2Cpp + KDFPANILFOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDFPANILFOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDFPANILFOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDFPANILFOH*>*(*)())((::PBYTE)hIl2Cpp + KDFPANILFOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDFPANILFOH* Clone()
		{
			return ((::KDFPANILFOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 EOHMFPCPINM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_EOHMFPCPINM_OFFSET))(this);
		}

		::System::Void HAEFFIFMNCP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDFPANILFOH_HAEFFIFMNCP_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + KDFPANILFOH_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>* EKMDONOOBCB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KDMEFGANLKI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_EKMDONOOBCB_OFFSET))(this);
		}

		::System::Boolean NOCAKCBNBGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_NOCAKCBNBGE_OFFSET))(this);
		}

		::System::Void EKHKPDGOALG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDFPANILFOH_EKHKPDGOALG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDFPANILFOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDFPANILFOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDFPANILFOH*))((::PBYTE)hIl2Cpp + KDFPANILFOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDFPANILFOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPANILFOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDFPANILFOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFPANILFOH*))((::PBYTE)hIl2Cpp + KDFPANILFOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDFPANILFOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

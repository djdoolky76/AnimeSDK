#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGKEDBCAADJ;
class LJJPJCBAHLM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGKEDBCAADJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F76E600)
#define GGKEDBCAADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F76EA30)
#define GGKEDBCAADJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F76E060)
#define GGKEDBCAADJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F76DFA0)
#define GGKEDBCAADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F76DF50)
#define GGKEDBCAADJ_EIHAHDDDFBG_OFFSET UNITYSDK_OFFSET(0x1F76E0D0)
#define GGKEDBCAADJ_EMOIAMBEBOM_OFFSET UNITYSDK_OFFSET(0x1F76E0B0)
#define GGKEDBCAADJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F76E290)
#define GGKEDBCAADJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F76E100)
#define GGKEDBCAADJ_FCMIJGACIDK_OFFSET UNITYSDK_OFFSET(0x1F76E0C0)
#define GGKEDBCAADJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F76E3C0)
#define GGKEDBCAADJ_HPEEJLOPPKB_OFFSET UNITYSDK_OFFSET(0x1F76E0F0)
#define GGKEDBCAADJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F76DEE0)
#define GGKEDBCAADJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F76E840)
#define GGKEDBCAADJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F76E790)
#define GGKEDBCAADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F76DF40)
#define GGKEDBCAADJ_POANCPLHLBI_OFFSET UNITYSDK_OFFSET(0x1F76E0E0)
#define GGKEDBCAADJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F76E430)
#define GGKEDBCAADJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F76E490)

inline static constexpr unsigned int GGKEDBCAADJ_TypeDefinitionIndex = 28309;

	class GGKEDBCAADJ : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::LJJPJCBAHLM*>* IEKCINEJCAC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GEPDADOHJHF; // 0x20
		::System::UInt32 NOMDEJJPCMH; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::LJJPJCBAHLM*>** StaticGet_FBIGFDLDHHN()
		{
			return (::Google::Protobuf::FieldCodec_1<::LJJPJCBAHLM*>**)UnitySDK::FromName("", "GGKEDBCAADJ")->GetStaticField(0xED00);
		}

		static ::Google::Protobuf::MessageParser_1<::GGKEDBCAADJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGKEDBCAADJ*>**)UnitySDK::FromName("", "GGKEDBCAADJ")->GetStaticField(0xED08);
		}

		// static const ::System::Object GCDEHDAKDHL; // 0x0
		// static const ::System::Object NOIBDPLLKGJ; // 0x0
		// static const ::System::Object NBOBCEEBHJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGKEDBCAADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGKEDBCAADJ*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGKEDBCAADJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGKEDBCAADJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGKEDBCAADJ*>*(*)())((::PBYTE)hIl2Cpp + GGKEDBCAADJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGKEDBCAADJ* Clone()
		{
			return ((::GGKEDBCAADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMOIAMBEBOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_EMOIAMBEBOM_OFFSET))(this);
		}

		::System::Void FCMIJGACIDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_FCMIJGACIDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LJJPJCBAHLM*>* EIHAHDDDFBG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LJJPJCBAHLM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_EIHAHDDDFBG_OFFSET))(this);
		}

		::System::UInt32 POANCPLHLBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_POANCPLHLBI_OFFSET))(this);
		}

		::System::Void HPEEJLOPPKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_HPEEJLOPPKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGKEDBCAADJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGKEDBCAADJ*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGKEDBCAADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGKEDBCAADJ*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGKEDBCAADJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

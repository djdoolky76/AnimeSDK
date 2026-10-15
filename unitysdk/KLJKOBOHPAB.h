#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJKOBOHPAB;
class MHCKKNGNKHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLJKOBOHPAB_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E88E710)
#define KLJKOBOHPAB_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E88E720)
#define KLJKOBOHPAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88EB90)
#define KLJKOBOHPAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88EF50)
#define KLJKOBOHPAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88E6E0)
#define KLJKOBOHPAB_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E88E750)
#define KLJKOBOHPAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88E640)
#define KLJKOBOHPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88E600)
#define KLJKOBOHPAB_DCDJIDBEFGD_OFFSET UNITYSDK_OFFSET(0x1E88E760)
#define KLJKOBOHPAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88E7B0)
#define KLJKOBOHPAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88E780)
#define KLJKOBOHPAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88E8F0)
#define KLJKOBOHPAB_GNEMOGLEHNF_OFFSET UNITYSDK_OFFSET(0x1E88E730)
#define KLJKOBOHPAB_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E88E740)
#define KLJKOBOHPAB_JBIGLLIFOFB_OFFSET UNITYSDK_OFFSET(0x1E88E770)
#define KLJKOBOHPAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E88E5C0)
#define KLJKOBOHPAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E88EE60)
#define KLJKOBOHPAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88EDA0)
#define KLJKOBOHPAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88E5F0)
#define KLJKOBOHPAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88E970)
#define KLJKOBOHPAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88E9D0)

	class KLJKOBOHPAB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MHCKKNGNKHK*>* KHBFICKDAPA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 MFMHPDFMGIN; // 0x24
		::System::UInt32 CIDFPJJEONE; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_IAEKKFPPGGJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KLJKOBOHPAB")->GetStaticField(0x21520);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLJKOBOHPAB")->GetStaticField(0x21528);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object IKHKFKFIGBC; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		// static const ::System::Object IOJCIGNHNOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLJKOBOHPAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJKOBOHPAB*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLJKOBOHPAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLJKOBOHPAB* Clone()
		{
			return ((::KLJKOBOHPAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MHCKKNGNKHK*>* GNEMOGLEHNF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MHCKKNGNKHK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_GNEMOGLEHNF_OFFSET))(this);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::UInt32 DCDJIDBEFGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_DCDJIDBEFGD_OFFSET))(this);
		}

		::System::Void JBIGLLIFOFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_JBIGLLIFOFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLJKOBOHPAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLJKOBOHPAB*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLJKOBOHPAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLJKOBOHPAB*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLJKOBOHPAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

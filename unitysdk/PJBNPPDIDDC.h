#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNLJCCLIOCM;
class PJBNPPDIDDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define PJBNPPDIDDC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF45CF0)
#define PJBNPPDIDDC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF45D00)
#define PJBNPPDIDDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF46350)
#define PJBNPPDIDDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF46790)
#define PJBNPPDIDDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF45C60)
#define PJBNPPDIDDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF45BB0)
#define PJBNPPDIDDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF45BA0)
#define PJBNPPDIDDC_DPLKNPKOMBA_OFFSET UNITYSDK_OFFSET(0x1DF45D20)
#define PJBNPPDIDDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF45E50)
#define PJBNPPDIDDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF45D30)
#define PJBNPPDIDDC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF45CC0)
#define PJBNPPDIDDC_FEBAAKOEDBM_OFFSET UNITYSDK_OFFSET(0x1DF45CE0)
#define PJBNPPDIDDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF45FF0)
#define PJBNPPDIDDC_HHNOCOEPMEH_OFFSET UNITYSDK_OFFSET(0x1DF45CD0)
#define PJBNPPDIDDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF45B60)
#define PJBNPPDIDDC_LBMOJJIDMAG_OFFSET UNITYSDK_OFFSET(0x1DF45CA0)
#define PJBNPPDIDDC_LGDJHPOEEIJ_OFFSET UNITYSDK_OFFSET(0x1DF45D10)
#define PJBNPPDIDDC_LIABCABEGHH_OFFSET UNITYSDK_OFFSET(0x1DF45C90)
#define PJBNPPDIDDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF46650)
#define PJBNPPDIDDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF46550)
#define PJBNPPDIDDC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF45CB0)
#define PJBNPPDIDDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF45B90)
#define PJBNPPDIDDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF46100)
#define PJBNPPDIDDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF46160)

inline static constexpr unsigned int PJBNPPDIDDC_TypeDefinitionIndex = 29101;

	class PJBNPPDIDDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::ItemList* HOPONLNEGOA; // 0x18
		::FNLJCCLIOCM* NCEKAFCHHJO; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 PPCKJOJIPEK; // 0x30
		static ::Google::Protobuf::MessageParser_1<::PJBNPPDIDDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PJBNPPDIDDC*>**)UnitySDK::FromName("", "PJBNPPDIDDC")->GetStaticField(0x35DD0);
		}

		// static const ::System::Object JPPGOFEKCDI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IGBPOIIKLCM; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object KOKPPJDDOAH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJBNPPDIDDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBNPPDIDDC*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJBNPPDIDDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PJBNPPDIDDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PJBNPPDIDDC*>*(*)())((::PBYTE)hIl2Cpp + PJBNPPDIDDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJBNPPDIDDC* Clone()
		{
			return ((::PJBNPPDIDDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_CLONE_OFFSET))(this);
		}

		::FNLJCCLIOCM* LIABCABEGHH()
		{
			return ((::FNLJCCLIOCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_LIABCABEGHH_OFFSET))(this);
		}

		::System::Void LBMOJJIDMAG(::FNLJCCLIOCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNLJCCLIOCM*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_LBMOJJIDMAG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 HHNOCOEPMEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_HHNOCOEPMEH_OFFSET))(this);
		}

		::System::Void FEBAAKOEDBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_FEBAAKOEDBM_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Proto::ItemList* LGDJHPOEEIJ()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_LGDJHPOEEIJ_OFFSET))(this);
		}

		::System::Void DPLKNPKOMBA(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_DPLKNPKOMBA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJBNPPDIDDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJBNPPDIDDC*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJBNPPDIDDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJBNPPDIDDC*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJBNPPDIDDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

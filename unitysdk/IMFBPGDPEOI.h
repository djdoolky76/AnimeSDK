#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMFBPGDPEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMFBPGDPEOI_ADFFDPPIFLC_OFFSET UNITYSDK_OFFSET(0x1E688D70)
#define IMFBPGDPEOI_ANEOEBGDEOL_OFFSET UNITYSDK_OFFSET(0x1E688DA0)
#define IMFBPGDPEOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6890E0)
#define IMFBPGDPEOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E689480)
#define IMFBPGDPEOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E688CC0)
#define IMFBPGDPEOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E688C80)
#define IMFBPGDPEOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E688C70)
#define IMFBPGDPEOI_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E688D30)
#define IMFBPGDPEOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E688E10)
#define IMFBPGDPEOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E688DB0)
#define IMFBPGDPEOI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E688D20)
#define IMFBPGDPEOI_FCIACLFENJO_OFFSET UNITYSDK_OFFSET(0x1E688D50)
#define IMFBPGDPEOI_FEBHCCBIDOA_OFFSET UNITYSDK_OFFSET(0x1E688D60)
#define IMFBPGDPEOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E688E60)
#define IMFBPGDPEOI_IGGKBCLAKBD_OFFSET UNITYSDK_OFFSET(0x1E688D90)
#define IMFBPGDPEOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E688C30)
#define IMFBPGDPEOI_KDOHFJOINHC_OFFSET UNITYSDK_OFFSET(0x1E688D80)
#define IMFBPGDPEOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6893D0)
#define IMFBPGDPEOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E689370)
#define IMFBPGDPEOI_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E688D40)
#define IMFBPGDPEOI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E688D10)
#define IMFBPGDPEOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E688C60)
#define IMFBPGDPEOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E688E90)
#define IMFBPGDPEOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E688EF0)

inline static constexpr unsigned int IMFBPGDPEOI_TypeDefinitionIndex = 26595;

	class IMFBPGDPEOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ILJKBJPJACE; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		::System::UInt32 GKOHBFHOFKN; // 0x20
		::System::UInt32 LOKAMFHEOMK; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::IMFBPGDPEOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IMFBPGDPEOI*>**)UnitySDK::FromName("", "IMFBPGDPEOI")->GetStaticField(0x529B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OOGFOPMFOHP; // 0x0
		// static const ::System::Object KOLKBMDFDGP; // 0x0
		// static const ::System::Object HGEHCCNENID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMFBPGDPEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMFBPGDPEOI*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMFBPGDPEOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IMFBPGDPEOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IMFBPGDPEOI*>*(*)())((::PBYTE)hIl2Cpp + IMFBPGDPEOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMFBPGDPEOI* Clone()
		{
			return ((::IMFBPGDPEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 FCIACLFENJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_FCIACLFENJO_OFFSET))(this);
		}

		::System::Void FEBHCCBIDOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_FEBHCCBIDOA_OFFSET))(this, a1);
		}

		::System::UInt32 ADFFDPPIFLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_ADFFDPPIFLC_OFFSET))(this);
		}

		::System::Void KDOHFJOINHC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_KDOHFJOINHC_OFFSET))(this, a1);
		}

		::System::UInt32 IGGKBCLAKBD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_IGGKBCLAKBD_OFFSET))(this);
		}

		::System::Void ANEOEBGDEOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_ANEOEBGDEOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMFBPGDPEOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMFBPGDPEOI*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMFBPGDPEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMFBPGDPEOI*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMFBPGDPEOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

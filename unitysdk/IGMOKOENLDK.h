#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGMOKOENLDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGMOKOENLDK_APBGOKEOHNF_OFFSET UNITYSDK_OFFSET(0x1E651BC0)
#define IGMOKOENLDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E652D90)
#define IGMOKOENLDK_CAPBIMAEKPK_OFFSET UNITYSDK_OFFSET(0x1E651BE0)
#define IGMOKOENLDK_CBFGMEHPOGB_OFFSET UNITYSDK_OFFSET(0x1E651C10)
#define IGMOKOENLDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E653010)
#define IGMOKOENLDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E651B60)
#define IGMOKOENLDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E651B10)
#define IGMOKOENLDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E651B00)
#define IGMOKOENLDK_EJIBKKLIKCO_OFFSET UNITYSDK_OFFSET(0x1E651BD0)
#define IGMOKOENLDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E651CD0)
#define IGMOKOENLDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E651CA0)
#define IGMOKOENLDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6522C0)
#define IGMOKOENLDK_HHPGDOKPCOO_OFFSET UNITYSDK_OFFSET(0x1E651BF0)
#define IGMOKOENLDK_IMKKCALKCCI_OFFSET UNITYSDK_OFFSET(0x1E651C90)
#define IGMOKOENLDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E651AC0)
#define IGMOKOENLDK_JKABLEKPPKP_OFFSET UNITYSDK_OFFSET(0x1E651C70)
#define IGMOKOENLDK_LBNBOHLLCHA_OFFSET UNITYSDK_OFFSET(0x1E651C50)
#define IGMOKOENLDK_LINGFOCLAIC_OFFSET UNITYSDK_OFFSET(0x1E651C00)
#define IGMOKOENLDK_LPOPDJCGPNL_OFFSET UNITYSDK_OFFSET(0x1E651C60)
#define IGMOKOENLDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E652F10)
#define IGMOKOENLDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E652E20)
#define IGMOKOENLDK_MHHABONOGGA_OFFSET UNITYSDK_OFFSET(0x1E651C40)
#define IGMOKOENLDK_OGHIKFLHCHM_OFFSET UNITYSDK_OFFSET(0x1E651C80)
#define IGMOKOENLDK_OGOCGJDCAOI_OFFSET UNITYSDK_OFFSET(0x1E651C30)
#define IGMOKOENLDK_OKNJDDLPBDM_OFFSET UNITYSDK_OFFSET(0x1E651C20)
#define IGMOKOENLDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E651AF0)
#define IGMOKOENLDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6529F0)
#define IGMOKOENLDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E652A50)

inline static constexpr unsigned int IGMOKOENLDK_TypeDefinitionIndex = 25463;

	class IGMOKOENLDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Double BABPENNPBLH; // 0x18
		::System::Double FFIIKBAMHHC; // 0x20
		::System::Double COMEFHPGIEL; // 0x28
		::System::Double EACCACKFFOC; // 0x30
		::System::Double GICFBCDGLFN; // 0x38
		::System::Double AABAIKOBEFP; // 0x40
		::System::Double HOFDJPOEOAA; // 0x48
		static ::Google::Protobuf::MessageParser_1<::IGMOKOENLDK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGMOKOENLDK*>**)UnitySDK::FromName("", "IGMOKOENLDK")->GetStaticField(0x4B900);
		}

		// static const ::System::Object KHPGPNGPCPG; // 0x0
		// static const ::System::Object FFHIOHIAMJN; // 0x0
		// static const ::System::Object BEEFFGIGMLC; // 0x0
		// static const ::System::Object OJJJIKKFAGD; // 0x0
		// static const ::System::Object DIMLEEMFMHJ; // 0x0
		// static const ::System::Object FGEHBGBKMBM; // 0x0
		// static const ::System::Object CDDDPNGJCGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGMOKOENLDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGMOKOENLDK*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGMOKOENLDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGMOKOENLDK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGMOKOENLDK*>*(*)())((::PBYTE)hIl2Cpp + IGMOKOENLDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGMOKOENLDK* Clone()
		{
			return ((::IGMOKOENLDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CLONE_OFFSET))(this);
		}

		::System::Double APBGOKEOHNF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_APBGOKEOHNF_OFFSET))(this);
		}

		::System::Void EJIBKKLIKCO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_EJIBKKLIKCO_OFFSET))(this, a1);
		}

		::System::Double CAPBIMAEKPK()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CAPBIMAEKPK_OFFSET))(this);
		}

		::System::Void HHPGDOKPCOO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_HHPGDOKPCOO_OFFSET))(this, a1);
		}

		::System::Double LINGFOCLAIC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_LINGFOCLAIC_OFFSET))(this);
		}

		::System::Void CBFGMEHPOGB(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CBFGMEHPOGB_OFFSET))(this, a1);
		}

		::System::Double OKNJDDLPBDM()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_OKNJDDLPBDM_OFFSET))(this);
		}

		::System::Void OGOCGJDCAOI(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_OGOCGJDCAOI_OFFSET))(this, a1);
		}

		::System::Double MHHABONOGGA()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_MHHABONOGGA_OFFSET))(this);
		}

		::System::Void LBNBOHLLCHA(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_LBNBOHLLCHA_OFFSET))(this, a1);
		}

		::System::Double LPOPDJCGPNL()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_LPOPDJCGPNL_OFFSET))(this);
		}

		::System::Void JKABLEKPPKP(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_JKABLEKPPKP_OFFSET))(this, a1);
		}

		::System::Double OGHIKFLHCHM()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_OGHIKFLHCHM_OFFSET))(this);
		}

		::System::Void IMKKCALKCCI(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + IGMOKOENLDK_IMKKCALKCCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGMOKOENLDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGMOKOENLDK*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMOKOENLDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGMOKOENLDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGMOKOENLDK*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGMOKOENLDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

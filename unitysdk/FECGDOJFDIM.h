#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECGDOJFDIM;
class GAAMBBFPCHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FECGDOJFDIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E360490)
#define FECGDOJFDIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E360900)
#define FECGDOJFDIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35FE00)
#define FECGDOJFDIM_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E35FE80)
#define FECGDOJFDIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35FD10)
#define FECGDOJFDIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35FCC0)
#define FECGDOJFDIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35FED0)
#define FECGDOJFDIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35FEA0)
#define FECGDOJFDIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E35FE60)
#define FECGDOJFDIM_FAPHJILDPNE_OFFSET UNITYSDK_OFFSET(0x1E35FE70)
#define FECGDOJFDIM_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E35FE90)
#define FECGDOJFDIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E360130)
#define FECGDOJFDIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35FC80)
#define FECGDOJFDIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E360760)
#define FECGDOJFDIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3605E0)
#define FECGDOJFDIM_NMMBFGNHDIH_OFFSET UNITYSDK_OFFSET(0x1E35FE40)
#define FECGDOJFDIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E35FE50)
#define FECGDOJFDIM_OJECLJEIFLJ_OFFSET UNITYSDK_OFFSET(0x1E35FE30)
#define FECGDOJFDIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35FCB0)
#define FECGDOJFDIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3602A0)
#define FECGDOJFDIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E360300)

inline static constexpr unsigned int FECGDOJFDIM_TypeDefinitionIndex = 30899;

	class FECGDOJFDIM : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LNCPGCKNOGO; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::GAAMBBFPCHB* GAPDBIBJBAG; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KKIJBOAFFJJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FECGDOJFDIM")->GetStaticField(0x5BFD0);
		}

		static ::Google::Protobuf::MessageParser_1<::FECGDOJFDIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FECGDOJFDIM*>**)UnitySDK::FromName("", "FECGDOJFDIM")->GetStaticField(0x5BFD8);
		}

		// static const ::System::Object LHMKKEEFHLB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BCFAFNEADEN; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FECGDOJFDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECGDOJFDIM*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FECGDOJFDIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FECGDOJFDIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FECGDOJFDIM*>*(*)())((::PBYTE)hIl2Cpp + FECGDOJFDIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FECGDOJFDIM* Clone()
		{
			return ((::FECGDOJFDIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_CLONE_OFFSET))(this);
		}

		::GAAMBBFPCHB* OJECLJEIFLJ()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_OJECLJEIFLJ_OFFSET))(this);
		}

		::System::Void NMMBFGNHDIH(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_NMMBFGNHDIH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FECGDOJFDIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAPHJILDPNE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_FAPHJILDPNE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FECGDOJFDIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FECGDOJFDIM*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FECGDOJFDIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FECGDOJFDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECGDOJFDIM*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FECGDOJFDIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHABPBGINDK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHABPBGINDK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E385550)
#define FHABPBGINDK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E385890)
#define FHABPBGINDK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E385030)
#define FHABPBGINDK_CPCMJBDMODO_OFFSET UNITYSDK_OFFSET(0x1E385090)
#define FHABPBGINDK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E384F90)
#define FHABPBGINDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E384F40)
#define FHABPBGINDK_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1E385070)
#define FHABPBGINDK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E385150)
#define FHABPBGINDK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3850D0)
#define FHABPBGINDK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3850C0)
#define FHABPBGINDK_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1E385060)
#define FHABPBGINDK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E385260)
#define FHABPBGINDK_GOPLCGGEACN_OFFSET UNITYSDK_OFFSET(0x1E385080)
#define FHABPBGINDK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E384F00)
#define FHABPBGINDK_LILGMPFFMIC_OFFSET UNITYSDK_OFFSET(0x1E3850A0)
#define FHABPBGINDK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E385790)
#define FHABPBGINDK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E385730)
#define FHABPBGINDK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3850B0)
#define FHABPBGINDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E384F30)
#define FHABPBGINDK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E385360)
#define FHABPBGINDK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3853C0)

	class FHABPBGINDK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LDNDDLEHKKE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 CKHHCDKNCID; // 0x24
		::System::UInt32 BEIPFCCPIJB; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHABPBGINDK")->GetStaticField(0x5EE20);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_OOENIGGOGBH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "FHABPBGINDK")->GetStaticField(0x5EE28);
		}

		// static const ::System::Object DFLDAOLENMB; // 0x0
		// static const ::System::Object MJGKNNHCJCH; // 0x0
		// static const ::System::Object POEKNBCEJHL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHABPBGINDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHABPBGINDK*))((::PBYTE)hIl2Cpp + FHABPBGINDK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHABPBGINDK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHABPBGINDK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHABPBGINDK* Clone()
		{
			return ((::FHABPBGINDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHABPBGINDK_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::System::UInt32 GOPLCGGEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_GOPLCGGEACN_OFFSET))(this);
		}

		::System::Void CPCMJBDMODO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHABPBGINDK_CPCMJBDMODO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LILGMPFFMIC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_LILGMPFFMIC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHABPBGINDK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHABPBGINDK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHABPBGINDK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHABPBGINDK*))((::PBYTE)hIl2Cpp + FHABPBGINDK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHABPBGINDK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHABPBGINDK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHABPBGINDK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHABPBGINDK*))((::PBYTE)hIl2Cpp + FHABPBGINDK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHABPBGINDK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

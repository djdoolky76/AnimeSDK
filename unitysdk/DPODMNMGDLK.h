#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKAHEDAHNHL;
class DPODMNMGDLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DPODMNMGDLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203E0420)
#define DPODMNMGDLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x203E0840)
#define DPODMNMGDLK_CLONE_OFFSET UNITYSDK_OFFSET(0x203DFEE0)
#define DPODMNMGDLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203DFE40)
#define DPODMNMGDLK_CTOR_OFFSET UNITYSDK_OFFSET(0x203DFE00)
#define DPODMNMGDLK_EPOCFHFKPFP_OFFSET UNITYSDK_OFFSET(0x203DFF50)
#define DPODMNMGDLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203E00C0)
#define DPODMNMGDLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x203DFF60)
#define DPODMNMGDLK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203DFF20)
#define DPODMNMGDLK_FANNBJLCHLE_OFFSET UNITYSDK_OFFSET(0x203DFF30)
#define DPODMNMGDLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203E01F0)
#define DPODMNMGDLK_GGKMPPEPAAG_OFFSET UNITYSDK_OFFSET(0x203DFF40)
#define DPODMNMGDLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203DFDC0)
#define DPODMNMGDLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203E0660)
#define DPODMNMGDLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203E05B0)
#define DPODMNMGDLK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203DFF10)
#define DPODMNMGDLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203DFDF0)
#define DPODMNMGDLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203E0260)
#define DPODMNMGDLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x203E02C0)

inline static constexpr unsigned int DPODMNMGDLK_TypeDefinitionIndex = 31796;

	class DPODMNMGDLK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>* NKIPIFNAIDC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 EFLHLEJELBG; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DPODMNMGDLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DPODMNMGDLK*>**)UnitySDK::FromName("", "DPODMNMGDLK")->GetStaticField(0x3CFA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BKAHEDAHNHL*>** StaticGet_MCILEHJAHLO()
		{
			return (::Google::Protobuf::FieldCodec_1<::BKAHEDAHNHL*>**)UnitySDK::FromName("", "DPODMNMGDLK")->GetStaticField(0x3CFA8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JGGPPIGJHMC; // 0x0
		// static const ::System::Object BJCGEAIJBFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DPODMNMGDLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPODMNMGDLK*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPODMNMGDLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DPODMNMGDLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DPODMNMGDLK*>*(*)())((::PBYTE)hIl2Cpp + DPODMNMGDLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DPODMNMGDLK* Clone()
		{
			return ((::DPODMNMGDLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPODMNMGDLK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>* FANNBJLCHLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BKAHEDAHNHL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_FANNBJLCHLE_OFFSET))(this);
		}

		::System::UInt32 GGKMPPEPAAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_GGKMPPEPAAG_OFFSET))(this);
		}

		::System::Void EPOCFHFKPFP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DPODMNMGDLK_EPOCFHFKPFP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPODMNMGDLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPODMNMGDLK*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPODMNMGDLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DPODMNMGDLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPODMNMGDLK*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DPODMNMGDLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

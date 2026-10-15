#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEEKOEECHB;
class HKNFAFFEHDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKNFAFFEHDL_BFLBEIIBIKN_OFFSET UNITYSDK_OFFSET(0x1E5896F0)
#define HKNFAFFEHDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E589BC0)
#define HKNFAFFEHDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E589EB0)
#define HKNFAFFEHDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E589670)
#define HKNFAFFEHDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E589600)
#define HKNFAFFEHDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5895F0)
#define HKNFAFFEHDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5898B0)
#define HKNFAFFEHDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E589730)
#define HKNFAFFEHDL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E589720)
#define HKNFAFFEHDL_FLJOBDNCFEP_OFFSET UNITYSDK_OFFSET(0x1E589700)
#define HKNFAFFEHDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E589A30)
#define HKNFAFFEHDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5895B0)
#define HKNFAFFEHDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E589D10)
#define HKNFAFFEHDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E589C90)
#define HKNFAFFEHDL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E589710)
#define HKNFAFFEHDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5895E0)
#define HKNFAFFEHDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E589A80)
#define HKNFAFFEHDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E589AE0)

inline static constexpr unsigned int HKNFAFFEHDL_TypeDefinitionIndex = 26721;

	class HKNFAFFEHDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CIEEKOEECHB* ILEOLMKCJMB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HKNFAFFEHDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HKNFAFFEHDL*>**)UnitySDK::FromName("", "HKNFAFFEHDL")->GetStaticField(0x37490);
		}

		// static const ::System::Object IBBLPNOMPNG; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKNFAFFEHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNFAFFEHDL*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKNFAFFEHDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HKNFAFFEHDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HKNFAFFEHDL*>*(*)())((::PBYTE)hIl2Cpp + HKNFAFFEHDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKNFAFFEHDL* Clone()
		{
			return ((::HKNFAFFEHDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_CLONE_OFFSET))(this);
		}

		::CIEEKOEECHB* BFLBEIIBIKN()
		{
			return ((::CIEEKOEECHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_BFLBEIIBIKN_OFFSET))(this);
		}

		::System::Void FLJOBDNCFEP(::CIEEKOEECHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIEEKOEECHB*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_FLJOBDNCFEP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKNFAFFEHDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKNFAFFEHDL*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKNFAFFEHDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKNFAFFEHDL*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKNFAFFEHDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

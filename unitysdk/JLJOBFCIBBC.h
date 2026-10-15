#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJOBFCIBBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JLJOBFCIBBC_AGFLGDOCMCB_OFFSET UNITYSDK_OFFSET(0x1E750390)
#define JLJOBFCIBBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E750700)
#define JLJOBFCIBBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7509D0)
#define JLJOBFCIBBC_CKBDGCNDCJJ_OFFSET UNITYSDK_OFFSET(0x1E7503A0)
#define JLJOBFCIBBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E750300)
#define JLJOBFCIBBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7502D0)
#define JLJOBFCIBBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7502C0)
#define JLJOBFCIBBC_EHMCHEJIDFA_OFFSET UNITYSDK_OFFSET(0x1E750370)
#define JLJOBFCIBBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7504C0)
#define JLJOBFCIBBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7503B0)
#define JLJOBFCIBBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E750590)
#define JLJOBFCIBBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E750250)
#define JLJOBFCIBBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E750850)
#define JLJOBFCIBBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E750810)
#define JLJOBFCIBBC_MKOKIOMDKOH_OFFSET UNITYSDK_OFFSET(0x1E750380)
#define JLJOBFCIBBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7502B0)
#define JLJOBFCIBBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7505C0)
#define JLJOBFCIBBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E750620)

inline static constexpr unsigned int JLJOBFCIBBC_TypeDefinitionIndex = 28619;

	class JLJOBFCIBBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DIODHMIDKPL; // 0x18
		::System::UInt32 DDJCFFNPCNO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JLJOBFCIBBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JLJOBFCIBBC*>**)UnitySDK::FromName("", "JLJOBFCIBBC")->GetStaticField(0x64A10);
		}

		// static const ::System::Object OPBKFKAEABK; // 0x0
		// static const ::System::Object BHBEDNPIMEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JLJOBFCIBBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJOBFCIBBC*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JLJOBFCIBBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JLJOBFCIBBC*>*(*)())((::PBYTE)hIl2Cpp + JLJOBFCIBBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JLJOBFCIBBC* Clone()
		{
			return ((::JLJOBFCIBBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EHMCHEJIDFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_EHMCHEJIDFA_OFFSET))(this);
		}

		::System::Void MKOKIOMDKOH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_MKOKIOMDKOH_OFFSET))(this, a1);
		}

		::System::UInt32 AGFLGDOCMCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_AGFLGDOCMCB_OFFSET))(this);
		}

		::System::Void CKBDGCNDCJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CKBDGCNDCJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JLJOBFCIBBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLJOBFCIBBC*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JLJOBFCIBBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJOBFCIBBC*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JLJOBFCIBBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

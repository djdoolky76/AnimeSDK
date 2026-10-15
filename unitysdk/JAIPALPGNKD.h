#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIPALPGNKD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JAIPALPGNKD_AKHJNBFKLNI_OFFSET UNITYSDK_OFFSET(0x1E6C15E0)
#define JAIPALPGNKD_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1E6C15F0)
#define JAIPALPGNKD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C1B80)
#define JAIPALPGNKD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1ED0)
#define JAIPALPGNKD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C15B0)
#define JAIPALPGNKD_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1E6C1600)
#define JAIPALPGNKD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C1500)
#define JAIPALPGNKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C14B0)
#define JAIPALPGNKD_EALOAPAKGPL_OFFSET UNITYSDK_OFFSET(0x1E6C1660)
#define JAIPALPGNKD_EPPCDHJJPMH_OFFSET UNITYSDK_OFFSET(0x1E6C1640)
#define JAIPALPGNKD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C1710)
#define JAIPALPGNKD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C1670)
#define JAIPALPGNKD_FGAOMEBGAPH_OFFSET UNITYSDK_OFFSET(0x1E6C1620)
#define JAIPALPGNKD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C17B0)
#define JAIPALPGNKD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C1470)
#define JAIPALPGNKD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C1DC0)
#define JAIPALPGNKD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C1D50)
#define JAIPALPGNKD_OECKCMKBMAE_OFFSET UNITYSDK_OFFSET(0x1E6C1630)
#define JAIPALPGNKD_OKFFEJGLOCH_OFFSET UNITYSDK_OFFSET(0x1E6C1610)
#define JAIPALPGNKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C14A0)
#define JAIPALPGNKD_POCILFFLDOH_OFFSET UNITYSDK_OFFSET(0x1E6C1650)
#define JAIPALPGNKD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C18D0)
#define JAIPALPGNKD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C1930)

inline static constexpr unsigned int JAIPALPGNKD_TypeDefinitionIndex = 30649;

	class JAIPALPGNKD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HNEHDMCIAEJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BMGMACIBMFH; // 0x20
		::System::Boolean BKPKOJOMPKC; // 0x24
		::System::Boolean PMDCBGELEOF; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt64 GODIGICNHBG; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FPEPGJAMBME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JAIPALPGNKD")->GetStaticField(0x57620);
		}

		static ::Google::Protobuf::MessageParser_1<::JAIPALPGNKD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JAIPALPGNKD*>**)UnitySDK::FromName("", "JAIPALPGNKD")->GetStaticField(0x57628);
		}

		// static const ::System::Object OHJJBLFFNHI; // 0x0
		// static const ::System::Object FPEDPMAHHND; // 0x0
		// static const ::System::Object EMLPFGOPBHN; // 0x0
		// static const ::System::Object PGIBPCIJHME; // 0x0
		// static const ::System::Object LICENIHDDLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JAIPALPGNKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAIPALPGNKD*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAIPALPGNKD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JAIPALPGNKD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JAIPALPGNKD*>*(*)())((::PBYTE)hIl2Cpp + JAIPALPGNKD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JAIPALPGNKD* Clone()
		{
			return ((::JAIPALPGNKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKHJNBFKLNI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_AKHJNBFKLNI_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JAIPALPGNKD_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean OKFFEJGLOCH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_OKFFEJGLOCH_OFFSET))(this);
		}

		::System::Void FGAOMEBGAPH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAIPALPGNKD_FGAOMEBGAPH_OFFSET))(this, a1);
		}

		::System::Boolean OECKCMKBMAE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_OECKCMKBMAE_OFFSET))(this);
		}

		::System::Void EPPCDHJJPMH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAIPALPGNKD_EPPCDHJJPMH_OFFSET))(this, a1);
		}

		::System::UInt64 POCILFFLDOH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_POCILFFLDOH_OFFSET))(this);
		}

		::System::Void EALOAPAKGPL(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JAIPALPGNKD_EALOAPAKGPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JAIPALPGNKD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JAIPALPGNKD*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JAIPALPGNKD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JAIPALPGNKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAIPALPGNKD*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JAIPALPGNKD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOFPJFHIFKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOFPJFHIFKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB89700)
#define NOFPJFHIFKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB89960)
#define NOFPJFHIFKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB89310)
#define NOFPJFHIFKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB892D0)
#define NOFPJFHIFKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB892C0)
#define NOFPJFHIFKK_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1EB89370)
#define NOFPJFHIFKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB89480)
#define NOFPJFHIFKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB893A0)
#define NOFPJFHIFKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB89560)
#define NOFPJFHIFKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB89280)
#define NOFPJFHIFKK_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1EB89360)
#define NOFPJFHIFKK_LGIDEFJOLBC_OFFSET UNITYSDK_OFFSET(0x1EB89390)
#define NOFPJFHIFKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB897E0)
#define NOFPJFHIFKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB897A0)
#define NOFPJFHIFKK_NPILNPEJEJF_OFFSET UNITYSDK_OFFSET(0x1EB89380)
#define NOFPJFHIFKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB892B0)
#define NOFPJFHIFKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB89590)
#define NOFPJFHIFKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB895F0)

inline static constexpr unsigned int NOFPJFHIFKK_TypeDefinitionIndex = 26926;

	class NOFPJFHIFKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDPMGABNGKO; // 0x18
		::System::Boolean IALIHEFEMDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NOFPJFHIFKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOFPJFHIFKK*>**)UnitySDK::FromName("", "NOFPJFHIFKK")->GetStaticField(0xBD80);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object FJNMCFIDCLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOFPJFHIFKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOFPJFHIFKK*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOFPJFHIFKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOFPJFHIFKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOFPJFHIFKK*>*(*)())((::PBYTE)hIl2Cpp + NOFPJFHIFKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOFPJFHIFKK* Clone()
		{
			return ((::NOFPJFHIFKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::System::Boolean NPILNPEJEJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_NPILNPEJEJF_OFFSET))(this);
		}

		::System::Void LGIDEFJOLBC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_LGIDEFJOLBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOFPJFHIFKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOFPJFHIFKK*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOFPJFHIFKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOFPJFHIFKK*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOFPJFHIFKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

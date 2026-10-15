#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCADAPOHGKB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCADAPOHGKB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D62E0)
#define BCADAPOHGKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D6600)
#define BCADAPOHGKB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D5E60)
#define BCADAPOHGKB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E8D5EF0)
#define BCADAPOHGKB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D5E20)
#define BCADAPOHGKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5E10)
#define BCADAPOHGKB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D6000)
#define BCADAPOHGKB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D5F10)
#define BCADAPOHGKB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D60E0)
#define BCADAPOHGKB_HFNKNOLMOAG_OFFSET UNITYSDK_OFFSET(0x1E8D5EB0)
#define BCADAPOHGKB_HOPNOJMGCOD_OFFSET UNITYSDK_OFFSET(0x1E8D5EE0)
#define BCADAPOHGKB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D5DD0)
#define BCADAPOHGKB_MDKGBLIFECN_OFFSET UNITYSDK_OFFSET(0x1E8D5ED0)
#define BCADAPOHGKB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E8D5F00)
#define BCADAPOHGKB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D6450)
#define BCADAPOHGKB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D6400)
#define BCADAPOHGKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5E00)
#define BCADAPOHGKB_PMNNGMDEDIB_OFFSET UNITYSDK_OFFSET(0x1E8D5EC0)
#define BCADAPOHGKB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D6110)
#define BCADAPOHGKB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D6170)

inline static constexpr unsigned int BCADAPOHGKB_TypeDefinitionIndex = 26783;

	class BCADAPOHGKB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::Boolean PCALNBBLDLG; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IKKLADEKOON; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BCADAPOHGKB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BCADAPOHGKB*>**)UnitySDK::FromName("", "BCADAPOHGKB")->GetStaticField(0x170D0);
		}

		// static const ::System::Object LCKGAJBNODP; // 0x0
		// static const ::System::Object HNMBPPLAINN; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCADAPOHGKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCADAPOHGKB*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCADAPOHGKB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BCADAPOHGKB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BCADAPOHGKB*>*(*)())((::PBYTE)hIl2Cpp + BCADAPOHGKB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCADAPOHGKB* Clone()
		{
			return ((::BCADAPOHGKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_CLONE_OFFSET))(this);
		}

		::System::UInt32 HFNKNOLMOAG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_HFNKNOLMOAG_OFFSET))(this);
		}

		::System::Void PMNNGMDEDIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCADAPOHGKB_PMNNGMDEDIB_OFFSET))(this, a1);
		}

		::System::Boolean MDKGBLIFECN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_MDKGBLIFECN_OFFSET))(this);
		}

		::System::Void HOPNOJMGCOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BCADAPOHGKB_HOPNOJMGCOD_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCADAPOHGKB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCADAPOHGKB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCADAPOHGKB*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCADAPOHGKB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCADAPOHGKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCADAPOHGKB*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCADAPOHGKB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

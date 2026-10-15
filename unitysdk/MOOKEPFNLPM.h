#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOOKEPFNLPM;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MOOKEPFNLPM_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1EAB1F30)
#define MOOKEPFNLPM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAB2470)
#define MOOKEPFNLPM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAB2810)
#define MOOKEPFNLPM_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAB1E90)
#define MOOKEPFNLPM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAB1E20)
#define MOOKEPFNLPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1E10)
#define MOOKEPFNLPM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAB2100)
#define MOOKEPFNLPM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAB1F70)
#define MOOKEPFNLPM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAB1F60)
#define MOOKEPFNLPM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAB2290)
#define MOOKEPFNLPM_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EAB1F20)
#define MOOKEPFNLPM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAB1DD0)
#define MOOKEPFNLPM_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EAB1F10)
#define MOOKEPFNLPM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAB2650)
#define MOOKEPFNLPM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAB25C0)
#define MOOKEPFNLPM_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1EAB1F40)
#define MOOKEPFNLPM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAB1F50)
#define MOOKEPFNLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAB1E00)
#define MOOKEPFNLPM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAB22D0)
#define MOOKEPFNLPM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAB2330)

	class MOOKEPFNLPM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x18
		::System::UInt32 HJEGLCJEOKC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MOOKEPFNLPM")->GetStaticField(0x5AFA0);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MOOKEPFNLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MOOKEPFNLPM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MOOKEPFNLPM* Clone()
		{
			return ((::MOOKEPFNLPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MOOKEPFNLPM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MOOKEPFNLPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOOKEPFNLPM*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MOOKEPFNLPM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

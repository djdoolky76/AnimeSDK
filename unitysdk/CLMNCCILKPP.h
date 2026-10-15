#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class CLMNCCILKPP;
class JLJPFFILKIO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLMNCCILKPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FBFB0)
#define CLMNCCILKPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FC380)
#define CLMNCCILKPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FB820)
#define CLMNCCILKPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FB760)
#define CLMNCCILKPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FB750)
#define CLMNCCILKPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FBB80)
#define CLMNCCILKPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FB950)
#define CLMNCCILKPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0FB900)
#define CLMNCCILKPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FBDB0)
#define CLMNCCILKPP_IFECPLFEPIE_OFFSET UNITYSDK_OFFSET(0x1E0FB910)
#define CLMNCCILKPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FB710)
#define CLMNCCILKPP_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x1E0FB930)
#define CLMNCCILKPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FC1C0)
#define CLMNCCILKPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FC0B0)
#define CLMNCCILKPP_MNPKDNPEKDH_OFFSET UNITYSDK_OFFSET(0x1E0FB920)
#define CLMNCCILKPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0FB8F0)
#define CLMNCCILKPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FB740)
#define CLMNCCILKPP_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x1E0FB940)
#define CLMNCCILKPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FBE10)
#define CLMNCCILKPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FBE70)

	class CLMNCCILKPP : public ::System::Object
	{
	public:
		::JLJPFFILKIO* KMJKJFJEDBF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::BPJCKMPBAFC* GMBIBLEDALJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLMNCCILKPP")->GetStaticField(0x1D650);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JJBDGCGPPFI; // 0x0
		// static const ::System::Object EEDDEINLCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLMNCCILKPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLMNCCILKPP*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLMNCCILKPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLMNCCILKPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLMNCCILKPP* Clone()
		{
			return ((::CLMNCCILKPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLMNCCILKPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::BPJCKMPBAFC* IFECPLFEPIE()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_IFECPLFEPIE_OFFSET))(this);
		}

		::System::Void MNPKDNPEKDH(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_MNPKDNPEKDH_OFFSET))(this, a1);
		}

		::JLJPFFILKIO* KGLIPAJLDMC()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLMNCCILKPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLMNCCILKPP*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLMNCCILKPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLMNCCILKPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLMNCCILKPP*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLMNCCILKPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

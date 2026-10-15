#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDJALKEGPLI;
class NMACHAFCGNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMACHAFCGNI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6A4E0)
#define NMACHAFCGNI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6A870)
#define NMACHAFCGNI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB69E90)
#define NMACHAFCGNI_CMOCHHJFHLF_OFFSET UNITYSDK_OFFSET(0x1EB69F70)
#define NMACHAFCGNI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB69E00)
#define NMACHAFCGNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB69DF0)
#define NMACHAFCGNI_DOIMBAOLJNC_OFFSET UNITYSDK_OFFSET(0x1EB69FA0)
#define NMACHAFCGNI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6A0B0)
#define NMACHAFCGNI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB69FB0)
#define NMACHAFCGNI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6A250)
#define NMACHAFCGNI_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1EB69F40)
#define NMACHAFCGNI_GPLGNELNBFG_OFFSET UNITYSDK_OFFSET(0x1EB69F50)
#define NMACHAFCGNI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB69DB0)
#define NMACHAFCGNI_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1EB69F30)
#define NMACHAFCGNI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6A770)
#define NMACHAFCGNI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6A6A0)
#define NMACHAFCGNI_MOGCOOHPCEN_OFFSET UNITYSDK_OFFSET(0x1EB69F90)
#define NMACHAFCGNI_NPJOLKEIFCC_OFFSET UNITYSDK_OFFSET(0x1EB69F60)
#define NMACHAFCGNI_OEGHLJOMGEK_OFFSET UNITYSDK_OFFSET(0x1EB69F80)
#define NMACHAFCGNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB69DE0)
#define NMACHAFCGNI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6A2F0)
#define NMACHAFCGNI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6A350)

inline static constexpr unsigned int NMACHAFCGNI_TypeDefinitionIndex = 31609;

	class NMACHAFCGNI : public ::System::Object
	{
	public:
		::IDJALKEGPLI* EJLCABNDOMM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JNDHOBKBLAC; // 0x20
		::System::UInt32 HJEGLCJEOKC; // 0x24
		::System::UInt32 FGAPAENOFFM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMACHAFCGNI")->GetStaticField(0x6BC60);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object KAOOHFDFFIN; // 0x0
		// static const ::System::Object HFAACCOPBJN; // 0x0
		// static const ::System::Object DGKFMBMFPLP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMACHAFCGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMACHAFCGNI*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMACHAFCGNI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMACHAFCGNI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMACHAFCGNI* Clone()
		{
			return ((::NMACHAFCGNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMACHAFCGNI_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 GPLGNELNBFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_GPLGNELNBFG_OFFSET))(this);
		}

		::System::Void NPJOLKEIFCC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMACHAFCGNI_NPJOLKEIFCC_OFFSET))(this, a1);
		}

		::IDJALKEGPLI* CMOCHHJFHLF()
		{
			return ((::IDJALKEGPLI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_CMOCHHJFHLF_OFFSET))(this);
		}

		::System::Void OEGHLJOMGEK(::IDJALKEGPLI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDJALKEGPLI*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_OEGHLJOMGEK_OFFSET))(this, a1);
		}

		::System::UInt32 MOGCOOHPCEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_MOGCOOHPCEN_OFFSET))(this);
		}

		::System::Void DOIMBAOLJNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMACHAFCGNI_DOIMBAOLJNC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMACHAFCGNI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMACHAFCGNI*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMACHAFCGNI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMACHAFCGNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMACHAFCGNI*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMACHAFCGNI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

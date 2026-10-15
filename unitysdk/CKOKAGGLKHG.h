#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKOKAGGLKHG;
class NLAPCKJBJNB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKOKAGGLKHG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0EE2F0)
#define CKOKAGGLKHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EE730)
#define CKOKAGGLKHG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0EDC50)
#define CKOKAGGLKHG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0EDB90)
#define CKOKAGGLKHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EDB40)
#define CKOKAGGLKHG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0EDD50)
#define CKOKAGGLKHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0EDCF0)
#define CKOKAGGLKHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0EDF90)
#define CKOKAGGLKHG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0EDAD0)
#define CKOKAGGLKHG_JPFDJDLKDPO_OFFSET UNITYSDK_OFFSET(0x1E0EDCE0)
#define CKOKAGGLKHG_KBGGDCBJOKK_OFFSET UNITYSDK_OFFSET(0x1E0EDCA0)
#define CKOKAGGLKHG_KKACEHFHKAD_OFFSET UNITYSDK_OFFSET(0x1E0EDCD0)
#define CKOKAGGLKHG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0EE4D0)
#define CKOKAGGLKHG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0EE410)
#define CKOKAGGLKHG_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E0EDCC0)
#define CKOKAGGLKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0EDB30)
#define CKOKAGGLKHG_POLGFPNLGEC_OFFSET UNITYSDK_OFFSET(0x1E0EDCB0)
#define CKOKAGGLKHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0EE110)
#define CKOKAGGLKHG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0EE170)

inline static constexpr unsigned int CKOKAGGLKHG_TypeDefinitionIndex = 25647;

	class CKOKAGGLKHG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NLAPCKJBJNB*>* CBFGBDBJHID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JIDPMKCLNJJ; // 0x20
		::System::Byte _padding0[0x4];
		::System::Double KKOEBLBOMCP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::CKOKAGGLKHG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKOKAGGLKHG*>**)UnitySDK::FromName("", "CKOKAGGLKHG")->GetStaticField(0x1B670);
		}

		static ::Google::Protobuf::FieldCodec_1<::NLAPCKJBJNB*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::NLAPCKJBJNB*>**)UnitySDK::FromName("", "CKOKAGGLKHG")->GetStaticField(0x1B678);
		}

		// static const ::System::Object MFJMMNKOIPN; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object PEHAFMAOCMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKOKAGGLKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKOKAGGLKHG*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKOKAGGLKHG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKOKAGGLKHG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKOKAGGLKHG*>*(*)())((::PBYTE)hIl2Cpp + CKOKAGGLKHG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKOKAGGLKHG* Clone()
		{
			return ((::CKOKAGGLKHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBGGDCBJOKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_KBGGDCBJOKK_OFFSET))(this);
		}

		::System::Void POLGFPNLGEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_POLGFPNLGEC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NLAPCKJBJNB*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NLAPCKJBJNB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Double KKACEHFHKAD()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_KKACEHFHKAD_OFFSET))(this);
		}

		::System::Void JPFDJDLKDPO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_JPFDJDLKDPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKOKAGGLKHG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKOKAGGLKHG*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKOKAGGLKHG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKOKAGGLKHG*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKOKAGGLKHG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

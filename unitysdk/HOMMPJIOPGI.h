#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKPHAFPGDLO;
class HOMMPJIOPGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOMMPJIOPGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20044110)
#define HOMMPJIOPGI_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x20043A70)
#define HOMMPJIOPGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x20044500)
#define HOMMPJIOPGI_CKIBCLAENCA_OFFSET UNITYSDK_OFFSET(0x20043A50)
#define HOMMPJIOPGI_CLONE_OFFSET UNITYSDK_OFFSET(0x20043A00)
#define HOMMPJIOPGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20043930)
#define HOMMPJIOPGI_CTOR_OFFSET UNITYSDK_OFFSET(0x200438E0)
#define HOMMPJIOPGI_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x20043A80)
#define HOMMPJIOPGI_DPGDICFGIAG_OFFSET UNITYSDK_OFFSET(0x20043AC0)
#define HOMMPJIOPGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20043B40)
#define HOMMPJIOPGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x20043AE0)
#define HOMMPJIOPGI_FBMKNCACCGD_OFFSET UNITYSDK_OFFSET(0x20043AD0)
#define HOMMPJIOPGI_FKOJHGMAEJH_OFFSET UNITYSDK_OFFSET(0x20043AB0)
#define HOMMPJIOPGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20043D00)
#define HOMMPJIOPGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20043870)
#define HOMMPJIOPGI_JNBHINBDOFD_OFFSET UNITYSDK_OFFSET(0x20043A60)
#define HOMMPJIOPGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x200443F0)
#define HOMMPJIOPGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20044320)
#define HOMMPJIOPGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200438D0)
#define HOMMPJIOPGI_PCLBHGEPLIO_OFFSET UNITYSDK_OFFSET(0x20043AA0)
#define HOMMPJIOPGI_PLPGGCIDBMD_OFFSET UNITYSDK_OFFSET(0x20043A90)
#define HOMMPJIOPGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20043E80)
#define HOMMPJIOPGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x20043EE0)

inline static constexpr unsigned int HOMMPJIOPGI_TypeDefinitionIndex = 25972;

	class HOMMPJIOPGI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DKPHAFPGDLO*>* AGMPAHAMKHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NBFPOGFBMFE; // 0x20
		::System::UInt32 NLJHLLLBKLM; // 0x24
		::System::UInt32 CFHDABDGPMG; // 0x28
		::System::Single EEFAOKNJGJK; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::DKPHAFPGDLO*>** StaticGet_HJJNIEEPNBE()
		{
			return (::Google::Protobuf::FieldCodec_1<::DKPHAFPGDLO*>**)UnitySDK::FromName("", "HOMMPJIOPGI")->GetStaticField(0x3EA30);
		}

		static ::Google::Protobuf::MessageParser_1<::HOMMPJIOPGI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOMMPJIOPGI*>**)UnitySDK::FromName("", "HOMMPJIOPGI")->GetStaticField(0x3EA38);
		}

		// static const ::System::Object MIGBHKHLKLN; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object KCPANIDGCJL; // 0x0
		// static const ::System::Object EOJNKJKJBMJ; // 0x0
		// static const ::System::Object PFIEAJFDPKN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOMMPJIOPGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOMMPJIOPGI*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOMMPJIOPGI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOMMPJIOPGI*>*(*)())((::PBYTE)hIl2Cpp + HOMMPJIOPGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOMMPJIOPGI* Clone()
		{
			return ((::HOMMPJIOPGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 CKIBCLAENCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CKIBCLAENCA_OFFSET))(this);
		}

		::System::Void JNBHINBDOFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_JNBHINBDOFD_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::UInt32 PLPGGCIDBMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_PLPGGCIDBMD_OFFSET))(this);
		}

		::System::Void PCLBHGEPLIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_PCLBHGEPLIO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DKPHAFPGDLO*>* FKOJHGMAEJH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DKPHAFPGDLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_FKOJHGMAEJH_OFFSET))(this);
		}

		::System::Single DPGDICFGIAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_DPGDICFGIAG_OFFSET))(this);
		}

		::System::Void FBMKNCACCGD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_FBMKNCACCGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOMMPJIOPGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOMMPJIOPGI*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOMMPJIOPGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOMMPJIOPGI*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOMMPJIOPGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

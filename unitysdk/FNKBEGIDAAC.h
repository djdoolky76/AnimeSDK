#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIKNPJPLDAO;
class FNKBEGIDAAC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNKBEGIDAAC_CAFKDMJCJMJ_OFFSET UNITYSDK_OFFSET(0x1E3C4280)
#define FNKBEGIDAAC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3C4850)
#define FNKBEGIDAAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3C4B90)
#define FNKBEGIDAAC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3C4220)
#define FNKBEGIDAAC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3C4140)
#define FNKBEGIDAAC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3C40F0)
#define FNKBEGIDAAC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3C43C0)
#define FNKBEGIDAAC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3C42A0)
#define FNKBEGIDAAC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3C4570)
#define FNKBEGIDAAC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3C40B0)
#define FNKBEGIDAAC_JKCPFFEIMPL_OFFSET UNITYSDK_OFFSET(0x1E3C4250)
#define FNKBEGIDAAC_JLOBHEDMDLD_OFFSET UNITYSDK_OFFSET(0x1E3C4290)
#define FNKBEGIDAAC_KDOOLLFFFLB_OFFSET UNITYSDK_OFFSET(0x1E3C4260)
#define FNKBEGIDAAC_MENEGJFOHFH_OFFSET UNITYSDK_OFFSET(0x1E3C4270)
#define FNKBEGIDAAC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3C4A10)
#define FNKBEGIDAAC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3C48F0)
#define FNKBEGIDAAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3C40E0)
#define FNKBEGIDAAC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3C4680)
#define FNKBEGIDAAC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3C46E0)

inline static constexpr unsigned int FNKBEGIDAAC_TypeDefinitionIndex = 30047;

	class FNKBEGIDAAC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BIKNPJPLDAO* HPFNMCAFBDL; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PGDNKGEMFNK; // 0x20
		::System::Boolean HJLFLLMAOID; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_ADMNIKAIDEC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FNKBEGIDAAC")->GetStaticField(0x5DD60);
		}

		static ::Google::Protobuf::MessageParser_1<::FNKBEGIDAAC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNKBEGIDAAC*>**)UnitySDK::FromName("", "FNKBEGIDAAC")->GetStaticField(0x5DD68);
		}

		// static const ::System::Object ILCHGFLIDAL; // 0x0
		// static const ::System::Object JALOALHCIGC; // 0x0
		// static const ::System::Object EIADONEDGHF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNKBEGIDAAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNKBEGIDAAC*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNKBEGIDAAC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNKBEGIDAAC*>*(*)())((::PBYTE)hIl2Cpp + FNKBEGIDAAC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNKBEGIDAAC* Clone()
		{
			return ((::FNKBEGIDAAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CLONE_OFFSET))(this);
		}

		::System::Boolean JKCPFFEIMPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_JKCPFFEIMPL_OFFSET))(this);
		}

		::System::Void KDOOLLFFFLB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_KDOOLLFFFLB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MENEGJFOHFH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_MENEGJFOHFH_OFFSET))(this);
		}

		::BIKNPJPLDAO* CAFKDMJCJMJ()
		{
			return ((::BIKNPJPLDAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CAFKDMJCJMJ_OFFSET))(this);
		}

		::System::Void JLOBHEDMDLD(::BIKNPJPLDAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIKNPJPLDAO*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_JLOBHEDMDLD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNKBEGIDAAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNKBEGIDAAC*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNKBEGIDAAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNKBEGIDAAC*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNKBEGIDAAC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

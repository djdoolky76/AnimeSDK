#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGLJLBDFNBK;
class HIMPJFMPEPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGLJLBDFNBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B23F0)
#define CGLJLBDFNBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B2780)
#define CGLJLBDFNBK_CEGNHDLOPHO_OFFSET UNITYSDK_OFFSET(0x1E0B1F70)
#define CGLJLBDFNBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B1F40)
#define CGLJLBDFNBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B1EB0)
#define CGLJLBDFNBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1E70)
#define CGLJLBDFNBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B20F0)
#define CGLJLBDFNBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B1FA0)
#define CGLJLBDFNBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B2210)
#define CGLJLBDFNBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B1E30)
#define CGLJLBDFNBK_KMHOGKKNEOL_OFFSET UNITYSDK_OFFSET(0x1E0B1F80)
#define CGLJLBDFNBK_LFFOJDNAICE_OFFSET UNITYSDK_OFFSET(0x1E0B1F90)
#define CGLJLBDFNBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B25C0)
#define CGLJLBDFNBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B2520)
#define CGLJLBDFNBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B1E60)
#define CGLJLBDFNBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B2280)
#define CGLJLBDFNBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B22E0)

inline static constexpr unsigned int CGLJLBDFNBK_TypeDefinitionIndex = 25882;

	class CGLJLBDFNBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* NLMABOCJMPG; // 0x18
		::System::UInt32 PBNPOEMDOPN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CGLJLBDFNBK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGLJLBDFNBK*>**)UnitySDK::FromName("", "CGLJLBDFNBK")->GetStaticField(0x14470);
		}

		static ::Google::Protobuf::FieldCodec_1<::HIMPJFMPEPA*>** StaticGet_GLKJPMEACPI()
		{
			return (::Google::Protobuf::FieldCodec_1<::HIMPJFMPEPA*>**)UnitySDK::FromName("", "CGLJLBDFNBK")->GetStaticField(0x14478);
		}

		// static const ::System::Object OHEPPMFPDGK; // 0x0
		// static const ::System::Object JPPINIPINAA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGLJLBDFNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGLJLBDFNBK*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGLJLBDFNBK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGLJLBDFNBK*>*(*)())((::PBYTE)hIl2Cpp + CGLJLBDFNBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGLJLBDFNBK* Clone()
		{
			return ((::CGLJLBDFNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>* CEGNHDLOPHO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HIMPJFMPEPA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CEGNHDLOPHO_OFFSET))(this);
		}

		::System::UInt32 KMHOGKKNEOL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_KMHOGKKNEOL_OFFSET))(this);
		}

		::System::Void LFFOJDNAICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_LFFOJDNAICE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGLJLBDFNBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGLJLBDFNBK*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGLJLBDFNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGLJLBDFNBK*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGLJLBDFNBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

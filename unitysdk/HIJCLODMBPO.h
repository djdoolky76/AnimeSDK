#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIJCLODMBPO;
class HJFCEEBAGMF;
class HJHMNDBJPND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIJCLODMBPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20522D20)
#define HIJCLODMBPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x205232F0)
#define HIJCLODMBPO_CKFBFKMPCAF_OFFSET UNITYSDK_OFFSET(0x20522700)
#define HIJCLODMBPO_CLONE_OFFSET UNITYSDK_OFFSET(0x205226B0)
#define HIJCLODMBPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205224F0)
#define HIJCLODMBPO_CTOR_OFFSET UNITYSDK_OFFSET(0x20522480)
#define HIJCLODMBPO_EBAJJDCNEHN_OFFSET UNITYSDK_OFFSET(0x20522730)
#define HIJCLODMBPO_EGKFLGGENHI_OFFSET UNITYSDK_OFFSET(0x20522720)
#define HIJCLODMBPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205227C0)
#define HIJCLODMBPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20522760)
#define HIJCLODMBPO_GDCIPKHKJDK_OFFSET UNITYSDK_OFFSET(0x20522750)
#define HIJCLODMBPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20522A60)
#define HIJCLODMBPO_GMNLPIHNGJD_OFFSET UNITYSDK_OFFSET(0x20522740)
#define HIJCLODMBPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20522410)
#define HIJCLODMBPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20523080)
#define HIJCLODMBPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20522E90)
#define HIJCLODMBPO_NMHMELNPDMF_OFFSET UNITYSDK_OFFSET(0x20522710)
#define HIJCLODMBPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20522470)
#define HIJCLODMBPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20522B10)
#define HIJCLODMBPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20522B70)

inline static constexpr unsigned int HIJCLODMBPO_TypeDefinitionIndex = 28960;

	class HIJCLODMBPO : public ::System::Object
	{
	public:
		::HJHMNDBJPND* IJGHFIHFDGA; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HJFCEEBAGMF*>* JLDDGHIKCNE; // 0x18
		::HJHMNDBJPND* GIOHDHBLMHN; // 0x20
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::HJHMNDBJPND*>* KPLKBGGGDGA; // 0x28
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::HJFCEEBAGMF*>** StaticGet_FKPGAEEHGAL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HJFCEEBAGMF*>**)UnitySDK::FromName("", "HIJCLODMBPO")->GetStaticField(0x2FAA0);
		}

		static ::Google::Protobuf::MessageParser_1<::HIJCLODMBPO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HIJCLODMBPO*>**)UnitySDK::FromName("", "HIJCLODMBPO")->GetStaticField(0x2FAA8);
		}

		static ::System::Object** StaticGet_GLHPFEDGGOJ()
		{
			return (::System::Object**)UnitySDK::FromName("", "HIJCLODMBPO")->GetStaticField(0x2FAB0);
		}

		// static const ::System::Object LPOKIJHGHII; // 0x0
		// static const ::System::Object KDKEGFLJOKD; // 0x0
		// static const ::System::Object LKPADJNPHJF; // 0x0
		// static const ::System::Object OPENLMLEMNP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIJCLODMBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJCLODMBPO*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIJCLODMBPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HIJCLODMBPO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HIJCLODMBPO*>*(*)())((::PBYTE)hIl2Cpp + HIJCLODMBPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIJCLODMBPO* Clone()
		{
			return ((::HIJCLODMBPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::HJHMNDBJPND*>* CKFBFKMPCAF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::HJHMNDBJPND*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_CKFBFKMPCAF_OFFSET))(this);
		}

		::HJHMNDBJPND* NMHMELNPDMF()
		{
			return ((::HJHMNDBJPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_NMHMELNPDMF_OFFSET))(this);
		}

		::System::Void EGKFLGGENHI(::HJHMNDBJPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJHMNDBJPND*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_EGKFLGGENHI_OFFSET))(this, a1);
		}

		::HJHMNDBJPND* EBAJJDCNEHN()
		{
			return ((::HJHMNDBJPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_EBAJJDCNEHN_OFFSET))(this);
		}

		::System::Void GMNLPIHNGJD(::HJHMNDBJPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJHMNDBJPND*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_GMNLPIHNGJD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HJFCEEBAGMF*>* GDCIPKHKJDK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HJFCEEBAGMF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_GDCIPKHKJDK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIJCLODMBPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIJCLODMBPO*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJCLODMBPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIJCLODMBPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIJCLODMBPO*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIJCLODMBPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

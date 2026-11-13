#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOLCGIOGIBP;
class KBKHHILFFOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBKHHILFFOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203B8800)
#define KBKHHILFFOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x203B8B60)
#define KBKHHILFFOF_CLONE_OFFSET UNITYSDK_OFFSET(0x203B8320)
#define KBKHHILFFOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203B8280)
#define KBKHHILFFOF_CTOR_OFFSET UNITYSDK_OFFSET(0x203B8240)
#define KBKHHILFFOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203B83F0)
#define KBKHHILFFOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x203B83C0)
#define KBKHHILFFOF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203B8390)
#define KBKHHILFFOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203B8530)
#define KBKHHILFFOF_HIFFPPCLABK_OFFSET UNITYSDK_OFFSET(0x203B83B0)
#define KBKHHILFFOF_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x203B8360)
#define KBKHHILFFOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203B8200)
#define KBKHHILFFOF_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x203B8370)
#define KBKHHILFFOF_KLGHPGMJMFL_OFFSET UNITYSDK_OFFSET(0x203B83A0)
#define KBKHHILFFOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203B8A70)
#define KBKHHILFFOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203B89B0)
#define KBKHHILFFOF_NHNPKDAIKLL_OFFSET UNITYSDK_OFFSET(0x203B8350)
#define KBKHHILFFOF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203B8380)
#define KBKHHILFFOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203B8230)
#define KBKHHILFFOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203B85A0)
#define KBKHHILFFOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x203B8600)

inline static constexpr unsigned int KBKHHILFFOF_TypeDefinitionIndex = 26769;

	class KBKHHILFFOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* KCHFJNEFCDE; // 0x18
		::System::Boolean GDJJEMFEKEH; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 KBBFPCGLDCN; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KBKHHILFFOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KBKHHILFFOF*>**)UnitySDK::FromName("", "KBKHHILFFOF")->GetStaticField(0x69DE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>** StaticGet_CLHOEPIPJKN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BOLCGIOGIBP*>**)UnitySDK::FromName("", "KBKHHILFFOF")->GetStaticField(0x69DE8);
		}

		// static const ::System::Object LALJFALNFPA; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object OLFAGCHACKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBKHHILFFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBKHHILFFOF*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBKHHILFFOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KBKHHILFFOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KBKHHILFFOF*>*(*)())((::PBYTE)hIl2Cpp + KBKHHILFFOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBKHHILFFOF* Clone()
		{
			return ((::KBKHHILFFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>* NHNPKDAIKLL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BOLCGIOGIBP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_NHNPKDAIKLL_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKHHILFFOF_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBKHHILFFOF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean KLGHPGMJMFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_KLGHPGMJMFL_OFFSET))(this);
		}

		::System::Void HIFFPPCLABK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBKHHILFFOF_HIFFPPCLABK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBKHHILFFOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBKHHILFFOF*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBKHHILFFOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBKHHILFFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBKHHILFFOF*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBKHHILFFOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

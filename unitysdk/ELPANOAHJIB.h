#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELPANOAHJIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELPANOAHJIB_BFAAODDPJLJ_OFFSET UNITYSDK_OFFSET(0x1E2DA540)
#define ELPANOAHJIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DAA60)
#define ELPANOAHJIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DAE20)
#define ELPANOAHJIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DA4D0)
#define ELPANOAHJIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DA420)
#define ELPANOAHJIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DA3D0)
#define ELPANOAHJIB_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1E2DA520)
#define ELPANOAHJIB_DMNLHLPOKHJ_OFFSET UNITYSDK_OFFSET(0x1E2DA500)
#define ELPANOAHJIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DA630)
#define ELPANOAHJIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DA590)
#define ELPANOAHJIB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2DA580)
#define ELPANOAHJIB_FGKFHBOHHAI_OFFSET UNITYSDK_OFFSET(0x1E2DA550)
#define ELPANOAHJIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DA6C0)
#define ELPANOAHJIB_GIADDHAOAAB_OFFSET UNITYSDK_OFFSET(0x1E2DA560)
#define ELPANOAHJIB_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1E2DA530)
#define ELPANOAHJIB_JEHKOODGCDO_OFFSET UNITYSDK_OFFSET(0x1E2DA510)
#define ELPANOAHJIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DA390)
#define ELPANOAHJIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DAD10)
#define ELPANOAHJIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DACA0)
#define ELPANOAHJIB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2DA570)
#define ELPANOAHJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DA3C0)
#define ELPANOAHJIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DA7E0)
#define ELPANOAHJIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DA840)

inline static constexpr unsigned int ELPANOAHJIB_TypeDefinitionIndex = 31988;

	class ELPANOAHJIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OGLBIHIJMNF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 IOEHIGLBBJM; // 0x28
		::System::UInt32 IEFKLOKPHIM; // 0x30
		::System::Boolean JJFINGMBCEH; // 0x34
		static ::Google::Protobuf::MessageParser_1<::ELPANOAHJIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELPANOAHJIB*>**)UnitySDK::FromName("", "ELPANOAHJIB")->GetStaticField(0x51DD0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FELDAIBHJIH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ELPANOAHJIB")->GetStaticField(0x51DD8);
		}

		// static const ::System::Object OLKKDAJCHOM; // 0x0
		// static const ::System::Object KEBONEOKEPI; // 0x0
		// static const ::System::Object IPJLIBPNKHG; // 0x0
		// static const ::System::Object NDOPHCFIGDM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELPANOAHJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPANOAHJIB*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELPANOAHJIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELPANOAHJIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELPANOAHJIB*>*(*)())((::PBYTE)hIl2Cpp + ELPANOAHJIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELPANOAHJIB* Clone()
		{
			return ((::ELPANOAHJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_CLONE_OFFSET))(this);
		}

		::System::Int64 DMNLHLPOKHJ()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_DMNLHLPOKHJ_OFFSET))(this);
		}

		::System::Void JEHKOODGCDO(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ELPANOAHJIB_JEHKOODGCDO_OFFSET))(this, a1);
		}

		::System::UInt32 DBMEJEFLNAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_DBMEJEFLNAE_OFFSET))(this);
		}

		::System::Void GIIPBMIDGMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELPANOAHJIB_GIIPBMIDGMG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BFAAODDPJLJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_BFAAODDPJLJ_OFFSET))(this);
		}

		::System::Boolean FGKFHBOHHAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_FGKFHBOHHAI_OFFSET))(this);
		}

		::System::Void GIADDHAOAAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELPANOAHJIB_GIADDHAOAAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELPANOAHJIB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELPANOAHJIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELPANOAHJIB*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPANOAHJIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELPANOAHJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELPANOAHJIB*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELPANOAHJIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

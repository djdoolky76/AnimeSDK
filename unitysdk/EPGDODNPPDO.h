#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPGDODNPPDO;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPGDODNPPDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2DD7D0)
#define EPGDODNPPDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2DDC00)
#define EPGDODNPPDO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2DD290)
#define EPGDODNPPDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2DD1F0)
#define EPGDODNPPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DD1B0)
#define EPGDODNPPDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2DD470)
#define EPGDODNPPDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2DD310)
#define EPGDODNPPDO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2DD2E0)
#define EPGDODNPPDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2DD5A0)
#define EPGDODNPPDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2DD170)
#define EPGDODNPPDO_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1E2DD2C0)
#define EPGDODNPPDO_LGBEBPCAECE_OFFSET UNITYSDK_OFFSET(0x1E2DD300)
#define EPGDODNPPDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2DDA20)
#define EPGDODNPPDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2DD970)
#define EPGDODNPPDO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2DD2D0)
#define EPGDODNPPDO_PBCCCNEBFPN_OFFSET UNITYSDK_OFFSET(0x1E2DD2F0)
#define EPGDODNPPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2DD1A0)
#define EPGDODNPPDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2DD610)
#define EPGDODNPPDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2DD670)

inline static constexpr unsigned int EPGDODNPPDO_TypeDefinitionIndex = 30398;

	class EPGDODNPPDO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DOLJGAFKGFJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EPGDODNPPDO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPGDODNPPDO*>**)UnitySDK::FromName("", "EPGDODNPPDO")->GetStaticField(0x48C50);
		}

		static ::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PKPICFPDHEO*>**)UnitySDK::FromName("", "EPGDODNPPDO")->GetStaticField(0x48C58);
		}

		// static const ::System::Object EFEMONKDOCM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CIAMJBNLMBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPGDODNPPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPGDODNPPDO*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPGDODNPPDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPGDODNPPDO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPGDODNPPDO*>*(*)())((::PBYTE)hIl2Cpp + EPGDODNPPDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPGDODNPPDO* Clone()
		{
			return ((::EPGDODNPPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PKPICFPDHEO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPGDODNPPDO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PBCCCNEBFPN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_PBCCCNEBFPN_OFFSET))(this);
		}

		::System::Void LGBEBPCAECE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPGDODNPPDO_LGBEBPCAECE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPGDODNPPDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPGDODNPPDO*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPGDODNPPDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPGDODNPPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPGDODNPPDO*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPGDODNPPDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

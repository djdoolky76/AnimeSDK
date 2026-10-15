#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCFKHDIKCNI;
class NLAGKOJKHCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLAGKOJKHCN_BFOOHKEDKFE_OFFSET UNITYSDK_OFFSET(0x1EB605C0)
#define NLAGKOJKHCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB60B50)
#define NLAGKOJKHCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB60F20)
#define NLAGKOJKHCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB60510)
#define NLAGKOJKHCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB60490)
#define NLAGKOJKHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB60480)
#define NLAGKOJKHCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB60760)
#define NLAGKOJKHCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB605E0)
#define NLAGKOJKHCN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB605B0)
#define NLAGKOJKHCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB608E0)
#define NLAGKOJKHCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB60440)
#define NLAGKOJKHCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB60D30)
#define NLAGKOJKHCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB60C20)
#define NLAGKOJKHCN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB605A0)
#define NLAGKOJKHCN_OGELOMLGKGC_OFFSET UNITYSDK_OFFSET(0x1EB605D0)
#define NLAGKOJKHCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB60470)
#define NLAGKOJKHCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB60A10)
#define NLAGKOJKHCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB60A70)

inline static constexpr unsigned int NLAGKOJKHCN_TypeDefinitionIndex = 31838;

	class NLAGKOJKHCN : public ::System::Object
	{
	public:
		::NCFKHDIKCNI* FPOAAFLDMFG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NLAGKOJKHCN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLAGKOJKHCN*>**)UnitySDK::FromName("", "NLAGKOJKHCN")->GetStaticField(0x66760);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HAPBIENAOLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLAGKOJKHCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAGKOJKHCN*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLAGKOJKHCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLAGKOJKHCN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLAGKOJKHCN*>*(*)())((::PBYTE)hIl2Cpp + NLAGKOJKHCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLAGKOJKHCN* Clone()
		{
			return ((::NLAGKOJKHCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* BFOOHKEDKFE()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_BFOOHKEDKFE_OFFSET))(this);
		}

		::System::Void OGELOMLGKGC(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_OGELOMLGKGC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLAGKOJKHCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLAGKOJKHCN*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLAGKOJKHCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLAGKOJKHCN*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLAGKOJKHCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

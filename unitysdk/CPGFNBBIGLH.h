#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPGFNBBIGLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPGFNBBIGLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E110540)
#define CPGFNBBIGLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1108E0)
#define CPGFNBBIGLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E110120)
#define CPGFNBBIGLH_CPEEIHDCIFD_OFFSET UNITYSDK_OFFSET(0x1E110170)
#define CPGFNBBIGLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1100E0)
#define CPGFNBBIGLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1100D0)
#define CPGFNBBIGLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1102B0)
#define CPGFNBBIGLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1101D0)
#define CPGFNBBIGLH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1101C0)
#define CPGFNBBIGLH_FHOLHJHEOMJ_OFFSET UNITYSDK_OFFSET(0x1E110180)
#define CPGFNBBIGLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E110380)
#define CPGFNBBIGLH_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E110190)
#define CPGFNBBIGLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E110090)
#define CPGFNBBIGLH_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E1101A0)
#define CPGFNBBIGLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E110720)
#define CPGFNBBIGLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1106D0)
#define CPGFNBBIGLH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1101B0)
#define CPGFNBBIGLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1100C0)
#define CPGFNBBIGLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1103B0)
#define CPGFNBBIGLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E110410)

inline static constexpr unsigned int CPGFNBBIGLH_TypeDefinitionIndex = 30310;

	class CPGFNBBIGLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 NMABHKCOLCM; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CPGFNBBIGLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPGFNBBIGLH*>**)UnitySDK::FromName("", "CPGFNBBIGLH")->GetStaticField(0x1F110);
		}

		// static const ::System::Object IADILMFABOH; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPGFNBBIGLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPGFNBBIGLH*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPGFNBBIGLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPGFNBBIGLH*>*(*)())((::PBYTE)hIl2Cpp + CPGFNBBIGLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPGFNBBIGLH* Clone()
		{
			return ((::CPGFNBBIGLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPEEIHDCIFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CPEEIHDCIFD_OFFSET))(this);
		}

		::System::Void FHOLHJHEOMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_FHOLHJHEOMJ_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPGFNBBIGLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPGFNBBIGLH*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPGFNBBIGLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPGFNBBIGLH*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPGFNBBIGLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

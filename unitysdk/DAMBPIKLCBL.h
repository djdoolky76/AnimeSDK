#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAMBPIKLCBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAMBPIKLCBL_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E1261A0)
#define DAMBPIKLCBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1264F0)
#define DAMBPIKLCBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1267C0)
#define DAMBPIKLCBL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E126140)
#define DAMBPIKLCBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E126110)
#define DAMBPIKLCBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E126100)
#define DAMBPIKLCBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1262B0)
#define DAMBPIKLCBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1261D0)
#define DAMBPIKLCBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1261C0)
#define DAMBPIKLCBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E126380)
#define DAMBPIKLCBL_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E126190)
#define DAMBPIKLCBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1260C0)
#define DAMBPIKLCBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E126640)
#define DAMBPIKLCBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E126600)
#define DAMBPIKLCBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1261B0)
#define DAMBPIKLCBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1260F0)
#define DAMBPIKLCBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1263B0)
#define DAMBPIKLCBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E126410)

inline static constexpr unsigned int DAMBPIKLCBL_TypeDefinitionIndex = 28993;

	class DAMBPIKLCBL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DAMBPIKLCBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAMBPIKLCBL*>**)UnitySDK::FromName("", "DAMBPIKLCBL")->GetStaticField(0x21BA0);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAMBPIKLCBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAMBPIKLCBL*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMBPIKLCBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAMBPIKLCBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAMBPIKLCBL*>*(*)())((::PBYTE)hIl2Cpp + DAMBPIKLCBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAMBPIKLCBL* Clone()
		{
			return ((::DAMBPIKLCBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAMBPIKLCBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAMBPIKLCBL*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAMBPIKLCBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAMBPIKLCBL*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAMBPIKLCBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

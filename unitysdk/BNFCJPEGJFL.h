#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFCJPEGJFL;
class LDLCMMOPKNG;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BNFCJPEGJFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E004680)
#define BNFCJPEGJFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E004A20)
#define BNFCJPEGJFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E003F00)
#define BNFCJPEGJFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E003E50)
#define BNFCJPEGJFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E003E40)
#define BNFCJPEGJFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E004250)
#define BNFCJPEGJFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E004020)
#define BNFCJPEGJFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E003FF0)
#define BNFCJPEGJFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E004480)
#define BNFCJPEGJFL_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E003FC0)
#define BNFCJPEGJFL_HAJMFMBBHPO_OFFSET UNITYSDK_OFFSET(0x1E004000)
#define BNFCJPEGJFL_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E003FD0)
#define BNFCJPEGJFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E003E00)
#define BNFCJPEGJFL_KAGANILCAKB_OFFSET UNITYSDK_OFFSET(0x1E004010)
#define BNFCJPEGJFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E004850)
#define BNFCJPEGJFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E004790)
#define BNFCJPEGJFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E003FE0)
#define BNFCJPEGJFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E003E30)
#define BNFCJPEGJFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0044E0)
#define BNFCJPEGJFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E004540)

inline static constexpr unsigned int BNFCJPEGJFL_TypeDefinitionIndex = 28155;

	class BNFCJPEGJFL : public ::System::Object
	{
	public:
		::LDLCMMOPKNG* ODEBGOBLILD; // 0x10
		::NNPGLCGNICI* MICKHJJBFIM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BNFCJPEGJFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BNFCJPEGJFL*>**)UnitySDK::FromName("", "BNFCJPEGJFL")->GetStaticField(0x5D5E0);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PODCILAGFIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BNFCJPEGJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BNFCJPEGJFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BNFCJPEGJFL*>*(*)())((::PBYTE)hIl2Cpp + BNFCJPEGJFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BNFCJPEGJFL* Clone()
		{
			return ((::BNFCJPEGJFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CLONE_OFFSET))(this);
		}

		::LDLCMMOPKNG* GPCIDCAANHB()
		{
			return ((::LDLCMMOPKNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::LDLCMMOPKNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDLCMMOPKNG*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* HAJMFMBBHPO()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_HAJMFMBBHPO_OFFSET))(this);
		}

		::System::Void KAGANILCAKB(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_KAGANILCAKB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BNFCJPEGJFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BNFCJPEGJFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNFCJPEGJFL*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BNFCJPEGJFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

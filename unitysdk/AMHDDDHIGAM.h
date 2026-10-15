#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMHDDDHIGAM;
class OMIIKPCJHEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AMHDDDHIGAM_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E5215C0)
#define AMHDDDHIGAM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E521A60)
#define AMHDDDHIGAM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E521EB0)
#define AMHDDDHIGAM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E521510)
#define AMHDDDHIGAM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E521490)
#define AMHDDDHIGAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E521480)
#define AMHDDDHIGAM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E521760)
#define AMHDDDHIGAM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5215E0)
#define AMHDDDHIGAM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5215B0)
#define AMHDDDHIGAM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5218E0)
#define AMHDDDHIGAM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E521440)
#define AMHDDDHIGAM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E521C70)
#define AMHDDDHIGAM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E521B30)
#define AMHDDDHIGAM_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E5215D0)
#define AMHDDDHIGAM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5215A0)
#define AMHDDDHIGAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E521470)
#define AMHDDDHIGAM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E521920)
#define AMHDDDHIGAM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E521980)

inline static constexpr unsigned int AMHDDDHIGAM_TypeDefinitionIndex = 32155;

	class AMHDDDHIGAM : public ::System::Object
	{
	public:
		::OMIIKPCJHEM* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AMHDDDHIGAM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AMHDDDHIGAM*>**)UnitySDK::FromName("", "AMHDDDHIGAM")->GetStaticField(0x3C630);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AMHDDDHIGAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHDDDHIGAM*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMHDDDHIGAM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AMHDDDHIGAM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AMHDDDHIGAM*>*(*)())((::PBYTE)hIl2Cpp + AMHDDDHIGAM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AMHDDDHIGAM* Clone()
		{
			return ((::AMHDDDHIGAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::OMIIKPCJHEM* ANALOEDDDHD()
		{
			return ((::OMIIKPCJHEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::OMIIKPCJHEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMIIKPCJHEM*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AMHDDDHIGAM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AMHDDDHIGAM*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AMHDDDHIGAM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMHDDDHIGAM*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AMHDDDHIGAM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class FCEEHNOJAAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCEEHNOJAAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3163A0)
#define FCEEHNOJAAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3166C0)
#define FCEEHNOJAAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E315E10)
#define FCEEHNOJAAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E315DA0)
#define FCEEHNOJAAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E315D90)
#define FCEEHNOJAAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E316050)
#define FCEEHNOJAAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E315ED0)
#define FCEEHNOJAAN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E315EA0)
#define FCEEHNOJAAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3161D0)
#define FCEEHNOJAAN_IFKGDPPBDEJ_OFFSET UNITYSDK_OFFSET(0x1E315EB0)
#define FCEEHNOJAAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E315D50)
#define FCEEHNOJAAN_JOAFKOHBCGK_OFFSET UNITYSDK_OFFSET(0x1E315EC0)
#define FCEEHNOJAAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E316500)
#define FCEEHNOJAAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E316470)
#define FCEEHNOJAAN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E315E90)
#define FCEEHNOJAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E315D80)
#define FCEEHNOJAAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E316260)
#define FCEEHNOJAAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3162C0)

inline static constexpr unsigned int FCEEHNOJAAN_TypeDefinitionIndex = 28062;

	class FCEEHNOJAAN : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* FALCONHOFNM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FCEEHNOJAAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCEEHNOJAAN*>**)UnitySDK::FromName("", "FCEEHNOJAAN")->GetStaticField(0x505D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FGDMAHNNGPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCEEHNOJAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEEHNOJAAN*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEEHNOJAAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCEEHNOJAAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCEEHNOJAAN*>*(*)())((::PBYTE)hIl2Cpp + FCEEHNOJAAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCEEHNOJAAN* Clone()
		{
			return ((::FCEEHNOJAAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* IFKGDPPBDEJ()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_IFKGDPPBDEJ_OFFSET))(this);
		}

		::System::Void JOAFKOHBCGK(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_JOAFKOHBCGK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCEEHNOJAAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCEEHNOJAAN*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCEEHNOJAAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCEEHNOJAAN*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCEEHNOJAAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

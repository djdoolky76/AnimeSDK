#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJEKJOCIDM;
class HLPHDFJIHKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CBJEKJOCIDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03F4D0)
#define CBJEKJOCIDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03F840)
#define CBJEKJOCIDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03F020)
#define CBJEKJOCIDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03EF90)
#define CBJEKJOCIDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03EF50)
#define CBJEKJOCIDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03F1D0)
#define CBJEKJOCIDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03F080)
#define CBJEKJOCIDM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E03F060)
#define CBJEKJOCIDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03F300)
#define CBJEKJOCIDM_HAGCBMKKGJE_OFFSET UNITYSDK_OFFSET(0x1E03F070)
#define CBJEKJOCIDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03EF10)
#define CBJEKJOCIDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03F680)
#define CBJEKJOCIDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03F5E0)
#define CBJEKJOCIDM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E03F050)
#define CBJEKJOCIDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03EF40)
#define CBJEKJOCIDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03F370)
#define CBJEKJOCIDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03F3D0)

inline static constexpr unsigned int CBJEKJOCIDM_TypeDefinitionIndex = 32364;

	class CBJEKJOCIDM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HLPHDFJIHKL*>* DHNIEACFJFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::HLPHDFJIHKL*>** StaticGet_LBEBIPBKKAK()
		{
			return (::Google::Protobuf::FieldCodec_1<::HLPHDFJIHKL*>**)UnitySDK::FromName("", "CBJEKJOCIDM")->GetStaticField(0xB8B0);
		}

		static ::Google::Protobuf::MessageParser_1<::CBJEKJOCIDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CBJEKJOCIDM*>**)UnitySDK::FromName("", "CBJEKJOCIDM")->GetStaticField(0xB8B8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MDCDGIGBNFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CBJEKJOCIDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJEKJOCIDM*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBJEKJOCIDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CBJEKJOCIDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CBJEKJOCIDM*>*(*)())((::PBYTE)hIl2Cpp + CBJEKJOCIDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CBJEKJOCIDM* Clone()
		{
			return ((::CBJEKJOCIDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HLPHDFJIHKL*>* HAGCBMKKGJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HLPHDFJIHKL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_HAGCBMKKGJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CBJEKJOCIDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBJEKJOCIDM*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CBJEKJOCIDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBJEKJOCIDM*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CBJEKJOCIDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

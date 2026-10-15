#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNELOGOPCKE;
class GNFJOHCLDFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNFJOHCLDFE_BLJLBCJBKDJ_OFFSET UNITYSDK_OFFSET(0x1E4DE190)
#define GNFJOHCLDFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DE720)
#define GNFJOHCLDFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DEB40)
#define GNFJOHCLDFE_CIBDMPPKPOB_OFFSET UNITYSDK_OFFSET(0x1E4DE150)
#define GNFJOHCLDFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DE120)
#define GNFJOHCLDFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DE060)
#define GNFJOHCLDFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DE010)
#define GNFJOHCLDFE_ENELKDKFJCC_OFFSET UNITYSDK_OFFSET(0x1E4DE170)
#define GNFJOHCLDFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DE250)
#define GNFJOHCLDFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DE1C0)
#define GNFJOHCLDFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DE410)
#define GNFJOHCLDFE_IBCANBIGOKA_OFFSET UNITYSDK_OFFSET(0x1E4DE1A0)
#define GNFJOHCLDFE_JHKEJHEIIPN_OFFSET UNITYSDK_OFFSET(0x1E4DE1B0)
#define GNFJOHCLDFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DDFD0)
#define GNFJOHCLDFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DE9B0)
#define GNFJOHCLDFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DE8B0)
#define GNFJOHCLDFE_MIMHJBHMKGH_OFFSET UNITYSDK_OFFSET(0x1E4DE160)
#define GNFJOHCLDFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DE000)
#define GNFJOHCLDFE_PHEPIDJHMGM_OFFSET UNITYSDK_OFFSET(0x1E4DE180)
#define GNFJOHCLDFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DE530)
#define GNFJOHCLDFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DE590)

inline static constexpr unsigned int GNFJOHCLDFE_TypeDefinitionIndex = 34875;

	class GNFJOHCLDFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FNELOGOPCKE* HAIENHMDIIN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DMOCPCJNICK; // 0x20
		::System::UInt32 NMAMKMKIMPP; // 0x28
		::System::UInt32 MNLAGECKDGA; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CPPBPKEKLHO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GNFJOHCLDFE")->GetStaticField(0x23100);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GNFJOHCLDFE")->GetStaticField(0x23108);
		}

		// static const ::System::Object KGBIOKNMNGB; // 0x0
		// static const ::System::Object HBIADCDKPAH; // 0x0
		// static const ::System::Object HMPBICGCGPL; // 0x0
		// static const ::System::Object PPFHNPIMIAC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNFJOHCLDFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNFJOHCLDFE*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GNFJOHCLDFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNFJOHCLDFE* Clone()
		{
			return ((::GNFJOHCLDFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIBDMPPKPOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CIBDMPPKPOB_OFFSET))(this);
		}

		::System::Void MIMHJBHMKGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_MIMHJBHMKGH_OFFSET))(this, a1);
		}

		::System::UInt32 ENELKDKFJCC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_ENELKDKFJCC_OFFSET))(this);
		}

		::System::Void PHEPIDJHMGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_PHEPIDJHMGM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BLJLBCJBKDJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_BLJLBCJBKDJ_OFFSET))(this);
		}

		::FNELOGOPCKE* IBCANBIGOKA()
		{
			return ((::FNELOGOPCKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_IBCANBIGOKA_OFFSET))(this);
		}

		::System::Void JHKEJHEIIPN(::FNELOGOPCKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNELOGOPCKE*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_JHKEJHEIIPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNFJOHCLDFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNFJOHCLDFE*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNFJOHCLDFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNFJOHCLDFE*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNFJOHCLDFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAEDIBFGLDE;
class FHCIIMGMIML;
class GHFEKEGEFAC;
class LABMFHEEPBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAEDIBFGLDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7842D0)
#define BAEDIBFGLDE_CBFKNOMMKIK_OFFSET UNITYSDK_OFFSET(0x1E783E00)
#define BAEDIBFGLDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7847A0)
#define BAEDIBFGLDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E783DA0)
#define BAEDIBFGLDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E783C40)
#define BAEDIBFGLDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E783BD0)
#define BAEDIBFGLDE_DBPEENCKNDD_OFFSET UNITYSDK_OFFSET(0x1E783DF0)
#define BAEDIBFGLDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E783E90)
#define BAEDIBFGLDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E783E30)
#define BAEDIBFGLDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E784090)
#define BAEDIBFGLDE_HEANLLFBLPA_OFFSET UNITYSDK_OFFSET(0x1E783E20)
#define BAEDIBFGLDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E783B60)
#define BAEDIBFGLDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E784550)
#define BAEDIBFGLDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E784410)
#define BAEDIBFGLDE_OGGIPFPCLMK_OFFSET UNITYSDK_OFFSET(0x1E783E10)
#define BAEDIBFGLDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E783BC0)
#define BAEDIBFGLDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E784130)
#define BAEDIBFGLDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E784190)

inline static constexpr unsigned int BAEDIBFGLDE_TypeDefinitionIndex = 28005;

	class BAEDIBFGLDE : public ::System::Object
	{
	public:
		::LABMFHEEPBI* LFFNLLMDALO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::GHFEKEGEFAC*>* GFKLPBDBKJI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::FHCIIMGMIML*>* JHLEAAPDBGK; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::GHFEKEGEFAC*>** StaticGet_CEMNLPEBICO()
		{
			return (::Google::Protobuf::FieldCodec_1<::GHFEKEGEFAC*>**)UnitySDK::FromName("", "BAEDIBFGLDE")->GetStaticField(0x4B870);
		}

		static ::Google::Protobuf::MessageParser_1<::BAEDIBFGLDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAEDIBFGLDE*>**)UnitySDK::FromName("", "BAEDIBFGLDE")->GetStaticField(0x4B878);
		}

		static ::Google::Protobuf::FieldCodec_1<::FHCIIMGMIML*>** StaticGet_JHCDNKPMPLI()
		{
			return (::Google::Protobuf::FieldCodec_1<::FHCIIMGMIML*>**)UnitySDK::FromName("", "BAEDIBFGLDE")->GetStaticField(0x4B880);
		}

		// static const ::System::Object GNOPFEPIFAI; // 0x0
		// static const ::System::Object HBLBIOPLELE; // 0x0
		// static const ::System::Object AKLHADDMGJI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAEDIBFGLDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDIBFGLDE*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAEDIBFGLDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAEDIBFGLDE*>*(*)())((::PBYTE)hIl2Cpp + BAEDIBFGLDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAEDIBFGLDE* Clone()
		{
			return ((::BAEDIBFGLDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GHFEKEGEFAC*>* DBPEENCKNDD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GHFEKEGEFAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_DBPEENCKNDD_OFFSET))(this);
		}

		::LABMFHEEPBI* CBFKNOMMKIK()
		{
			return ((::LABMFHEEPBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CBFKNOMMKIK_OFFSET))(this);
		}

		::System::Void OGGIPFPCLMK(::LABMFHEEPBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LABMFHEEPBI*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_OGGIPFPCLMK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FHCIIMGMIML*>* HEANLLFBLPA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FHCIIMGMIML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_HEANLLFBLPA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAEDIBFGLDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAEDIBFGLDE*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAEDIBFGLDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAEDIBFGLDE*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAEDIBFGLDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

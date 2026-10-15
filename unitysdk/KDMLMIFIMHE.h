#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDABDPPPHBN;
class KDMLMIFIMHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDMLMIFIMHE_ADLLFBCBPLO_OFFSET UNITYSDK_OFFSET(0x1E804930)
#define KDMLMIFIMHE_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E804900)
#define KDMLMIFIMHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E804DA0)
#define KDMLMIFIMHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8051F0)
#define KDMLMIFIMHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8048B0)
#define KDMLMIFIMHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8047D0)
#define KDMLMIFIMHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E804780)
#define KDMLMIFIMHE_EDIHOCPDLJH_OFFSET UNITYSDK_OFFSET(0x1E804940)
#define KDMLMIFIMHE_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E8048F0)
#define KDMLMIFIMHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E804990)
#define KDMLMIFIMHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E804960)
#define KDMLMIFIMHE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E804920)
#define KDMLMIFIMHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E804A60)
#define KDMLMIFIMHE_IAHEOLIKLPH_OFFSET UNITYSDK_OFFSET(0x1E8048E0)
#define KDMLMIFIMHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E804740)
#define KDMLMIFIMHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E805080)
#define KDMLMIFIMHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E804FA0)
#define KDMLMIFIMHE_NHFFKJCIAAL_OFFSET UNITYSDK_OFFSET(0x1E804950)
#define KDMLMIFIMHE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E804910)
#define KDMLMIFIMHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E804770)
#define KDMLMIFIMHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E804AF0)
#define KDMLMIFIMHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E804B50)

inline static constexpr unsigned int KDMLMIFIMHE_TypeDefinitionIndex = 28521;

	class KDMLMIFIMHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* KPHLBBJCBLG; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFGGCOEGIDF; // 0x20
		::System::UInt32 PLKGEBACJMA; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::Boolean NPJDFKAPLMO; // 0x30
		static ::System::Object** StaticGet_NGNIGGEKIEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KDMLMIFIMHE")->GetStaticField(0x113E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KDMLMIFIMHE")->GetStaticField(0x113E8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AMAMBLNELKM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KDMLMIFIMHE")->GetStaticField(0x113F0);
		}

		// static const ::System::Object EBNGOKKHFAN; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GKFIHKEAFCO; // 0x0
		// static const ::System::Object NAGLPBFJHDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDMLMIFIMHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMLMIFIMHE*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMLMIFIMHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KDMLMIFIMHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDMLMIFIMHE* Clone()
		{
			return ((::KDMLMIFIMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IAHEOLIKLPH()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_IAHEOLIKLPH_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean ADLLFBCBPLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_ADLLFBCBPLO_OFFSET))(this);
		}

		::System::Void EDIHOCPDLJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_EDIHOCPDLJH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* NHFFKJCIAAL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_NHFFKJCIAAL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDMLMIFIMHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDMLMIFIMHE*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDMLMIFIMHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMLMIFIMHE*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDMLMIFIMHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

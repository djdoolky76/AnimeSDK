#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGMALDABBE;
class KELKOMPBONA;
class NDLBFFKAGBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDGMALDABBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E62B690)
#define IDGMALDABBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E62BBA0)
#define IDGMALDABBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E62B0D0)
#define IDGMALDABBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E62AF50)
#define IDGMALDABBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E62AEE0)
#define IDGMALDABBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E62B200)
#define IDGMALDABBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E62B1A0)
#define IDGMALDABBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E62B370)
#define IDGMALDABBE_GIBPHJHJHIF_OFFSET UNITYSDK_OFFSET(0x1E62B130)
#define IDGMALDABBE_HKHBCBEFDPF_OFFSET UNITYSDK_OFFSET(0x1E62B160)
#define IDGMALDABBE_IAONAHFHONK_OFFSET UNITYSDK_OFFSET(0x1E62B150)
#define IDGMALDABBE_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E62B180)
#define IDGMALDABBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E62AE70)
#define IDGMALDABBE_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E62B190)
#define IDGMALDABBE_LILPADCBNHB_OFFSET UNITYSDK_OFFSET(0x1E62B140)
#define IDGMALDABBE_LNHIGHKAMOO_OFFSET UNITYSDK_OFFSET(0x1E62B170)
#define IDGMALDABBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E62BA30)
#define IDGMALDABBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E62B890)
#define IDGMALDABBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E62AED0)
#define IDGMALDABBE_PDMNDBMHAPF_OFFSET UNITYSDK_OFFSET(0x1E62B120)
#define IDGMALDABBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E62B430)
#define IDGMALDABBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E62B490)

inline static constexpr unsigned int IDGMALDABBE_TypeDefinitionIndex = 27612;

	class IDGMALDABBE : public ::System::Object
	{
	public:
		::NDLBFFKAGBN* PBALNIAJEEO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* DPNEOHJLCMJ; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* INDHCKHBLEO; // 0x28
		::System::UInt32 AHNEBPEHFLP; // 0x30
		::System::UInt32 EGJDFIPLGMO; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x45E80);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HNPLEKNIDAM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x45E88);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_IHECDDHJIJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x45E90);
		}

		// static const ::System::Object JLCOELFOKOP; // 0x0
		// static const ::System::Object OANDGOJOLHM; // 0x0
		// static const ::System::Object FNHHMLFOCBA; // 0x0
		// static const ::System::Object MLMNNLLMJOK; // 0x0
		// static const ::System::Object MELOPNPCNIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDGMALDABBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGMALDABBE*))((::PBYTE)hIl2Cpp + IDGMALDABBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDGMALDABBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IDGMALDABBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDGMALDABBE* Clone()
		{
			return ((::IDGMALDABBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PDMNDBMHAPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_PDMNDBMHAPF_OFFSET))(this);
		}

		::System::Void GIBPHJHJHIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGMALDABBE_GIBPHJHJHIF_OFFSET))(this, a1);
		}

		::NDLBFFKAGBN* LILPADCBNHB()
		{
			return ((::NDLBFFKAGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_LILPADCBNHB_OFFSET))(this);
		}

		::System::Void IAONAHFHONK(::NDLBFFKAGBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLBFFKAGBN*))((::PBYTE)hIl2Cpp + IDGMALDABBE_IAONAHFHONK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* HKHBCBEFDPF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_HKHBCBEFDPF_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* LNHIGHKAMOO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_LNHIGHKAMOO_OFFSET))(this);
		}

		::System::UInt32 IHDPOPKDFKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_IHDPOPKDFKO_OFFSET))(this);
		}

		::System::Void LAGHFAAHOBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IDGMALDABBE_LAGHFAAHOBL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDGMALDABBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDGMALDABBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDGMALDABBE*))((::PBYTE)hIl2Cpp + IDGMALDABBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDGMALDABBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDGMALDABBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDGMALDABBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGMALDABBE*))((::PBYTE)hIl2Cpp + IDGMALDABBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDGMALDABBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

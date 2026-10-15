#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGMALDABBE;
class KELKOMPBONA;
class NDLBFFKAGBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDGMALDABBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5FE060)
#define IDGMALDABBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5FE570)
#define IDGMALDABBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5FDA90)
#define IDGMALDABBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5FD900)
#define IDGMALDABBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD890)
#define IDGMALDABBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5FDBC0)
#define IDGMALDABBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5FDB60)
#define IDGMALDABBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5FDD30)
#define IDGMALDABBE_GIBPHJHJHIF_OFFSET UNITYSDK_OFFSET(0x1E5FDAF0)
#define IDGMALDABBE_HKHBCBEFDPF_OFFSET UNITYSDK_OFFSET(0x1E5FDB20)
#define IDGMALDABBE_IAONAHFHONK_OFFSET UNITYSDK_OFFSET(0x1E5FDB10)
#define IDGMALDABBE_IHDPOPKDFKO_OFFSET UNITYSDK_OFFSET(0x1E5FDB40)
#define IDGMALDABBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5FD820)
#define IDGMALDABBE_LAGHFAAHOBL_OFFSET UNITYSDK_OFFSET(0x1E5FDB50)
#define IDGMALDABBE_LILPADCBNHB_OFFSET UNITYSDK_OFFSET(0x1E5FDB00)
#define IDGMALDABBE_LNHIGHKAMOO_OFFSET UNITYSDK_OFFSET(0x1E5FDB30)
#define IDGMALDABBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5FE400)
#define IDGMALDABBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5FE260)
#define IDGMALDABBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD880)
#define IDGMALDABBE_PDMNDBMHAPF_OFFSET UNITYSDK_OFFSET(0x1E5FDAE0)
#define IDGMALDABBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5FDE00)
#define IDGMALDABBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5FDE60)

inline static constexpr unsigned int IDGMALDABBE_TypeDefinitionIndex = 27612;

	class IDGMALDABBE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NDLBFFKAGBN* PBALNIAJEEO; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* DPNEOHJLCMJ; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::KELKOMPBONA*>* INDHCKHBLEO; // 0x28
		::System::UInt32 EGJDFIPLGMO; // 0x30
		::System::UInt32 AHNEBPEHFLP; // 0x34
		static ::Google::Protobuf::MessageParser_1<::IDGMALDABBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDGMALDABBE*>**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x46050);
		}

		static ::Google::Protobuf::FieldCodec_1<::KELKOMPBONA*>** StaticGet_HNPLEKNIDAM()
		{
			return (::Google::Protobuf::FieldCodec_1<::KELKOMPBONA*>**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x46058);
		}

		static ::Google::Protobuf::FieldCodec_1<::KELKOMPBONA*>** StaticGet_IHECDDHJIJC()
		{
			return (::Google::Protobuf::FieldCodec_1<::KELKOMPBONA*>**)UnitySDK::FromName("", "IDGMALDABBE")->GetStaticField(0x46060);
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

		static ::Google::Protobuf::MessageParser_1<::IDGMALDABBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDGMALDABBE*>*(*)())((::PBYTE)hIl2Cpp + IDGMALDABBE_JJGHOBBFNJD_OFFSET))();
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

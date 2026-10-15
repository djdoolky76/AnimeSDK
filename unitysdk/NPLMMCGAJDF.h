#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPLMMCGAJDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPLMMCGAJDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB70C10)
#define NPLMMCGAJDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB70F90)
#define NPLMMCGAJDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB70670)
#define NPLMMCGAJDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB705D0)
#define NPLMMCGAJDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB70580)
#define NPLMMCGAJDF_DNMFIHOCPCD_OFFSET UNITYSDK_OFFSET(0x1EB706F0)
#define NPLMMCGAJDF_EEDIOKOLMEB_OFFSET UNITYSDK_OFFSET(0x1EB706C0)
#define NPLMMCGAJDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB707E0)
#define NPLMMCGAJDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB70730)
#define NPLMMCGAJDF_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1EB70710)
#define NPLMMCGAJDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB708F0)
#define NPLMMCGAJDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB70510)
#define NPLMMCGAJDF_LLBDBBJHLMK_OFFSET UNITYSDK_OFFSET(0x1EB706D0)
#define NPLMMCGAJDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB70E80)
#define NPLMMCGAJDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB70E20)
#define NPLMMCGAJDF_MKMHCGEIIPJ_OFFSET UNITYSDK_OFFSET(0x1EB706E0)
#define NPLMMCGAJDF_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1EB70720)
#define NPLMMCGAJDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB70570)
#define NPLMMCGAJDF_PFMMONNCNHK_OFFSET UNITYSDK_OFFSET(0x1EB70700)
#define NPLMMCGAJDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB709F0)
#define NPLMMCGAJDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB70A50)

inline static constexpr unsigned int NPLMMCGAJDF_TypeDefinitionIndex = 28817;

	class NPLMMCGAJDF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MCFNKGGGJFN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		::System::UInt32 ENNOPIMIFGP; // 0x24
		::System::UInt32 HODIAGGIFLF; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NPLMMCGAJDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPLMMCGAJDF*>**)UnitySDK::FromName("", "NPLMMCGAJDF")->GetStaticField(0xDD70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HPBIBCMAOFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NPLMMCGAJDF")->GetStaticField(0xDD78);
		}

		// static const ::System::Object JDPDIOPDCDL; // 0x0
		// static const ::System::Object JHMMGDOMNHB; // 0x0
		// static const ::System::Object LCDLDGPGOHE; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPLMMCGAJDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPLMMCGAJDF*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPLMMCGAJDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPLMMCGAJDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPLMMCGAJDF*>*(*)())((::PBYTE)hIl2Cpp + NPLMMCGAJDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPLMMCGAJDF* Clone()
		{
			return ((::NPLMMCGAJDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EEDIOKOLMEB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_EEDIOKOLMEB_OFFSET))(this);
		}

		::System::UInt32 LLBDBBJHLMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_LLBDBBJHLMK_OFFSET))(this);
		}

		::System::Void MKMHCGEIIPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_MKMHCGEIIPJ_OFFSET))(this, a1);
		}

		::System::UInt32 DNMFIHOCPCD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_DNMFIHOCPCD_OFFSET))(this);
		}

		::System::Void PFMMONNCNHK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_PFMMONNCNHK_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPLMMCGAJDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPLMMCGAJDF*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPLMMCGAJDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPLMMCGAJDF*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPLMMCGAJDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

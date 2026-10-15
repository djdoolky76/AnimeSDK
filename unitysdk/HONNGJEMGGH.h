#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDEIAANGMDB;
class HONNGJEMGGH;
class MONJNCPINKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HONNGJEMGGH_ACBOLCFFJEB_OFFSET UNITYSDK_OFFSET(0x1E5C46A0)
#define HONNGJEMGGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C4C50)
#define HONNGJEMGGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C50E0)
#define HONNGJEMGGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C45F0)
#define HONNGJEMGGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C44C0)
#define HONNGJEMGGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4470)
#define HONNGJEMGGH_DMCLJAJNHGF_OFFSET UNITYSDK_OFFSET(0x1E5C4650)
#define HONNGJEMGGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C4730)
#define HONNGJEMGGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C46D0)
#define HONNGJEMGGH_FMPHOHDJGLF_OFFSET UNITYSDK_OFFSET(0x1E5C4690)
#define HONNGJEMGGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C4890)
#define HONNGJEMGGH_GJJOEBCJJEG_OFFSET UNITYSDK_OFFSET(0x1E5C4680)
#define HONNGJEMGGH_IDEIBNEPFLI_OFFSET UNITYSDK_OFFSET(0x1E5C4670)
#define HONNGJEMGGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C4400)
#define HONNGJEMGGH_LJAELLCDJJJ_OFFSET UNITYSDK_OFFSET(0x1E5C4640)
#define HONNGJEMGGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C4F60)
#define HONNGJEMGGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C4E20)
#define HONNGJEMGGH_MFDCLCGOFAB_OFFSET UNITYSDK_OFFSET(0x1E5C4660)
#define HONNGJEMGGH_MIJAGALAJIO_OFFSET UNITYSDK_OFFSET(0x1E5C46B0)
#define HONNGJEMGGH_MOLJCJOHBEL_OFFSET UNITYSDK_OFFSET(0x1E5C46C0)
#define HONNGJEMGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C4460)
#define HONNGJEMGGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C4990)
#define HONNGJEMGGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C49F0)

inline static constexpr unsigned int HONNGJEMGGH_TypeDefinitionIndex = 29366;

	class HONNGJEMGGH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>* FDFBNBLNHLK; // 0x10
		::MONJNCPINKN* FOGHKGEKPCL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 IJIMMIJAKBM; // 0x28
		::System::Boolean PNEADCGGMMA; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 ADINADPDHDF; // 0x30
		static ::Google::Protobuf::MessageParser_1<::HONNGJEMGGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HONNGJEMGGH*>**)UnitySDK::FromName("", "HONNGJEMGGH")->GetStaticField(0x3E1D0);
		}

		static ::Google::Protobuf::FieldCodec_1<::HDEIAANGMDB*>** StaticGet_FEAFGBNBMEP()
		{
			return (::Google::Protobuf::FieldCodec_1<::HDEIAANGMDB*>**)UnitySDK::FromName("", "HONNGJEMGGH")->GetStaticField(0x3E1D8);
		}

		// static const ::System::Object LHADKDGDKAD; // 0x0
		// static const ::System::Object HOBJCPLGBOK; // 0x0
		// static const ::System::Object AGNKPMBOEPN; // 0x0
		// static const ::System::Object LAPBMLJPPAM; // 0x0
		// static const ::System::Object DOADNLHHMCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HONNGJEMGGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HONNGJEMGGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HONNGJEMGGH*>*(*)())((::PBYTE)hIl2Cpp + HONNGJEMGGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HONNGJEMGGH* Clone()
		{
			return ((::HONNGJEMGGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_CLONE_OFFSET))(this);
		}

		::MONJNCPINKN* LJAELLCDJJJ()
		{
			return ((::MONJNCPINKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_LJAELLCDJJJ_OFFSET))(this);
		}

		::System::Void DMCLJAJNHGF(::MONJNCPINKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MONJNCPINKN*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_DMCLJAJNHGF_OFFSET))(this, a1);
		}

		::System::UInt32 MFDCLCGOFAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_MFDCLCGOFAB_OFFSET))(this);
		}

		::System::Void IDEIBNEPFLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HONNGJEMGGH_IDEIBNEPFLI_OFFSET))(this, a1);
		}

		::System::Boolean GJJOEBCJJEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_GJJOEBCJJEG_OFFSET))(this);
		}

		::System::Void FMPHOHDJGLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HONNGJEMGGH_FMPHOHDJGLF_OFFSET))(this, a1);
		}

		::System::UInt32 ACBOLCFFJEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_ACBOLCFFJEB_OFFSET))(this);
		}

		::System::Void MIJAGALAJIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HONNGJEMGGH_MIJAGALAJIO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>* MOLJCJOHBEL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HDEIAANGMDB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_MOLJCJOHBEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HONNGJEMGGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HONNGJEMGGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HONNGJEMGGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HONNGJEMGGH*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HONNGJEMGGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

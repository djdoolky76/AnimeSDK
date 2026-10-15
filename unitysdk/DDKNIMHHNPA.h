#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDKNIMHHNPA;
class EHMEPOMCGNG;
class LPGJPLMHKFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDKNIMHHNPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E152D20)
#define DDKNIMHHNPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E153180)
#define DDKNIMHHNPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E152840)
#define DDKNIMHHNPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E152720)
#define DDKNIMHHNPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1526B0)
#define DDKNIMHHNPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E152920)
#define DDKNIMHHNPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1528F0)
#define DDKNIMHHNPA_FEAIHEKBAIM_OFFSET UNITYSDK_OFFSET(0x1E1528E0)
#define DDKNIMHHNPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1529F0)
#define DDKNIMHHNPA_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1E1528A0)
#define DDKNIMHHNPA_HADLEOMNCJC_OFFSET UNITYSDK_OFFSET(0x1E152870)
#define DDKNIMHHNPA_IONAOLENJBF_OFFSET UNITYSDK_OFFSET(0x1E1528B0)
#define DDKNIMHHNPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E152670)
#define DDKNIMHHNPA_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1E152890)
#define DDKNIMHHNPA_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E1528D0)
#define DDKNIMHHNPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E153020)
#define DDKNIMHHNPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E152F00)
#define DDKNIMHHNPA_MKBAHHJODPG_OFFSET UNITYSDK_OFFSET(0x1E152880)
#define DDKNIMHHNPA_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E1528C0)
#define DDKNIMHHNPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1526A0)
#define DDKNIMHHNPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E152A90)
#define DDKNIMHHNPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E152AF0)

inline static constexpr unsigned int DDKNIMHHNPA_TypeDefinitionIndex = 27924;

	class DDKNIMHHNPA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EHMEPOMCGNG*>* FIPHIFKJKDA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::LPGJPLMHKFL*>* HGELOMDPHGI; // 0x20
		::System::UInt32 AJHOJKFPMLL; // 0x28
		::System::Boolean BBJIDLMAPDF; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 HJEGLCJEOKC; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::LPGJPLMHKFL*>** StaticGet_DABOCGGDGAP()
		{
			return (::Google::Protobuf::FieldCodec_1<::LPGJPLMHKFL*>**)UnitySDK::FromName("", "DDKNIMHHNPA")->GetStaticField(0x25D40);
		}

		static ::Google::Protobuf::MessageParser_1<::DDKNIMHHNPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDKNIMHHNPA*>**)UnitySDK::FromName("", "DDKNIMHHNPA")->GetStaticField(0x25D48);
		}

		static ::Google::Protobuf::FieldCodec_1<::EHMEPOMCGNG*>** StaticGet_PAIEBPAJMBG()
		{
			return (::Google::Protobuf::FieldCodec_1<::EHMEPOMCGNG*>**)UnitySDK::FromName("", "DDKNIMHHNPA")->GetStaticField(0x25D50);
		}

		// static const ::System::Object EMAAFDGEFOA; // 0x0
		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object NCHMGNOPAAO; // 0x0
		// static const ::System::Object EKJIPCEFPOG; // 0x0
		// static const ::System::Object JIHDJDPFNCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDKNIMHHNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDKNIMHHNPA*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDKNIMHHNPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DDKNIMHHNPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDKNIMHHNPA*>*(*)())((::PBYTE)hIl2Cpp + DDKNIMHHNPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDKNIMHHNPA* Clone()
		{
			return ((::DDKNIMHHNPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HADLEOMNCJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_HADLEOMNCJC_OFFSET))(this);
		}

		::System::Void MKBAHHJODPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_MKBAHHJODPG_OFFSET))(this, a1);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EHMEPOMCGNG*>* IONAOLENJBF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EHMEPOMCGNG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_IONAOLENJBF_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LPGJPLMHKFL*>* FEAIHEKBAIM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LPGJPLMHKFL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_FEAIHEKBAIM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDKNIMHHNPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDKNIMHHNPA*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDKNIMHHNPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDKNIMHHNPA*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDKNIMHHNPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};

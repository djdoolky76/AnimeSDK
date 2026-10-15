#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDENAMMEHM;
class GLLAALNAHNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLLAALNAHNE_BGGNLBDJJCG_OFFSET UNITYSDK_OFFSET(0x1E4C1E50)
#define GLLAALNAHNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C23C0)
#define GLLAALNAHNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C2920)
#define GLLAALNAHNE_CKOOKJLIKOO_OFFSET UNITYSDK_OFFSET(0x1E4C1E70)
#define GLLAALNAHNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C1DF0)
#define GLLAALNAHNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C1D10)
#define GLLAALNAHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C1CD0)
#define GLLAALNAHNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C1F00)
#define GLLAALNAHNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C1ED0)
#define GLLAALNAHNE_FHMIFHCCKMI_OFFSET UNITYSDK_OFFSET(0x1E4C1E90)
#define GLLAALNAHNE_FLJHGHCNMLD_OFFSET UNITYSDK_OFFSET(0x1E4C1E20)
#define GLLAALNAHNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C2060)
#define GLLAALNAHNE_HFKLAOMBPMD_OFFSET UNITYSDK_OFFSET(0x1E4C1E30)
#define GLLAALNAHNE_IBLJHEOKNBM_OFFSET UNITYSDK_OFFSET(0x1E4C1E40)
#define GLLAALNAHNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C1C90)
#define GLLAALNAHNE_KMLKDBPCDJF_OFFSET UNITYSDK_OFFSET(0x1E4C1EC0)
#define GLLAALNAHNE_LAGHEGMKJCF_OFFSET UNITYSDK_OFFSET(0x1E4C1E80)
#define GLLAALNAHNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C27E0)
#define GLLAALNAHNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C26D0)
#define GLLAALNAHNE_OGKOMNICMND_OFFSET UNITYSDK_OFFSET(0x1E4C1EB0)
#define GLLAALNAHNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C1CC0)
#define GLLAALNAHNE_PFHBBIGAGEE_OFFSET UNITYSDK_OFFSET(0x1E4C1E60)
#define GLLAALNAHNE_PJKKPPCEJEK_OFFSET UNITYSDK_OFFSET(0x1E4C1EA0)
#define GLLAALNAHNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C2110)
#define GLLAALNAHNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C2170)

inline static constexpr unsigned int GLLAALNAHNE_TypeDefinitionIndex = 33935;

	class GLLAALNAHNE : public ::System::Object
	{
	public:
		::GFDENAMMEHM* DFBHLGHEMHG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* HDJBLDHNMKF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 LFFEPJMGMGI; // 0x28
		::System::Byte _padding0[0x4];
		::System::UInt64 FDDOGFHKIGN; // 0x30
		::System::UInt32 IIJIBDNBOPO; // 0x38
		::System::UInt32 KNKNLKGEGFF; // 0x3C
		static ::Google::Protobuf::FieldCodec** StaticGet_ANEGEKMMMCI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GLLAALNAHNE")->GetStaticField(0x1F770);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLLAALNAHNE")->GetStaticField(0x1F778);
		}

		// static const ::System::Object GFBPPEBMICC; // 0x0
		// static const ::System::Object ACNCJLDLJEG; // 0x0
		// static const ::System::Object LGPFCKMAEGA; // 0x0
		// static const ::System::Object FBEFICEBGGN; // 0x0
		// static const ::System::Object ODABICNBJOP; // 0x0
		// static const ::System::Object GJDMJAHNGBP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLLAALNAHNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLAALNAHNE*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLLAALNAHNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLLAALNAHNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLLAALNAHNE* Clone()
		{
			return ((::GLLAALNAHNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_CLONE_OFFSET))(this);
		}

		::GFDENAMMEHM* FLJHGHCNMLD()
		{
			return ((::GFDENAMMEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_FLJHGHCNMLD_OFFSET))(this);
		}

		::System::Void HFKLAOMBPMD(::GFDENAMMEHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFDENAMMEHM*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_HFKLAOMBPMD_OFFSET))(this, a1);
		}

		::System::UInt32 IBLJHEOKNBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_IBLJHEOKNBM_OFFSET))(this);
		}

		::System::Void BGGNLBDJJCG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLLAALNAHNE_BGGNLBDJJCG_OFFSET))(this, a1);
		}

		::System::UInt32 PFHBBIGAGEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_PFHBBIGAGEE_OFFSET))(this);
		}

		::System::Void CKOOKJLIKOO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLLAALNAHNE_CKOOKJLIKOO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* LAGHEGMKJCF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_LAGHEGMKJCF_OFFSET))(this);
		}

		::System::UInt64 FHMIFHCCKMI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_FHMIFHCCKMI_OFFSET))(this);
		}

		::System::Void PJKKPPCEJEK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GLLAALNAHNE_PJKKPPCEJEK_OFFSET))(this, a1);
		}

		::System::UInt32 OGKOMNICMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_OGKOMNICMND_OFFSET))(this);
		}

		::System::Void KMLKDBPCDJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLLAALNAHNE_KMLKDBPCDJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLLAALNAHNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLLAALNAHNE*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLAALNAHNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLLAALNAHNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLAALNAHNE*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLLAALNAHNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
